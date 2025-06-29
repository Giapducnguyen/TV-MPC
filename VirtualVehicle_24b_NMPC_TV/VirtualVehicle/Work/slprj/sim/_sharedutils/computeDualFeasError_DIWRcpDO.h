#ifndef computeDualFeasError_DIWRcpDO_h_
#define computeDualFeasError_DIWRcpDO_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_DIWRcpDO(int32_T nVar, const real_T gradLag
  [90225], boolean_T *gradOK, real_T *val);

#endif
