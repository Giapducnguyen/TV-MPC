#include "rtwtypes.h"
#include "TopKRows_A8o249li.h"
#include <emmintrin.h>
#include "percolateDown_RNsECeUr.h"
#include "sortLE_POl6Uh1z.h"

void TopKRows_A8o249li(const real_T X[531], real_T B[20], int32_T b_I[20])
{
  int32_T heap[20];
  int32_T b_ii;
  int32_T child;
  int32_T firstChild;
  int32_T i;
  int32_T numToRemove;
  int32_T tmp;
  boolean_T newRowIsHigher;
  boolean_T valuesSwapped;
  static const int32_T offsets[4] = { 0, 1, 2, 3 };

  for (i = 0; i <= 16; i += 4) {
    _mm_storeu_si128((__m128i *)&heap[i], _mm_sub_epi32(_mm_set1_epi32(20),
      _mm_add_epi32(_mm_set1_epi32(i), _mm_loadu_si128((const __m128i *)
      &offsets[0]))));
  }

  for (numToRemove = 9; numToRemove >= 0; numToRemove--) {
    percolateDown_RNsECeUr(heap, numToRemove + 1, X);
  }

  for (numToRemove = 0; numToRemove < 511; numToRemove++) {
    if (numToRemove + 21 < heap[0]) {
      newRowIsHigher = sortLE_POl6Uh1z(X, numToRemove + 21, heap[0]);
    } else {
      newRowIsHigher = !sortLE_POl6Uh1z(X, heap[0], numToRemove + 21);
    }

    if (newRowIsHigher) {
      heap[0] = numToRemove + 21;
      percolateDown_RNsECeUr(heap, 1, X);
    }
  }

  numToRemove = 1;
  for (b_ii = 19; b_ii >= 0; b_ii--) {
    b_I[b_ii] = heap[0];
    B[b_ii] = X[heap[0] - 1];
    tmp = heap[b_ii];
    heap[b_ii] = heap[0];
    heap[0] = tmp;
    tmp = 0;
    valuesSwapped = false;
    newRowIsHigher = true;
    firstChild = 2;
    while ((firstChild <= 20 - numToRemove) && (newRowIsHigher || valuesSwapped))
    {
      newRowIsHigher = false;
      child = firstChild - 1;
      if (firstChild + 1 <= 20 - numToRemove) {
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
