#ifndef xgemm_QCnsMIUU_h_
#define xgemm_QCnsMIUU_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_QCnsMIUU(int32_T m, int32_T n, int32_T k, const real_T A[93025],
  int32_T ia0, const real_T B[50325], real_T C[93025]);

#endif
