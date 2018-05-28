#ifndef BIGINT_H
#define BIGINT_H

#include "iota_types.h"

#ifdef __cplusplus
extern "C" {
#endif

int bigint_add_int(int32_t bigint_in[], int32_t int_in, int32_t bigint_out[], uint8_t len);
int bigint_add_bigint(const int32_t bigint_one[], const int32_t bigint_two[], int32_t bigint_out[], uint8_t len);
int bigint_sub_bigint(const int32_t bigint_one[], const int32_t bigint_two[], int32_t bigint_out[], uint8_t len);
int8_t bigint_cmp_bigint(const int32_t bigint_one[], const int32_t bigint_two[], uint8_t len);
int bigint_not(int32_t bigint[], uint8_t len);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif // BIGINT_H