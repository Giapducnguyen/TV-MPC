#ifndef xgemm_DI8U32YA_h_
#define xgemm_DI8U32YA_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_DI8U32YA(int32_T m, int32_T n, int32_T k, const real_T A[58081],
  int32_T ia0, const real_T B[30366], real_T C[58081]);

#endif
