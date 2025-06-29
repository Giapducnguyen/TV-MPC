#ifndef xgemm_OSUWitVE_h_
#define xgemm_OSUWitVE_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_OSUWitVE(int32_T m, int32_T n, int32_T k, const real_T A[84681],
  int32_T ia0, const real_T B[45105], real_T C[84681]);

#endif
