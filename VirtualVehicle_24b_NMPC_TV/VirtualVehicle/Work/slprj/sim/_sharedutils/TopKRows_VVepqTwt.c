#include "rtwtypes.h"
#include "TopKRows_VVepqTwt.h"
#include "percolateDown_uMCxFzci.h"
#include "sortLE_fTIm31wQ.h"

void TopKRows_VVepqTwt(const real_T X[502], real_T B[18], int32_T b_I[18])
{
  int32_T heap[18];
  int32_T b_ii;
  int32_T child;
  int32_T firstChild;
  int32_T i;
  int32_T numToRemove;
  int32_T tmp;
  boolean_T newRowIsHigher;
  boolean_T valuesSwapped;
  for (i = 0; i < 18; i++) {
    heap[i] = 18 - i;
  }

  for (numToRemove = 8; numToRemove >= 0; numToRemove--) {
    percolateDown_uMCxFzci(heap, numToRemove + 1, X);
  }

  for (numToRemove = 0; numToRemove < 484; numToRemove++) {
    if (numToRemove + 19 < heap[0]) {
      newRowIsHigher = sortLE_fTIm31wQ(X, numToRemove + 19, heap[0]);
    } else {
      newRowIsHigher = !sortLE_fTIm31wQ(X, heap[0], numToRemove + 19);
    }

    if (newRowIsHigher) {
      heap[0] = numToRemove + 19;
      percolateDown_uMCxFzci(heap, 1, X);
    }
  }

  numToRemove = 1;
  for (b_ii = 17; b_ii >= 0; b_ii--) {
    b_I[b_ii] = heap[0];
    B[b_ii] = X[heap[0] - 1];
    tmp = heap[b_ii];
    heap[b_ii] = heap[0];
    heap[0] = tmp;
    tmp = 0;
    valuesSwapped = false;
    newRowIsHigher = true;
    firstChild = 2;
    while ((firstChild <= 18 - numToRemove) && (newRowIsHigher || valuesSwapped))
    {
      newRowIsHigher = false;
      child = firstChild - 1;
      if (firstChild + 1 <= 18 - numToRemove) {
        i = heap[firstChild - 1];
        if (i < heap[firstChild]) {
          valuesSwapped = sortLE_fTIm31wQ(X, i, heap[firstChild]);
        } else {
          valuesSwapped = !sortLE_fTIm31wQ(X, heap[firstChild], i);
        }

        if (valuesSwapped) {
          child = firstChild;
        }
      }

      if (heap[tmp] < heap[child]) {
        valuesSwapped = sortLE_fTIm31wQ(X, heap[tmp], heap[child]);
      } else {
        valuesSwapped = !sortLE_fTIm31wQ(X, heap[child], heap[tmp]);
      }

      if (valuesSwapped) {
        firstChild = heap[tmp];
        heap[tmp] = heap[child];
        heap[child] = firstChild;
        tmp = child;
        firstChild = (child << 1) + 2;
      }
    }

    numToRemove++;
  }
}
