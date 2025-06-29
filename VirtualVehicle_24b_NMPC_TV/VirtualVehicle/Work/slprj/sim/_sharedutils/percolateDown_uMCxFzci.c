#include "rtwtypes.h"
#include "percolateDown_uMCxFzci.h"
#include "sortLE_fTIm31wQ.h"

void percolateDown_uMCxFzci(int32_T heap[18], int32_T parent, const real_T X[502])
{
  int32_T child;
  int32_T firstChild;
  int32_T tmp;
  boolean_T firstIteration;
  boolean_T valuesSwapped;
  valuesSwapped = false;
  firstIteration = true;
  firstChild = ((parent - 1) << 1) + 2;
  while ((firstChild <= 18) && (firstIteration || valuesSwapped)) {
    firstIteration = false;
    child = firstChild - 1;
    if (firstChild + 1 <= 18) {
      tmp = heap[firstChild - 1];
      if (tmp < heap[firstChild]) {
        valuesSwapped = sortLE_fTIm31wQ(X, tmp, heap[firstChild]);
      } else {
        valuesSwapped = !sortLE_fTIm31wQ(X, heap[firstChild], tmp);
      }

      if (valuesSwapped) {
        child = firstChild;
      }
    }

    tmp = heap[parent - 1];
    if (tmp < heap[child]) {
      valuesSwapped = sortLE_fTIm31wQ(X, tmp, heap[child]);
    } else {
      valuesSwapped = !sortLE_fTIm31wQ(X, heap[child], tmp);
    }

    if (valuesSwapped) {
      heap[parent - 1] = heap[child];
      heap[child] = tmp;
      parent = child + 1;
      firstChild = (child << 1) + 2;
    }
  }
}
