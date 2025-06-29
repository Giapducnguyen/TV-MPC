#include "rtwtypes.h"
#include "compressBounds_lvlj6IAh.h"
#include <emmintrin.h>

void compressBounds_lvlj6IAh(int32_T indexLB[721], int32_T indexUB[721], int32_T
  *mLB, int32_T *mUB, int32_T *mFixed)
{
  int32_T idx;
  static const int32_T offsets[4] = { 0, 1, 2, 3 };

  __m128i tmp;
  __m128i tmp_p;
  *mFixed = 0;
  for (idx = 0; idx <= 104; idx += 4) {
    tmp = _mm_set1_epi32(idx);
    tmp_p = _mm_set1_epi32(1);
    tmp = _mm_add_epi32(_mm_add_epi32(tmp, _mm_loadu_si128((const __m128i *)
      &offsets[0])), tmp_p);
    _mm_storeu_si128((__m128i *)&indexLB[idx], tmp);
    _mm_storeu_si128((__m128i *)&indexUB[idx], tmp);
  }

  *mUB = 108;
  *mLB = 108;
}
