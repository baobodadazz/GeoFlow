#ifndef DIALOG_SFMPOINTCLOUDCREATE_H
#define DIALOG_SFMPOINTCLOUDCREATE_H

#include <QDialog>

namespace Ui {
class Dialog_sfmpointcloudcreate;
}

class Dialog_sfmpointcloudcreate : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sfmpointcloudcreate(QWidget *parent = 0);
    ~Dialog_sfmpointcloudcreate();

public:
    Ui::Dialog_sfmpointcloudcreate *ui;
private slots:
    void on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseInputDir_clicked();
    void on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseOutputDir_clicked();
    void on_comboBox_triangulationMethod_activated(const QString &arg1);
    void on_comboBox_resectionMethod_activated(const QString &arg1);
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_SFMPOINTCLOUDCREATE_H
