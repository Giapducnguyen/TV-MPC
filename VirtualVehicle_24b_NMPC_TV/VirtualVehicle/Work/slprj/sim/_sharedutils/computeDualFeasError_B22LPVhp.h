#ifndef computeDualFeasError_B22LPVhp_h_
#define computeDualFeasError_B22LPVhp_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_B22LPVhp(int32_T nVar, const real_T gradLag[178],
  boolean_T *gradOK, real_T *val);

#endif
