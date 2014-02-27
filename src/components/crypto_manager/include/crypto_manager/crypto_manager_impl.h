/*
 * \file crypto_manager_impl.h
 * \brief 
 *
 * Copyright (c) 2013, Ford Motor Company
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the
 * distribution.
 *
 * Neither the name of the Ford Motor Company nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef CRYPTO_MANAGER_IMPL_H_
#define CRYPTO_MANAGER_IMPL_H_

#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/err.h>

#include <string>

#include "crypto_manager/crypto_manager.h"
#include "crypto_manager/ssl_context.h"

namespace crypto_manager {
  std::string LastError();

  class CryptoManagerImpl : public CryptoManager {
   private:

    class SSLContextImpl : public SSLContext {
     public:
      SSLContextImpl(SSL *conn, BIO *bioIn, BIO *bioOut);
      virtual size_t DoHandshake(char *in_data,  size_t in_data_size,
                                 char *out_data, size_t out_data_size);
      virtual size_t Encrypt(char *in_data,  size_t in_data_size,
                             char *out_data, size_t out_data_size);
      virtual size_t Decrypt(char *in_data,  size_t in_data_size,
                             char *out_data, size_t out_data_size);
      virtual ~SSLContextImpl();
     private:
      SSL *connection_;
      BIO *bioIn_;
      BIO *bioOut_;
      BIO *bioFilter_;
    };

   public:
    virtual bool Init();
    virtual SSLContext *CreateSSLContext();
   private:
    SSL_CTX *context_;
  };
} // namespace crypto_manager

#endif /* CRYPTO_MANAGER_IMPL_H_ */