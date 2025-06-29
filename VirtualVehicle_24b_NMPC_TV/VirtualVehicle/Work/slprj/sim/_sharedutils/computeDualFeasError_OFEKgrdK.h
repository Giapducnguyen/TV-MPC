#ifndef computeDualFeasError_OFEKgrdK_h_
#define computeDualFeasError_OFEKgrdK_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_OFEKgrdK(int32_T nVar, const real_T gradLag
  [108045], boolean_T *gradOK, real_T *val);

#endif
