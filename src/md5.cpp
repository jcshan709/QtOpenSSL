#include "QtOpenSSL/md5.h"
#include "openssl/md5.h"
namespace md5 {
    QByteArray md5(QByteArrayView source) {
        MD5_CTX ctx;
        MD5_Init(&ctx);
        MD5_Update(&ctx, source.constData(), source.size());
        QByteArray result;
        result.resize(MD5_DIGEST_LENGTH);
        MD5_Final((unsigned char *)result.data(), &ctx);
        return result;
    }
    QByteArray md5_16bit(QByteArrayView source) {
        return QByteArray::fromHex(md5::md5(source).toHex().mid(8, 16));
    }
}