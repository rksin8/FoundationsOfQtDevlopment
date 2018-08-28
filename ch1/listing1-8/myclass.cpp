

#include "myclass.h"

MyClass::MyClass(const QString& text, QObject* parent) : QObject(parent), text_(text){}

const QString& MyClass::text() const{
    return text_;
}

int MyClass::getLengthOfText() const{
    return text_.size();
}

void MyClass::setText(const QString& text){
    if (text_ == text) {
        return;
    }

    text_ = text;
    emit textChanged(text_);
}

