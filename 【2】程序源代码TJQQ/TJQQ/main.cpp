
#include "widget.h"
#include "dialoglist.h"
#include <QApplication>

#pragma execution_character_set("utf-8")
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // Widget w;
    //w.show();
    DialogList d;
    d.show();
    return a.exec();
}
