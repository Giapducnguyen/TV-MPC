#ifndef computeGradLag_xG51nyih_h_
#define computeGradLag_xG51nyih_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void computeGradLag_xG51nyih(real_T workspace[486], int32_T nVar, const
  real_T grad[486], const real_T AineqTrans[133164], const real_T AeqTrans[31104],
  const int32_T finiteFixed[486], int32_T mFixed, const int32_T finiteLB[486],
  int32_T mLB, const int32_T finiteUB[486], int32_T mUB, const real_T lambda[907]);

#endif
