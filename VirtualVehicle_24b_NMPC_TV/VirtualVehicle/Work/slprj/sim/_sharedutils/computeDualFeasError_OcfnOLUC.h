#ifndef computeDualFeasError_OcfnOLUC_h_
#define computeDualFeasError_OcfnOLUC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_OcfnOLUC(int32_T nVar, const real_T gradLag
  [219640], boolean_T *gradOK, real_T *val);

#endif
