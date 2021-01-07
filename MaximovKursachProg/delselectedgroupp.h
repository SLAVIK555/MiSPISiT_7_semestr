#ifndef DELSELECTEDGROUPP_H
#define DELSELECTEDGROUPP_H

#include <QDialog>

namespace Ui {
class DelSelectedGroupp;
}

class DelSelectedGroupp : public QDialog
{
    Q_OBJECT

public:
    explicit DelSelectedGroupp(QWidget *parent = nullptr);
    ~DelSelectedGroupp();

signals:
    void DSGNo_button_cliked();
    void DSGYes_button_cliked();

private slots:
    void on_DSGYespushButton_clicked();
    void on_DSGNopushButton_clicked();

private:
    Ui::DelSelectedGroupp *ui;
};

#endif // DELSELECTEDGROUPP_H
