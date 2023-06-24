#ifndef DIALOG_COORDINATEMAPPING_H
#define DIALOG_COORDINATEMAPPING_H

#include <QDialog>

namespace Ui {
class Dialog_CoordinateMapping;
}

class Dialog_CoordinateMapping : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_CoordinateMapping(QWidget *parent = 0);
    ~Dialog_CoordinateMapping();

public:
    Ui::Dialog_CoordinateMapping *ui;
private slots:
    void on_lineEdit_imageDir_cursorPositionChanged(int arg1, int arg2);
    void on_toolButton_imageDir_clicked();
    void on_lineEdit_dsmDir_cursorPositionChanged(int arg1, int arg2);
    void on_toolButton_dsmDir_clicked();
    void on_listView_images_activated(const QModelIndex &index);
    void on_listView_picked_points_activated(const QModelIndex &index);
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_COORDINATEMAPPING_H
