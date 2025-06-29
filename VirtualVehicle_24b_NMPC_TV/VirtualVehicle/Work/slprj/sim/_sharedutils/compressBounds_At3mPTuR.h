#ifndef compressBounds_At3mPTuR_h_
#define compressBounds_At3mPTuR_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void compressBounds_At3mPTuR(int32_T indexLB[143], int32_T indexUB[143],
  int32_T indexFixed[143], const real_T ub[30], int32_T *mLB, int32_T *mUB,
  int32_T *mFixed);

#endif
