#ifndef xgemm_7P3cXkms_h_
#define xgemm_7P3cXkms_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_7P3cXkms(int32_T m, int32_T n, int32_T k, const real_T A[65025],
  int32_T lda, const real_T B[6770404], int32_T ib0, real_T C[3585556]);

#endif
