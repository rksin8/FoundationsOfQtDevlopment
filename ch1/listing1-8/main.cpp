#include "myclass.h"

#include<QDebug>

int main(int argc, char *argv[])
{
    QObject parent;

   MyClass* obj = new MyClass("text", &parent);
   MyClass* obj2 = new MyClass("another text", &parent);

    obj2->setText("test");

    
    QObject::connect( obj, SIGNAL(textChanged(const QString&)), 
            obj2, SLOT(setText(const QString&)));


    qDebug() << obj->text();
   qDebug() << obj->text() << "\n " << obj->getLengthOfText() << "\n";
   qDebug() << obj2->text() << "\n " << obj->getLengthOfText() << "\n";

    return 0;
}
