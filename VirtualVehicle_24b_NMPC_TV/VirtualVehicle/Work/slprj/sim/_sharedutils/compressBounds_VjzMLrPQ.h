#ifndef compressBounds_VjzMLrPQ_h_
#define compressBounds_VjzMLrPQ_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void compressBounds_VjzMLrPQ(int32_T indexLB[251], int32_T indexUB[251],
  int32_T indexFixed[251], const real_T ub[50], int32_T *mLB, int32_T *mUB,
  int32_T *mFixed);

#endif
