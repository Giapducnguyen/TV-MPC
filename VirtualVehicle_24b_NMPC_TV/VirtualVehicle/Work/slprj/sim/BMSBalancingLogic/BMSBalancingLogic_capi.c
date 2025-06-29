#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BMSBalancingLogic_capi_host.h"
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
#include "BMSBalancingLogic.h"
#include "BMSBalancingLogic_capi.h"
#include "BMSBalancingLogic_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING ( "BMSBalancingLogic/Balancing/DeltaCellVolt" ) , TARGET_STRING ( "DeltaCellVolt" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ;
#ifndef HOST_CAPI_BUILD
static void BMSBalancingLogic_InitializeDataAddr ( void * dataAddr [ ] ,
hse03z0axo * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
pvtvefe55b ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMSBalancingLogic_InitializeVarDimsAddr ( int32_T * vardimsAddr [
] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMSBalancingLogic_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 5.0 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 3 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 3 , rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 1 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 1034144013U , 3047193911U , 2692244326U , 2349976467U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * BMSBalancingLogic_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BMSBalancingLogic_InitializeSystemRan ( jtvn52kzgd * const
d0hda010hq , sysRanDType * systemRan [ ] , hse03z0axo * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( d0hda010hq ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ; systemTid [ 1 ] = d0hda010hq -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = d0hda010hq -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BMSBalancingLogic_InitializeDataMapInfo ( jtvn52kzgd * const d0hda010hq
, hse03z0axo * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( d0hda010hq -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( d0hda010hq -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( d0hda010hq -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; BMSBalancingLogic_InitializeDataAddr ( d0hda010hq ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap ( d0hda010hq
-> DataMapInfo . mmi , d0hda010hq -> DataMapInfo . dataAddress ) ;
BMSBalancingLogic_InitializeVarDimsAddr ( d0hda010hq -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( d0hda010hq -> DataMapInfo .
mmi , d0hda010hq -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( d0hda010hq -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( d0hda010hq -> DataMapInfo . mmi , ( NULL ) ) ; BMSBalancingLogic_InitializeLoggingFunctions ( d0hda010hq -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( d0hda010hq -> DataMapInfo . mmi , d0hda010hq -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo ( d0hda010hq -> DataMapInfo . mmi , & d0hda010hq -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( d0hda010hq -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( d0hda010hq -> DataMapInfo . mmi , 0 ) ; BMSBalancingLogic_InitializeSystemRan ( d0hda010hq , d0hda010hq -> DataMapInfo . systemRan , localDW , d0hda010hq -> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( d0hda010hq -> DataMapInfo . mmi , d0hda010hq -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( d0hda010hq -> DataMapInfo . mmi , d0hda010hq -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( d0hda010hq -> DataMapInfo . mmi , & d0hda010hq -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BMSBalancingLogic_host_InitializeDataMapInfo ( BMSBalancingLogic_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
