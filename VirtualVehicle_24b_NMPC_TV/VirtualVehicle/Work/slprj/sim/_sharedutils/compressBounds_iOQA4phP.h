#ifndef compressBounds_iOQA4phP_h_
#define compressBounds_iOQA4phP_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void compressBounds_iOQA4phP(int32_T indexLB[136], int32_T indexUB[136],
  int32_T indexFixed[136], const real_T ub[25], int32_T *mLB, int32_T *mUB,
  int32_T *mFixed);

#endif
