#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BMSOut_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "BMSOut.h"
#include "BMSOut_capi.h"
#include "BMSOut_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static TARGET_CONST
rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 }
} ; static int_T rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2048926167U , 3847668778U , 3749240297U , 513130124U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * BMSOut_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BMSOut_InitializeSystemRan ( oq5eurmbom * const dwsl3wlhtm ,
sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( dwsl3wlhtm ) ; systemRan [ 0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = dwsl3wlhtm -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BMSOut_InitializeDataMapInfo ( oq5eurmbom * const dwsl3wlhtm , void *
sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( dwsl3wlhtm -> DataMapInfo
. mmi , 1 ) ; rtwCAPI_SetStaticMap ( dwsl3wlhtm -> DataMapInfo . mmi , &
mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( dwsl3wlhtm -> DataMapInfo . mmi ,
& mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( dwsl3wlhtm -> DataMapInfo . mmi
, ( NULL ) ) ; rtwCAPI_SetFullPath ( dwsl3wlhtm -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetInstanceLoggingInfo ( dwsl3wlhtm -> DataMapInfo . mmi , &
dwsl3wlhtm -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( dwsl3wlhtm -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dwsl3wlhtm -> DataMapInfo . mmi , 0 ) ; BMSOut_InitializeSystemRan ( dwsl3wlhtm , dwsl3wlhtm -> DataMapInfo . systemRan , dwsl3wlhtm -> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( dwsl3wlhtm -> DataMapInfo . mmi , dwsl3wlhtm -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( dwsl3wlhtm -> DataMapInfo . mmi , dwsl3wlhtm -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( dwsl3wlhtm -> DataMapInfo . mmi , & dwsl3wlhtm -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BMSOut_host_InitializeDataMapInfo ( BMSOut_host_DataMapInfo_T * dataMap
, const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
