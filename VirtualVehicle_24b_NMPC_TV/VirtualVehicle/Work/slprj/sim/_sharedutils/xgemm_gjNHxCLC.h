#ifndef xgemm_gjNHxCLC_h_
#define xgemm_gjNHxCLC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_gjNHxCLC(int32_T m, int32_T n, int32_T k, const real_T A[3721],
  int32_T lda, const real_T B[116964], int32_T ib0, real_T C[64296]);

#endif
