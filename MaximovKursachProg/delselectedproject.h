#ifndef DELSELECTEDPROJECT_H
#define DELSELECTEDPROJECT_H

#include <QDialog>

namespace Ui {
class DelSelectedProject;
}

class DelSelectedProject : public QDialog
{
    Q_OBJECT

public:
    explicit DelSelectedProject(QWidget *parent = nullptr);
    ~DelSelectedProject();

signals:
    void No_button_cliked();
    void Yes_button_cliked();

private slots:
    void on_NopushButton_clicked();
    void on_YespushButton_clicked();

private:
    Ui::DelSelectedProject *ui;
};

#endif // DELSELECTEDPROJECT_H
