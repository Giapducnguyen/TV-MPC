#include "rtwtypes.h"
#include "percolateDown_0nfY5RnN.h"
#include "sortLE_r9ISyzQw.h"

void percolateDown_0nfY5RnN(int32_T heap[10], int32_T parent, const real_T X[503])
{
  int32_T child;
  int32_T firstChild;
  int32_T tmp;
  boolean_T firstIteration;
  boolean_T valuesSwapped;
  valuesSwapped = false;
  firstIteration = true;
  firstChild = ((parent - 1) << 1) + 2;
  while ((firstChild <= 10) && (firstIteration || valuesSwapped)) {
    firstIteration = false;
    child = firstChild - 1;
    if (firstChild + 1 <= 10) {
      tmp = heap[firstChild - 1];
      if (tmp < heap[firstChild]) {
        valuesSwapped = sortLE_r9ISyzQw(X, tmp, heap[firstChild]);
      } else {
        valuesSwapped = !sortLE_r9ISyzQw(X, heap[firstChild], tmp);
      }

      if (valuesSwapped) {
        child = firstChild;
      }
    }

    tmp = heap[parent - 1];
    if (tmp < heap[child]) {
      valuesSwapped = sortLE_r9ISyzQw(X, tmp, heap[child]);
    } else {
      valuesSwapped = !sortLE_r9ISyzQw(X, heap[child], tmp);
    }

    if (valuesSwapped) {
      heap[parent - 1] = heap[child];
      heap[child] = tmp;
      parent = child + 1;
      firstChild = (child << 1) + 2;
    }
  }
}
