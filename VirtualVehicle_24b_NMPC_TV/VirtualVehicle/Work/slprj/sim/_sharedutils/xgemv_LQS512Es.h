#ifndef xgemv_LQS512Es_h_
#define xgemv_LQS512Es_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_LQS512Es(int32_T m, const real_T A[6534], const real_T x
  [110352], real_T y[456]);

#endif
