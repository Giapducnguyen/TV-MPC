#ifndef xgemm_LFhcLMUd_h_
#define xgemm_LFhcLMUd_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_LFhcLMUd(int32_T m, int32_T n, int32_T k, const real_T A[81796],
  int32_T ia0, const real_T B[45760], real_T C[81796]);

#endif
