#ifndef xgemm_XNoVT0Nv_h_
#define xgemm_XNoVT0Nv_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_XNoVT0Nv(int32_T m, int32_T n, int32_T k, const real_T A[70225],
  int32_T ia0, const real_T B[37895], real_T C[70225]);

#endif
