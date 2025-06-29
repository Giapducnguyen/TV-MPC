#ifndef xgemm_8x2PpGx3_h_
#define xgemm_8x2PpGx3_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_8x2PpGx3(int32_T m, int32_T n, int32_T k, const real_T A
  [231361], int32_T ia0, const real_T B[127465], real_T C[231361]);

#endif
