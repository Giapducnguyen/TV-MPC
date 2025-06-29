#ifndef computeDualFeasError_1cgnBBMI_h_
#define computeDualFeasError_1cgnBBMI_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_1cgnBBMI(int32_T nVar, const real_T gradLag[275],
  boolean_T *gradOK, real_T *val);

#endif
