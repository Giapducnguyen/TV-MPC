#ifndef computeDualFeasError_ptyEJLiM_h_
#define computeDualFeasError_ptyEJLiM_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_ptyEJLiM(int32_T nVar, const real_T gradLag
  [33885], boolean_T *gradOK, real_T *val);

#endif
