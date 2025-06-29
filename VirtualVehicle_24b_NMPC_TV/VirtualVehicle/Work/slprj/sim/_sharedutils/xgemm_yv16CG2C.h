#ifndef xgemm_yv16CG2C_h_
#define xgemm_yv16CG2C_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_yv16CG2C(int32_T m, int32_T n, int32_T k, const real_T A
  [158404], int32_T ia0, const real_T B[85968], real_T C[158404]);

#endif
