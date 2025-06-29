#ifndef computeDualFeasError_sDxi2otu_h_
#define computeDualFeasError_sDxi2otu_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeDualFeasError_sDxi2otu(int32_T nVar, const real_T gradLag
  [53320], boolean_T *gradOK, real_T *val);

#endif
