#ifndef xgemm_hPCPNDMQ_h_
#define xgemm_hPCPNDMQ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemm_hPCPNDMQ(int32_T m, int32_T n, int32_T k, const real_T A[676],
  int32_T lda, const real_T B[48841], int32_T ib0, real_T C[26741]);

#endif
