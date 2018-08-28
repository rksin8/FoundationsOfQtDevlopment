#ifndef MYCLASS_H_
#define MYCLASS_H_


#include <QString>
#include <QObject>


class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass (const QString& text, QObject* parent=0);

    const QString& text() const;
    int getLengthOfText() const;



public slots:
    void setText(const QString& text);


signals:
   void textChanged(const QString&);

private:
   QString text_;
};


#endif 



