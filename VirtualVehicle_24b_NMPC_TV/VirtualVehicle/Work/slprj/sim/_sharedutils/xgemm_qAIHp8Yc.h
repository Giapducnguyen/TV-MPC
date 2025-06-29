#ifndef xgemm_qAIHp8Yc_h_
#define xgemm_qAIHp8Yc_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_qAIHp8Yc(int32_T m, int32_T n, int32_T k, const real_T A[11236],
  int32_T lda, const real_T B[484416], int32_T ib0, real_T C[254040]);

#endif
