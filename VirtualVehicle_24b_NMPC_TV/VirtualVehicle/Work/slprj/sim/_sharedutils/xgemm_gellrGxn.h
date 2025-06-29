#ifndef xgemm_gellrGxn_h_
#define xgemm_gellrGxn_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_gellrGxn(int32_T m, int32_T n, int32_T k, const real_T A[3025],
  int32_T lda, const real_T B[315844], int32_T ib0, real_T C[167476]);

#endif
