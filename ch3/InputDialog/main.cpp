#include <QApplication>
#include <QDialog>
#include <QInputDialog>
#include <QString>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

class QStringList;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    bool ok;

    QString text = QInputDialog::getText(
            0,
            QObject::tr("String"),
            QObject::tr("Enter a city name:"),
            QLineEdit::Normal,
            QObject::tr("Alingsas"),
            &ok);


    if(ok && !text.isEmpty()){
        QMessageBox::information(0, "City Name",
                QString("city name is %1").arg(text));
    }

    ok = false;
    QStringList items;
    items << QObject::tr("Foo") << QObject::tr("Bar") << QObject::tr("Baz");

    QString item = QInputDialog::getItem(
            0,
            QObject::tr("Item"),
            QObject::tr("Pick an item:"),
            items,
            0,
            false,
            &ok);



    if(ok && !item.isEmpty()){
        QMessageBox::information(0, "Item",
                QString("You picked %1").arg(item));
    }


    
    return app.exec();
}




