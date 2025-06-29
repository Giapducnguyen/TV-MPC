#ifndef xgemm_CyneG8VP_h_
#define xgemm_CyneG8VP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_CyneG8VP(int32_T m, int32_T n, int32_T k, const real_T A[90601],
  int32_T ia0, const real_T B[48762], real_T C[90601]);

#endif
