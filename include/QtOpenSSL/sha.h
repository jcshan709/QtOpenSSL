#pragma once
#include <QByteArray>
namespace sha {
	QByteArray sha1(QByteArrayView source);
	QByteArray sha224(QByteArrayView source);
	QByteArray sha256(QByteArrayView source);
	QByteArray sha384(QByteArrayView source);
	QByteArray sha512(QByteArrayView source);
	constexpr qsizetype
	sha1_size = 20,
	sha224_size = 28,
	sha256_size = 32,
	sha384_size = 48,
	sha512_size = 64;
};
