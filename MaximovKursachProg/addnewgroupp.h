#ifndef ADDNEWGROUPP_H
#define ADDNEWGROUPP_H

#include <QDialog>

namespace Ui {
class AddNewGroupp;
}

class AddNewGroupp : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewGroupp(QWidget *parent = nullptr);
    ~AddNewGroupp();
    QString ANGgetGroupp();

signals:
    void ANG_button_cliked();

private slots:
    void on_ANGamelineEdit_textEdited(const QString &arg1);
    void on_ANGpushButton_clicked();

private:
    Ui::AddNewGroupp *ui;
    QString groupp_name;
};

#endif // ADDNEWGROUPP_H
