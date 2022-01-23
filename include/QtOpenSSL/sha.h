#pragma once
#include <QByteArray>
namespace sha {
	QByteArray sha1(QByteArrayView source);
	QByteArray sha224(QByteArrayView source);
	QByteArray sha256(QByteArrayView source);
	QByteArray sha384(QByteArrayView source);
	QByteArray sha512(QByteArrayView source);
};
