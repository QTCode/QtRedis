#include <QCoreApplication>
#include <QDebug>

#include "qReadisTest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qReadisTest  test;
    test.startTest();


    return a.exec();
}
