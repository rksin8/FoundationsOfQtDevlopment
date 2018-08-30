#include "fontdialog.h"

#include <QObject>
#include <QString>
#include <QFontDialog>
#include <QFont>
#include <QVBoxLayout>


Fontdialog::Fontdialog(QDialog* parent)
    :QDialog(parent){

    QVBoxLayout* vLayout = new QVBoxLayout(this);
    button = new QPushButton("Change Font", this);
    label = new QLabel("Some Text", this);
    
    vLayout->addWidget(button);    
    vLayout->addWidget(label);    

    connect(button, &QPushButton::clicked, this, &Fontdialog::updateLabel);

    //this->addWidget(label);
}


void Fontdialog::updateLabel(){

    bool ok;

    QFont font = QFontDialog::getFont(
            &ok,
            QFont("Arial",18),
            this,
            tr("Pick a font")
            );

    if(ok){
        //QString tmpFont = font.name();
        label->setFont(font);
        //label->setStyleSheet(QString("font: %1").arg(tmpFont));
    }
}
