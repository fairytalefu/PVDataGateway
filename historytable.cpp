#include "historytable.h"
#include "mainwindow.h"
#include "ui_historytable.h"
#include "ui_mainwindow.h"
HistoryTable::HistoryTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryTable)
{
    ui->setupUi(this);

}

HistoryTable::~HistoryTable()
{
    delete ui;
}

void HistoryTable::on_backTo_clicked()
{
  //  emit ValueChanged2(ui->lineEdit->text()); // newAge is an int
    QDialog::accept();
}
