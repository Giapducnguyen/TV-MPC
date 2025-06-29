#ifndef xgemm_sb5paClY_h_
#define xgemm_sb5paClY_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_sb5paClY(int32_T m, int32_T n, int32_T k, const real_T A[78961],
  int32_T ia0, const real_T B[42150], real_T C[78961]);

#endif
