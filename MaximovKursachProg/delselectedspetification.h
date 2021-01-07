#ifndef DELSELECTEDSPETIFICATION_H
#define DELSELECTEDSPETIFICATION_H

#include <QDialog>

namespace Ui {
class DelSelectedSpetification;
}

class DelSelectedSpetification : public QDialog
{
    Q_OBJECT

public:
    explicit DelSelectedSpetification(QWidget *parent = nullptr);
    ~DelSelectedSpetification();

signals:
    void DSSNo_button_cliked();
    void DSSYes_button_cliked();

private slots:
    void on_DSSNopushButton_clicked();
    void on_DSSYespushButton_clicked();

private:
    Ui::DelSelectedSpetification *ui;
};

#endif // DELSELECTEDSPETIFICATION_H
