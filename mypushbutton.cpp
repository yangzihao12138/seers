#include "mypushbutton.h"
#include  <QPainter>

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

}

MyPushButton::MyPushButton(QString normalImg,QString pressImg)
{
    normalImgPath=normalImg;
    pressedImgPath=pressImg;

}

void MyPushButton::mousePressEvent(QMouseEvent *e)
{
    if(this->pressImgPath!="")
    {
        QPixmap pix;
        bool ret=pix.load(this->pressImgPath);

    }
}
void MyPushButton::mouseReleaseEvent(QMouseEvent *e)
{

}
