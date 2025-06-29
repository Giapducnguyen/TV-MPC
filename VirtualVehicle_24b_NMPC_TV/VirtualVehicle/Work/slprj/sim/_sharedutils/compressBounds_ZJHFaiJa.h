#ifndef compressBounds_ZJHFaiJa_h_
#define compressBounds_ZJHFaiJa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void compressBounds_ZJHFaiJa(int32_T indexLB[124], int32_T indexUB[124],
  int32_T indexFixed[124], const real_T ub[29], int32_T *mLB, int32_T *mUB,
  int32_T *mFixed);

#endif
