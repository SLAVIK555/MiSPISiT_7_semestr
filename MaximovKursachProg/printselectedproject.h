#ifndef PRINTSELECTEDPROJECT_H
#define PRINTSELECTEDPROJECT_H

#include <QDialog>

namespace Ui {
class PrintSelectedProject;
}

class PrintSelectedProject : public QDialog
{
    Q_OBJECT

public:
    explicit PrintSelectedProject(QWidget *parent = nullptr);
    ~PrintSelectedProject();
    QString PSPgetFile();

signals:
    void PSP_button_clicked();

private slots:
    void on_PSPlineEdit_textEdited(const QString &arg1);
    void on_PSPpushButton_clicked();

private:
    Ui::PrintSelectedProject *ui;
    QString psp_file;
};

#endif // PRINTSELECTEDPROJECT_H
