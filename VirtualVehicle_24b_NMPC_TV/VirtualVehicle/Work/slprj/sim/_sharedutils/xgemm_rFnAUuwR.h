#ifndef xgemm_rFnAUuwR_h_
#define xgemm_rFnAUuwR_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_rFnAUuwR(int32_T m, int32_T n, int32_T k, const real_T A[63001],
  int32_T ia0, const real_T B[33885], real_T C[63001]);

#endif
