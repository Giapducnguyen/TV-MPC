#ifndef xgemm_s1ciMRjs_h_
#define xgemm_s1ciMRjs_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_s1ciMRjs(int32_T m, int32_T n, int32_T k, const real_T A[67600],
  int32_T ia0, const real_T B[35880], real_T C[67600]);

#endif
