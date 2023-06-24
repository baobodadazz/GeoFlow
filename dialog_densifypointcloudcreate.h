#ifndef DIALOG_DENSIFYPOINTCLOUDCREATE_H
#define DIALOG_DENSIFYPOINTCLOUDCREATE_H

#include <QDialog>

namespace Ui {
class Dialog_densifypointcloudcreate;
}

class Dialog_densifypointcloudcreate : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_densifypointcloudcreate(QWidget *parent = 0);
    ~Dialog_densifypointcloudcreate();

public:
    Ui::Dialog_densifypointcloudcreate *ui;
private slots:
    void on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseInputDir_clicked();
    void on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseOutputDir_clicked();
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_DENSIFYPOINTCLOUDCREATE_H
