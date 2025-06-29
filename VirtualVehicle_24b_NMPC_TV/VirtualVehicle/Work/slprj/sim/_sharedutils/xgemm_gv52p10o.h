#ifndef xgemm_gv52p10o_h_
#define xgemm_gv52p10o_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_gv52p10o(int32_T m, int32_T n, int32_T k, const real_T A[2304],
  int32_T lda, const real_T B[310249], int32_T ib0, real_T C[167657]);

#endif
