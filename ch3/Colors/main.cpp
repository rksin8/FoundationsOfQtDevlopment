#include <QApplication>

#include "colordialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Colordialog dlg;

    dlg.show();


    return app.exec();
}
