#include "QtOpenSSL.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QIODevice>

// I/O Stream
QTextStream qin(stdin, QIODevice::ReadOnly), qout(stdout, QIODevice::WriteOnly);

int main(int argc, char **argv) {
    using namespace Qt;
    QCoreApplication a(argc, argv);
    QString text = "Hello, World!";
    QByteArray result = sha::sha256(text.toUtf8());
    result = result.toHex(); // convert to hex format
    qout << QString::fromLatin1(result) << endl;
    return a.exec();
}