#ifndef computeDualFeasError_MHOxpVG9_h_
#define computeDualFeasError_MHOxpVG9_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_MHOxpVG9(int32_T nVar, const real_T gradLag
  [160080], boolean_T *gradOK, real_T *val);

#endif
