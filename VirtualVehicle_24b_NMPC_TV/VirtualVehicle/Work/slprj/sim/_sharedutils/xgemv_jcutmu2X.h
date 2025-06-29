#ifndef xgemv_jcutmu2X_h_
#define xgemv_jcutmu2X_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_jcutmu2X(int32_T m, int32_T n, const real_T A[2304], int32_T
  lda, const real_T x[309], real_T y[308]);

#endif
