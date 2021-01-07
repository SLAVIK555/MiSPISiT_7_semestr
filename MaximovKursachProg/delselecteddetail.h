#ifndef DELSELECTEDDETAIL_H
#define DELSELECTEDDETAIL_H

#include <QDialog>

namespace Ui {
class DelSelectedDetail;
}

class DelSelectedDetail : public QDialog
{
    Q_OBJECT

public:
    explicit DelSelectedDetail(QWidget *parent = nullptr);
    ~DelSelectedDetail();

signals:
    void DSDNo_button_cliked();
    void DSDYes_button_cliked();

private slots:
    void on_DSDNopushButton_clicked();
    void on_DSDYespushButton_clicked();

private:
    Ui::DelSelectedDetail *ui;
};

#endif // DELSELECTEDDETAIL_H
