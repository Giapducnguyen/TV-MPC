#ifndef xgemm_ZIQAlRKL_h_
#define xgemm_ZIQAlRKL_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_ZIQAlRKL(int32_T m, int32_T n, int32_T k, const real_T A[11025],
  int32_T lda, const real_T B[1149184], int32_T ib0, real_T C[608896]);

#endif
