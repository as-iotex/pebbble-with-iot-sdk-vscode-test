#include "../common.h"

#include "layer_conf/iotex_layer_config.h"

#if defined(IOTEX_PSA_CRYPTO_C)

#if defined(MBEDTLS_PSA_CRYPTO_CONFIG)
#include "check_crypto_config.h"
#endif

#include "layer_psa/crypto.h"
#include "layer_psa/crypto_values.h"

#include "../psa_crypto_cipher.h"
#include "../psa_crypto_core.h"
#include "../psa_crypto_invasive.h"
#include "../psa_crypto_driver_wrappers.h"
#include "../psa_crypto_ecp.h"
#include "../psa_crypto_hash.h"
#include "../psa_crypto_mac.h"
#include "../psa_crypto_rsa.h"
#include "../psa_crypto_ecp.h"
#if defined(IOTEX_PSA_CRYPTO_SE_C)
#include "../psa_crypto_se.h"
#endif
#include "../psa_crypto_slot_management.h"
#include "../psa_crypto_storage.h"
#include "../psa_crypto_random_impl.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "layer_mbedtls/platform.h"
#if !defined(MBEDTLS_PLATFORM_C)
#define mbedtls_calloc calloc
#define mbedtls_free   free
#endif

#include "layer_mbedtls/aes.h"
#include "layer_mbedtls/asn1.h"
#include "layer_mbedtls/asn1write.h"
#include "layer_mbedtls/bignum.h"
#include "layer_mbedtls/camellia.h"
#include "layer_mbedtls/chacha20.h"
#include "layer_mbedtls/chachapoly.h"
#include "layer_mbedtls/cipher.h"
#include "layer_mbedtls/ccm.h"
#include "layer_mbedtls/cmac.h"
#include "layer_mbedtls/des.h"
#include "layer_mbedtls/ecdh.h"
#include "layer_mbedtls/ecp.h"
#include "layer_mbedtls/entropy.h"
#include "layer_mbedtls/error.h"
#include "layer_mbedtls/gcm.h"
#include "layer_mbedtls/md5.h"
#include "layer_mbedtls/md.h"
#include "../md_wrap.h"
#include "layer_mbedtls/pk.h"
#include "../pk_wrap.h"
#include "layer_mbedtls/platform_util.h"
#include "layer_mbedtls/error.h"
#include "layer_mbedtls/ripemd160.h"
#include "layer_mbedtls/rsa.h"
#include "layer_mbedtls/sha1.h"
#include "layer_mbedtls/sha256.h"
#include "layer_mbedtls/sha512.h"


/****************************************************************/
/* Global data, support functions and library management */
/****************************************************************/





/****************************************************************/
/* Key management */
/****************************************************************/





/****************************************************************/
/* Message digests */
/****************************************************************/





/****************************************************************/
/* MAC */
/****************************************************************/





/****************************************************************/
/* Asymmetric cryptography */
/****************************************************************/





/****************************************************************/
/* Symmetric cryptography */
/****************************************************************/





/****************************************************************/
/* AEAD */
/****************************************************************/





/****************************************************************/
/* Generators */
/****************************************************************/





/****************************************************************/
/* Key derivation */
/****************************************************************/





/****************************************************************/
/* Key agreement */
/****************************************************************/





/****************************************************************/
/* Random generation */
/****************************************************************/
#if defined(MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG)
psa_status_t mbedtls_psa_external_get_random(mbedtls_psa_external_random_context_t *context,
              uint8_t *output, size_t output_size, size_t *output_length)
{ 
    iotex_get_random(output, output_size);

    *output_length = output_size;

    return( PSA_SUCCESS );
}
#else
int mbedtls_hardware_poll( void *data, unsigned char *output, size_t len, size_t *olen )
{
    return iotex_entroy_get(output, len, olen);      
}
#endif /* !defined(MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG) */


/****************************************************************/
/* Module setup */
/****************************************************************/





#endif /* IOTEX_PSA_CRYPTO_C */
