#ifndef computeDualFeasError_XOpXILKA_h_
#define computeDualFeasError_XOpXILKA_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_XOpXILKA(int32_T nVar, const real_T gradLag[265],
  boolean_T *gradOK, real_T *val);

#endif
