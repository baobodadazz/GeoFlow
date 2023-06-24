#include "quicreator.h"
#include "dialog_automake.h"
#include "dialog_camset.h"
#include "dialog_coordinatemapping.h"
#include "dialog_densifypointcloudcreate.h"
#include "dialog_featurematch.h"
#include "dialog_pointinfo.h"
#include "dialog_sfmpointcloudcreate.h"
#include "dialog_texturemesh.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    a.setFont(QFont("Microsoft Yahei", 9));
    a.setWindowIcon(QIcon(":/main.ico"));

    QUICreator mQUICreator;
    mQUICreator.setWindowTitle("GeoFlow 2.0.3   制作: 赵晨, 卢润榉, 张子晗");
    mQUICreator.show();

    return a.exec();
}

//viewer -i F:\GFTest\output\globalSFM\scene_dense_mesh_refine_texture.mvs --export-type obj -w F:\GFTest\output\globalSFM\
