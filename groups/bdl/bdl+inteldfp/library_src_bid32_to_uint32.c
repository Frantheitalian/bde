#include <bsls_platform.h>

#if BSLS_PLATFORM_OS_LINUX && BSLS_PLATFORM_CMP_GNU
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#include "LIBRARY/src/bid32_to_uint32.c"
#pragma GCC diagnostic pop
#endif