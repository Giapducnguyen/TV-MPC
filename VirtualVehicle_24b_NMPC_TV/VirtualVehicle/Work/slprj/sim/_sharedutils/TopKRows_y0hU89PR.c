#include "rtwtypes.h"
#include "TopKRows_y0hU89PR.h"
#include "percolateDown_Vml1vKY2.h"
#include "sortLE_POl6Uh1z.h"

void TopKRows_y0hU89PR(const real_T X[531], real_T B[5], int32_T b_I[5])
{
  int32_T heap[5];
  int32_T b_ii;
  int32_T child;
  int32_T firstChild;
  int32_T i;
  int32_T numToRemove;
  int32_T tmp;
  boolean_T newRowIsHigher;
  boolean_T valuesSwapped;
  for (i = 0; i < 5; i++) {
    heap[i] = 5 - i;
  }

  percolateDown_Vml1vKY2(heap, 2, X);
  percolateDown_Vml1vKY2(heap, 1, X);
  for (numToRemove = 0; numToRemove < 526; numToRemove++) {
    if (numToRemove + 6 < heap[0]) {
      newRowIsHigher = sortLE_POl6Uh1z(X, numToRemove + 6, heap[0]);
    } else {
      newRowIsHigher = !sortLE_POl6Uh1z(X, heap[0], numToRemove + 6);
    }

    if (newRowIsHigher) {
      heap[0] = numToRemove + 6;
      percolateDown_Vml1vKY2(heap, 1, X);
    }
  }

  numToRemove = 1;
  for (b_ii = 4; b_ii >= 0; b_ii--) {
    b_I[b_ii] = heap[0];
    B[b_ii] = X[heap[0] - 1];
    tmp = heap[b_ii];
    heap[b_ii] = heap[0];
    heap[0] = tmp;
    tmp = 0;
    valuesSwapped = false;
    newRowIsHigher = true;
    firstChild = 2;
    while ((firstChild <= 5 - numToRemove) && (newRowIsHigher || valuesSwapped))
    {
      newRowIsHigher = false;
      child = firstChild - 1;
      if (firstChild + 1 <= 5 - numToRemove) {
        i = heap[firstChild - 1];
        if (i < heap[firstChild]) {
          valuesSwapped = sortLE_POl6Uh1z(X, i, heap[firstChild]);
        } else {
          valuesSwapped = !sortLE_POl6Uh1z(X, heap[firstChild], i);
        }

        if (valuesSwapped) {
          child = firstChild;
        }
      }

      if (heap[tmp] < heap[child]) {
        valuesSwapped = sortLE_POl6Uh1z(X, heap[tmp], heap[child]);
      } else {
        valuesSwapped = !sortLE_POl6Uh1z(X, heap[child], heap[tmp]);
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
