#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BMSSOCEstimation_capi_host.h"
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
#include "BMSSOCEstimation.h"
#include "BMSSOCEstimation_capi.h"
#include "BMSSOCEstimation_private.h"
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
, TARGET_STRING ( "BMSSOCEstimation/Coulomb Counting/Constant Capacity/Discrete-Time\nIntegrator" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void BMSSOCEstimation_InitializeDataAddr ( void * dataAddr [ ] ,
izjsvhfdps * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
myrqiep04m ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMSSOCEstimation_InitializeVarDimsAddr ( int32_T * vardimsAddr [
] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMSSOCEstimation_InitializeLoggingFunctions ( RTWLoggingFcnPtr
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
} ; static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 724950925U , 864152634U , 2485584841U , 2914080155U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * BMSSOCEstimation_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BMSSOCEstimation_InitializeSystemRan ( fcomfl1sgs * const
ileo0mwgm0 , sysRanDType * systemRan [ ] , izjsvhfdps * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ileo0mwgm0 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = ileo0mwgm0 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BMSSOCEstimation_InitializeDataMapInfo ( fcomfl1sgs * const ileo0mwgm0 ,
izjsvhfdps * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( ileo0mwgm0 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ileo0mwgm0 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ileo0mwgm0 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; BMSSOCEstimation_InitializeDataAddr ( ileo0mwgm0 ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap ( ileo0mwgm0
-> DataMapInfo . mmi , ileo0mwgm0 -> DataMapInfo . dataAddress ) ;
BMSSOCEstimation_InitializeVarDimsAddr ( ileo0mwgm0 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( ileo0mwgm0 -> DataMapInfo .
mmi , ileo0mwgm0 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( ileo0mwgm0 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( ileo0mwgm0 -> DataMapInfo . mmi , ( NULL ) ) ; BMSSOCEstimation_InitializeLoggingFunctions ( ileo0mwgm0 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ileo0mwgm0 -> DataMapInfo . mmi , ileo0mwgm0 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo ( ileo0mwgm0 -> DataMapInfo . mmi , & ileo0mwgm0 -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( ileo0mwgm0 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ileo0mwgm0 -> DataMapInfo . mmi , 0 ) ; BMSSOCEstimation_InitializeSystemRan ( ileo0mwgm0 , ileo0mwgm0 -> DataMapInfo . systemRan , localDW , ileo0mwgm0 -> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( ileo0mwgm0 -> DataMapInfo . mmi , ileo0mwgm0 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( ileo0mwgm0 -> DataMapInfo . mmi , ileo0mwgm0 -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( ileo0mwgm0 -> DataMapInfo . mmi , & ileo0mwgm0 -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BMSSOCEstimation_host_InitializeDataMapInfo ( BMSSOCEstimation_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
