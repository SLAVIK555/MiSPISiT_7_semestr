#ifndef PRINTSELECTEDSPETIFICATION_H
#define PRINTSELECTEDSPETIFICATION_H

#include <QDialog>

namespace Ui {
class PrintSelectedSpetification;
}

class PrintSelectedSpetification : public QDialog
{
    Q_OBJECT

public:
    explicit PrintSelectedSpetification(QWidget *parent = nullptr);
    ~PrintSelectedSpetification();
    QString PSSgetFile();

signals:
    void PSS_button_clicked();

private slots:
    void on_PSSpushButton_clicked();
    void on_PSSlineEdit_textEdited(const QString &arg1);

private:
    Ui::PrintSelectedSpetification *ui;
    QString pss_file;
};

#endif // PRINTSELECTEDSPETIFICATION_H
