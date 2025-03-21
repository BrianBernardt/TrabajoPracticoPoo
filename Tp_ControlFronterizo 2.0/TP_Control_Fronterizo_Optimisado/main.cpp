#include "mainwindow.h"
#include "persona.h"
#include "aldeano.h"
#include "revolucionario.h"
#include "diplomatico.h"
#include "refugiadopolitico.h"

#include <QApplication>

int main(int argc, char *argv[])
{



    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
