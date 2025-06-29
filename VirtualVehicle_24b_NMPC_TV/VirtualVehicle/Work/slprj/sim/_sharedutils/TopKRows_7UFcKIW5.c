#include "rtwtypes.h"
#include "TopKRows_7UFcKIW5.h"
#include <emmintrin.h>
#include "percolateDown_BNzOx9Gp.h"
#include "sortLE_fTIm31wQ.h"

void TopKRows_7UFcKIW5(const real_T X[502], real_T B[12], int32_T b_I[12])
{
  int32_T heap[12];
  int32_T b_ii;
  int32_T child;
  int32_T firstChild;
  int32_T i;
  int32_T numToRemove;
  int32_T tmp;
  boolean_T newRowIsHigher;
  boolean_T valuesSwapped;
  static const int32_T offsets[4] = { 0, 1, 2, 3 };

  for (i = 0; i <= 8; i += 4) {
    _mm_storeu_si128((__m128i *)&heap[i], _mm_sub_epi32(_mm_set1_epi32(12),
      _mm_add_epi32(_mm_set1_epi32(i), _mm_loadu_si128((const __m128i *)
      &offsets[0]))));
  }

  for (numToRemove = 5; numToRemove >= 0; numToRemove--) {
    percolateDown_BNzOx9Gp(heap, numToRemove + 1, X);
  }

  for (numToRemove = 0; numToRemove < 490; numToRemove++) {
    if (numToRemove + 13 < heap[0]) {
      newRowIsHigher = sortLE_fTIm31wQ(X, numToRemove + 13, heap[0]);
    } else {
      newRowIsHigher = !sortLE_fTIm31wQ(X, heap[0], numToRemove + 13);
    }

    if (newRowIsHigher) {
      heap[0] = numToRemove + 13;
      percolateDown_BNzOx9Gp(heap, 1, X);
    }
  }

  numToRemove = 1;
  for (b_ii = 11; b_ii >= 0; b_ii--) {
    b_I[b_ii] = heap[0];
    B[b_ii] = X[heap[0] - 1];
    tmp = heap[b_ii];
    heap[b_ii] = heap[0];
    heap[0] = tmp;
    tmp = 0;
    valuesSwapped = false;
    newRowIsHigher = true;
    firstChild = 2;
    while ((firstChild <= 12 - numToRemove) && (newRowIsHigher || valuesSwapped))
    {
      newRowIsHigher = false;
      child = firstChild - 1;
      if (firstChild + 1 <= 12 - numToRemove) {
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
