#include "ngocbrowser.h"
#include "ui_ngocbrowser.h"

#include <QMessageBox>

NgocBrowser::NgocBrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NgocBrowser)
{
    ui->setupUi(this);
}

NgocBrowser::~NgocBrowser()
{
    delete ui;
}


void NgocBrowser::on_addressEdit_returnPressed()
{
    ui->webView->load(ui->addressEdit->text());
}


void NgocBrowser::on_backButton_clicked()
{
    ui->webView->back();
}


void NgocBrowser::on_forwardButton_clicked()
{
    ui->webView->forward();
}


void NgocBrowser::on_helpButton_clicked()
{
    QMessageBox* helpBox = new QMessageBox;
    QString message = "Xin chao\n";
    message += "Day la trinh duyet cua NgocCoder \n";
    message += "de xem JAV\n";
    helpBox->setText(message);
    helpBox->exec();
}


void NgocBrowser::on_webView_urlChanged(const QUrl &arg1)
{
    ui->addressEdit->setText(ui->webView->url().toString());
}

