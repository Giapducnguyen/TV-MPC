#ifndef xgemm_mAR4A2NY_h_
#define xgemm_mAR4A2NY_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_mAR4A2NY(int32_T m, int32_T n, int32_T k, const real_T A[3721],
  int32_T lda, const real_T B[78961], int32_T ib0, real_T C[42150]);

#endif
