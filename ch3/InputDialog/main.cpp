#include <QApplication>
#include <QDialog>
#include <QInputDialog>
#include <QString>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

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
    
    return app.exec();
}




