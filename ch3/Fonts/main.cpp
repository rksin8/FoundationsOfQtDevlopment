#include <QApplication>
#include "fontdialog.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Fontdialog dlg;

    dlg.show();


    return app.exec();
}
