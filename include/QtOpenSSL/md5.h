#pragma once
#include <QByteArray>
namespace md5 {
    QByteArray md5(QByteArrayView source);
    QByteArray md4(QByteArrayView source);
    QByteArray md5_16bit(QByteArrayView source);
    constexpr qsizetype md5_size = 16, md4_size = 16;
}