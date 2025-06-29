#include "rtwtypes.h"
#include "compressBounds_eFgL2gr2.h"

void compressBounds_eFgL2gr2(int32_T indexLB[174], int32_T indexUB[174], int32_T
  *mLB, int32_T *mUB, int32_T *mFixed)
{
  int32_T idx;
  *mFixed = 0;
  for (idx = 0; idx < 31; idx++) {
    indexLB[idx] = idx + 1;
    indexUB[idx] = idx + 1;
  }

  *mUB = 31;
  *mLB = 31;
}
