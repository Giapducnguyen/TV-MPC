#ifndef xgemm_24tyDucv_h_
#define xgemm_24tyDucv_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_24tyDucv(int32_T m, int32_T n, int32_T k, const real_T A
  [181476], int32_T ia0, const real_T B[97980], real_T C[181476]);

#endif
