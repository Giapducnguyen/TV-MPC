#include "rtwtypes.h"
#include "compressBounds_0ZOADv5P.h"

void compressBounds_0ZOADv5P(int32_T indexLB[162], int32_T indexUB[162], int32_T
  *mLB, int32_T *mUB, int32_T *mFixed)
{
  int32_T idx;
  *mFixed = 0;
  for (idx = 0; idx < 27; idx++) {
    indexLB[idx] = idx + 1;
    indexUB[idx] = idx + 1;
  }

  *mUB = 27;
  *mLB = 27;
}
