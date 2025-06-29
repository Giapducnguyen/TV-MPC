#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BMSController_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 23
#endif
#ifndef SS_INT64
#define SS_INT64 24
#endif
#else
#include "builtin_typeid_types.h"
#include "BMSController.h"
#include "BMSController_capi.h"
#include "BMSController_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 6 , 0 } , { "CellVoltages" , 0 , - 1 } , { "PackVoltage" , 0 , - 1 } , {
"PackCurrent" , 0 , - 1 } , { "CellTemperatures" , 0 , - 1 } , { "VoutChgr" ,
0 , - 1 } , { "VoutInvtr" , 0 , - 1 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 2 , 3 , 4 , 5 , 6 } ; static
rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0
, 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1 ,
TARGET_STRING ( "BMSController/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) ,
"" , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } , { 1 , - 1 , TARGET_STRING ( "BMSController/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } , { 2 , - 1 , TARGET_STRING ( "BMSController/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 2 } , { 3 , - 1 , TARGET_STRING ( "BMSController/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 } , { 4 , - 1 , TARGET_STRING ( "BMSController/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 4 } , { 5 , - 1 , TARGET_STRING ( "BMSController/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 5 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 2 , 3 , 1 , 4 , 5 } ;
#ifndef HOST_CAPI_BUILD
static void BMSController_InitializeDataAddr ( void * dataAddr [ ] ,
g0d32wfvf1 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
dz4c4vv4e1 [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> ku0cdxjs3l )
; dataAddr [ 2 ] = ( void * ) ( & localDW -> iqzga4pj3l ) ; dataAddr [ 3 ] =
( void * ) ( & localDW -> phucyyn21j [ 0 ] ) ; dataAddr [ 4 ] = ( void * ) ( &
localDW -> hdl0hgqmi0 ) ; dataAddr [ 5 ] = ( void * ) ( & localDW ->
hmm5af0r2l ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMSController_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMSController_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 96 , 1 , 1 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 7 ,
rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 6
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 3524518110U , 3035172809U
, 1335885772U , 1070049906U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
BMSController_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BMSController_InitializeSystemRan ( jhg5ifokiz * const lynqqvz3ra
, sysRanDType * systemRan [ ] , g0d32wfvf1 * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( lynqqvz3ra ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = lynqqvz3ra ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BMSController_InitializeDataMapInfo ( jhg5ifokiz * const lynqqvz3ra ,
g0d32wfvf1 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( lynqqvz3ra -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( lynqqvz3ra -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( lynqqvz3ra -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; BMSController_InitializeDataAddr ( lynqqvz3ra ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap ( lynqqvz3ra
-> DataMapInfo . mmi , lynqqvz3ra -> DataMapInfo . dataAddress ) ;
BMSController_InitializeVarDimsAddr ( lynqqvz3ra -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( lynqqvz3ra -> DataMapInfo .
mmi , lynqqvz3ra -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( lynqqvz3ra -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( lynqqvz3ra -> DataMapInfo . mmi , ( NULL ) ) ; BMSController_InitializeLoggingFunctions ( lynqqvz3ra -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( lynqqvz3ra -> DataMapInfo . mmi , lynqqvz3ra -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo ( lynqqvz3ra -> DataMapInfo . mmi , & lynqqvz3ra -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( lynqqvz3ra -> DataMapInfo . mmi , lynqqvz3ra -> DataMapInfo . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( lynqqvz3ra -> DataMapInfo . mmi , 5 ) ; BMSController_InitializeSystemRan ( lynqqvz3ra , lynqqvz3ra -> DataMapInfo . systemRan , localDW , lynqqvz3ra -> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( lynqqvz3ra -> DataMapInfo . mmi , lynqqvz3ra -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( lynqqvz3ra -> DataMapInfo . mmi , lynqqvz3ra -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( lynqqvz3ra -> DataMapInfo . mmi , & lynqqvz3ra -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BMSController_host_InitializeDataMapInfo ( BMSController_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
BMSBalancingLogic_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"BMSController/Balancing Logic" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap
-> child1 . mmi ) ; BMSOut_host_InitializeDataMapInfo ( & ( dataMap -> child1
) , "BMSController/BMS Out" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap ->
child2 . mmi ) ; BMSCurrPowerLimCalc_host_InitializeDataMapInfo ( & ( dataMap
-> child2 ) , "BMSController/Current Power Limits Calc" ) ; dataMap ->
childMMI [ 3 ] = & ( dataMap -> child3 . mmi ) ;
BMSSOCEstimation_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"BMSController/SOC Estimation" ) ; dataMap -> childMMI [ 4 ] = & ( dataMap ->
child4 . mmi ) ; BMSStateMachine_host_InitializeDataMapInfo ( & ( dataMap ->
child4 ) , "BMSController/State Machine" ) ; rtwCAPI_SetChildMMIArray ( dataMap
-> mmi , dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi
, 5 ) ; }
#ifdef __cplusplus
}
#endif
#endif
