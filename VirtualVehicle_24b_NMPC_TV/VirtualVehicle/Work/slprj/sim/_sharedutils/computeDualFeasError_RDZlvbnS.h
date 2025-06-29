#ifndef computeDualFeasError_RDZlvbnS_h_
#define computeDualFeasError_RDZlvbnS_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_RDZlvbnS(int32_T nVar, const real_T gradLag[360],
  boolean_T *gradOK, real_T *val);

#endif
