#include "rtwtypes.h"
#include "TopKRows_M9BW8GMH.h"
#include "percolateDown_u4Bj0VII.h"
#include "sortLE_fTIm31wQ.h"

void TopKRows_M9BW8GMH(const real_T X[502], real_T B[6], int32_T b_I[6])
{
  int32_T heap[6];
  int32_T b_ii;
  int32_T child;
  int32_T firstChild;
  int32_T i;
  int32_T numToRemove;
  int32_T tmp;
  boolean_T newRowIsHigher;
  boolean_T valuesSwapped;
  for (i = 0; i < 6; i++) {
    heap[i] = 6 - i;
  }

  percolateDown_u4Bj0VII(heap, 3, X);
  percolateDown_u4Bj0VII(heap, 2, X);
  percolateDown_u4Bj0VII(heap, 1, X);
  for (numToRemove = 0; numToRemove < 496; numToRemove++) {
    if (numToRemove + 7 < heap[0]) {
      newRowIsHigher = sortLE_fTIm31wQ(X, numToRemove + 7, heap[0]);
    } else {
      newRowIsHigher = !sortLE_fTIm31wQ(X, heap[0], numToRemove + 7);
    }

    if (newRowIsHigher) {
      heap[0] = numToRemove + 7;
      percolateDown_u4Bj0VII(heap, 1, X);
    }
  }

  numToRemove = 1;
  for (b_ii = 5; b_ii >= 0; b_ii--) {
    b_I[b_ii] = heap[0];
    B[b_ii] = X[heap[0] - 1];
    tmp = heap[b_ii];
    heap[b_ii] = heap[0];
    heap[0] = tmp;
    tmp = 0;
    valuesSwapped = false;
    newRowIsHigher = true;
    firstChild = 2;
    while ((firstChild <= 6 - numToRemove) && (newRowIsHigher || valuesSwapped))
    {
      newRowIsHigher = false;
      child = firstChild - 1;
      if (firstChild + 1 <= 6 - numToRemove) {
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
