#ifndef xgemm_MvnoshPW_h_
#define xgemm_MvnoshPW_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_MvnoshPW(int32_T m, int32_T n, int32_T k, const real_T A
  [270400], int32_T ia0, const real_T B[142480], real_T C[270400]);

#endif
