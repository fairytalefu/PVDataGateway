#ifndef HISTORYTABLE_H
#define HISTORYTABLE_H

#include <QDialog>

namespace Ui {
class HistoryTable;
}

class HistoryTable : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryTable(QWidget *parent = 0);

    ~HistoryTable();
public:
    Ui::HistoryTable *ui;
    QString lineText;
private slots:
    void on_backTo_clicked();
};

#endif // HISTORYTABLE_H
