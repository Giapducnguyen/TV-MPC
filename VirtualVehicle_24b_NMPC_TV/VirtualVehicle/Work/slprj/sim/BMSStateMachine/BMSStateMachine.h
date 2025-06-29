#ifndef BMSStateMachine_h_
#define BMSStateMachine_h_
#ifndef BMSStateMachine_COMMON_INCLUDES_
#define BMSStateMachine_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "BMSStateMachine_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
typedef struct { real32_T ewnzynkznj ; MonitorCellTempModeType oidlv5hukz ;
MonitorCellVoltageModeType borpftvga4 ; MonitorCurrLimModeType ihcu5vkj1j ;
uint16_T nmnx1vafrz ; uint16_T cuxj4x5pjg ; uint16_T meu54bugpg ; uint8_T
amwfee3rd2 ; uint8_T bndw2tfwt4 ; uint8_T b5luvtg2hg ; uint8_T a0kzuqa40c ;
uint8_T fcramzlskn ; uint8_T o2r2vfdpvc ; uint8_T jm2shtonf4 ; uint8_T
iy2a4iybnk ; uint8_T cdvnkxz2ew ; boolean_T fu5cxj205q ; Contact fvsjikl3td ;
Contact ptevanoxfi ; } eoqdd1sry4 ; struct ewqe2zdtlnq_ { real_T P_0 ;
real32_T P_1 ; real32_T P_2 ; real32_T P_3 ; real32_T P_4 ; real32_T P_5 ;
real32_T P_6 ; real32_T P_7 ; real32_T P_8 ; real32_T P_9 ; real32_T P_10 ;
real32_T P_11 ; uint16_T P_12 ; uint8_T P_13 ; uint8_T P_14 ; } ; struct
ip5ny4q1kv { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { eoqdd1sry4 rtdw ; prulmh2jni rtm ; } hmzlgbhyjam ; extern
void n2eo0cythm ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , prulmh2jni *
const frfcyh43es , eoqdd1sry4 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_BMSStateMachine_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_BMSStateMachine_GetDWork ( const hmzlgbhyjam * mdlrefDW ) ; extern void mr_BMSStateMachine_SetDWork ( hmzlgbhyjam * mdlrefDW , const mxArray * ssDW ) ; extern void mr_BMSStateMachine_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray * mr_BMSStateMachine_GetSimStateDisallowedBlocks ( ) ; extern const rtwCAPI_ModelMappingStaticInfo * BMSStateMachine_GetCAPIStaticMap ( void ) ; extern void c4qsdumjq2 ( real32_T * pwlp5l4a4i , boolean_T * bgba4belhh , boolean_T * azgg1ocqza , boolean_T * mj0cynmztp , boolean_T * i0hscfypvw , boolean_T * jkj3kgmxuf , boolean_T * lushghqlzg , boolean_T * hezlohk5zo , real32_T * bcdwlioiuc , eoqdd1sry4 * localDW ) ; extern void b24n3fhfdi ( real32_T * pwlp5l4a4i , boolean_T * bgba4belhh , boolean_T * azgg1ocqza , boolean_T * mj0cynmztp , boolean_T * i0hscfypvw , boolean_T * jkj3kgmxuf , boolean_T * lushghqlzg , boolean_T * hezlohk5zo , real32_T * bcdwlioiuc , eoqdd1sry4 * localDW ) ; extern void BMSStateMachine ( const real32_T * oruhyddbro , const real32_T aatb5pl15z [ 96 ] , const real32_T * c5cwh3kwbc , const real32_T * lbkohme3rp , const real32_T * ibls2z0cot , const real32_T * d0lgxpofgn , const real32_T * cx5scoxckm , const real32_T * iekdqsyjt0 , const real32_T * pjs15nw23z , const real32_T * ouprkmyayc , const real32_T * cqcv2k4hdc , const real32_T * hlejwyzhbo , real32_T * pwlp5l4a4i , boolean_T * bgba4belhh , boolean_T * azgg1ocqza , boolean_T * mj0cynmztp , boolean_T * i0hscfypvw , boolean_T * jkj3kgmxuf , boolean_T * lushghqlzg , boolean_T * hezlohk5zo , real32_T * bcdwlioiuc , eoqdd1sry4 * localDW ) ; extern void jqgqne15uw ( prulmh2jni * const frfcyh43es ) ;
#endif
