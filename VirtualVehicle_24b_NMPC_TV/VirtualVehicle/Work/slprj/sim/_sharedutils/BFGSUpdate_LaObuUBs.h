#ifndef BFGSUpdate_LaObuUBs_h_
#define BFGSUpdate_LaObuUBs_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern boolean_T BFGSUpdate_LaObuUBs(int32_T nvar, real_T Bk[5625], const real_T
  sk[258], real_T yk[258], real_T workspace[125904]);

#endif
