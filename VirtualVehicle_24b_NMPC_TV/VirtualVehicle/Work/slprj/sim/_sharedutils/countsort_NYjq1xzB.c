#include "rtwtypes.h"
#include "countsort_NYjq1xzB.h"
#include <string.h>

void countsort_NYjq1xzB(int32_T x[273], int32_T xLen, int32_T workspace[273],
  int32_T xMin, int32_T xMax)
{
  int32_T b_tmp;
  int32_T idxEnd;
  int32_T idxFill;
  int32_T idxStart;
  int32_T maxOffset;
  if ((xLen > 1) && (xMax > xMin)) {
    b_tmp = xMax - xMin;
    if (b_tmp >= 0) {
      memset(&workspace[0], 0, (uint32_T)(b_tmp + 1) * sizeof(int32_T));
    }

    maxOffset = b_tmp - 1;
    for (b_tmp = 0; b_tmp < xLen; b_tmp++) {
      idxFill = x[b_tmp] - xMin;
      workspace[idxFill]++;
    }

    for (b_tmp = 2; b_tmp <= maxOffset + 2; b_tmp++) {
      workspace[b_tmp - 1] += workspace[b_tmp - 2];
    }

    idxStart = 1;
    idxEnd = workspace[0];
    for (b_tmp = 0; b_tmp <= maxOffset; b_tmp++) {
      for (idxFill = idxStart; idxFill <= idxEnd; idxFill++) {
        x[idxFill - 1] = b_tmp + xMin;
      }

      idxStart = workspace[b_tmp] + 1;
      idxEnd = workspace[b_tmp + 1];
    }

    for (maxOffset = idxStart; maxOffset <= idxEnd; maxOffset++) {
      x[maxOffset - 1] = xMax;
    }
  }
}
