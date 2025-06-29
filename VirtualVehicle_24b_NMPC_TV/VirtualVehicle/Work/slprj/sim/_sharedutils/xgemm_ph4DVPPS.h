#ifndef xgemm_ph4DVPPS_h_
#define xgemm_ph4DVPPS_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_ph4DVPPS(int32_T m, int32_T n, int32_T k, const real_T A[5625],
  int32_T lda, const real_T B[270400], int32_T ib0, real_T C[142480]);

#endif
