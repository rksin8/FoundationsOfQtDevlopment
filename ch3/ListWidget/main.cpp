#include <QApplication>

#include "ListWidgetDialog.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ListWidgetDialog dlg;

    dlg.show();


    return app.exec();
}
