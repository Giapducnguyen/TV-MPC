#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DriverPassThrough_capi_host.h"
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
#include "DriverPassThrough.h"
#include "DriverPassThrough_capi.h"
#include "DriverPassThrough_private.h"
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
{ 1905205944U , 355112376U , 3373323380U , 3686780064U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * DriverPassThrough_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DriverPassThrough_InitializeSystemRan ( puf0tombf2 * const
fqrkdx2hx2 , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( fqrkdx2hx2 ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = fqrkdx2hx2 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DriverPassThrough_InitializeDataMapInfo ( puf0tombf2 * const fqrkdx2hx2
, void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( fqrkdx2hx2 ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( fqrkdx2hx2 -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( fqrkdx2hx2 -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( fqrkdx2hx2 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( fqrkdx2hx2 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo ( fqrkdx2hx2
-> DataMapInfo . mmi , & fqrkdx2hx2 -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( fqrkdx2hx2 -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( fqrkdx2hx2 -> DataMapInfo . mmi , 0 ) ;
DriverPassThrough_InitializeSystemRan ( fqrkdx2hx2 , fqrkdx2hx2 ->
DataMapInfo . systemRan , fqrkdx2hx2 -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( fqrkdx2hx2 -> DataMapInfo . mmi ,
fqrkdx2hx2 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( fqrkdx2hx2
-> DataMapInfo . mmi , fqrkdx2hx2 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( fqrkdx2hx2 -> DataMapInfo . mmi , & fqrkdx2hx2 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DriverPassThrough_host_InitializeDataMapInfo ( DriverPassThrough_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
