#ifndef xgemm_JRbacArC_h_
#define xgemm_JRbacArC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_JRbacArC(int32_T m, int32_T n, int32_T k, const real_T A[93025],
  int32_T ia0, const real_T B[50630], real_T C[93025]);

#endif
