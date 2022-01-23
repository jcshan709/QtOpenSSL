#include "QtOpenSSL/sha.h"
#include "openssl/sha.h"
namespace sha {
	QByteArray sha1(QByteArrayView source) {
		SHA_CTX ctx;
		SHA1_Init(&ctx);
		SHA1_Update(&ctx, source.constData(), source.size());
		QByteArray result;
		result.resize(SHA_DIGEST_LENGTH);
		SHA1_Final((unsigned char *)result.data(), &ctx);
		return result;
		
	}
	QByteArray sha224(QByteArrayView source) {
		SHA256_CTX ctx;
		SHA224_Init(&ctx);
		SHA224_Update(&ctx, source.constData(), source.size());
		QByteArray result;
		result.resize(SHA224_DIGEST_LENGTH);
		SHA224_Final((unsigned char *)result.data(), &ctx);
		return result;
	}
	QByteArray sha256(QByteArrayView source) {
		SHA256_CTX ctx;
		SHA256_Init(&ctx);
		SHA256_Update(&ctx, source.constData(), source.size());
		QByteArray result;
		result.resize(SHA256_DIGEST_LENGTH);
		SHA256_Final((unsigned char *)result.data(), &ctx);
		return result;
	}
	QByteArray sha384(QByteArrayView source) {
		SHA512_CTX ctx;
		SHA384_Init(&ctx);
		SHA384_Update(&ctx, source.constData(), source.size());
		QByteArray result;
		result.resize(SHA384_DIGEST_LENGTH);
		SHA384_Final((unsigned char *)result.data(), &ctx);
		return result;
	}
	QByteArray sha512(QByteArrayView source) {
		SHA512_CTX ctx;
		SHA512_Init(&ctx);
		SHA512_Update(&ctx, source.constData(), source.size());
		QByteArray result;
		result.resize(SHA512_DIGEST_LENGTH);
		SHA512_Final((unsigned char *)result.data(), &ctx);
		return result;
	}
}