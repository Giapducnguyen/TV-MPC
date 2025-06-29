#ifndef xgemv_gBCLovGA_h_
#define xgemv_gBCLovGA_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_gBCLovGA(int32_T m, int32_T n, const real_T A[11025], int32_T
  lda, const real_T x[568], real_T y[567]);

#endif
