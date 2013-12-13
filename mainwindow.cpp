#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <smtp.h>
#include <QEventLoop>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->itemText(ui->comboBox->currentIndex());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QEventLoop loop; //დაატრიალებს ფუნქციას სანამ არ შესრულდება წარმატებით ან წარუმატებლად
   QString name= ui->lineEdit->text();
   QString pass = ui->label_2->text();
   QString myname = ui->lineEdit_3->text();
   QString heMail = ui->lineEdit_5->text();
   QString type = ui->lineEdit_4->text();
   QString post = ui->textEdit->toPlainText();

    Smtp* smtp = new Smtp(name, pass, ui->comboBox->currentText(), 465);
    smtp->sendMail(myname,heMail,type, post);

    loop.exec();
}
