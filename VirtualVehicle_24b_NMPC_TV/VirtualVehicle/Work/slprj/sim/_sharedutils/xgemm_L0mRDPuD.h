#ifndef xgemm_L0mRDPuD_h_
#define xgemm_L0mRDPuD_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_L0mRDPuD(int32_T m, int32_T n, int32_T k, const real_T A[8649],
  int32_T lda, const real_T B[470596], int32_T ib0, real_T C[246960]);

#endif
