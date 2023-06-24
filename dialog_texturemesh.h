#ifndef DIALOG_TEXTUREMESH_H
#define DIALOG_TEXTUREMESH_H

#include <QDialog>

namespace Ui {
class Dialog_texturemesh;
}

class Dialog_texturemesh : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_texturemesh(QWidget *parent = 0);
    ~Dialog_texturemesh();

public:
    Ui::Dialog_texturemesh *ui;
private slots:
    void on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2);
    void on_comboBox_activated(const QString &arg1);
    void on_pushButton_browseInputDir_clicked();
    void on_pushButton_browseOutputDir_clicked();
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_TEXTUREMESH_H
