#ifndef compressBounds_WFnyFhJn_h_
#define compressBounds_WFnyFhJn_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void compressBounds_WFnyFhJn(int32_T indexLB[126], int32_T indexUB[126],
  int32_T indexFixed[126], const real_T ub[25], int32_T *mLB, int32_T *mUB,
  int32_T *mFixed);

#endif
