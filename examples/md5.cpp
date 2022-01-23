#include "QtOpenSSL.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QIODevice>
using namespace Qt;
QTextStream qin(stdin, QIODevice::ReadOnly), qout(stdout, QIODevice::WriteOnly);
int main(int argc, char **argv) {
    QCoreApplication a(argc, argv);
    QString s = qin.readLine().trimmed();
    QByteArray result = md5::md5(s.toLatin1()).toHex();
    QByteArray result16 = md5::md5_16bit(s.toLatin1()).toHex();
    qout << "MD5 (32-bit): " << QString::fromLatin1(result) << endl;
    qout << "MD5 (16-bit): " << QString::fromLatin1(result16) << endl;
    return a.exec();
}