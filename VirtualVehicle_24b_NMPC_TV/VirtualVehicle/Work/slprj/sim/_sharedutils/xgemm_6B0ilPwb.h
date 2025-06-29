#ifndef xgemm_6B0ilPwb_h_
#define xgemm_6B0ilPwb_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_6B0ilPwb(int32_T m, int32_T n, int32_T k, const real_T A[4624],
  int32_T lda, const real_T B[693889], int32_T ib0, real_T C[374017]);

#endif
