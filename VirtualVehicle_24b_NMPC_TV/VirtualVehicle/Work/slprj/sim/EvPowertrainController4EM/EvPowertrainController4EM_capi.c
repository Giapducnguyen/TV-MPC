#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EvPowertrainController4EM_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "EvPowertrainController4EM.h"
#include "EvPowertrainController4EM_capi.h"
#include "EvPowertrainController4EM_private.h"
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
, TARGET_STRING ( "EvPowertrainController4EM/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Unit Delay1" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Hamiltonian computation \nand minimization/Unit Delay1" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Hamiltonian computation \nand minimization/Unit Delay2" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 4 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Powertrain Constraints /Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 3 , 0 , 0 , 0 , - 1 , 0 } , { 5 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Powertrain Constraints /Unit Delay1" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 3 , 0 , 0 , 0 , - 1 , 0 } , { 6 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Torque Vectoring/Nonlinear_MPC/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 4 , 0 , 0 , 0 , - 1 , 0 } , { 7 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Torque Vectoring/Nonlinear_MPC/Unit Delay1" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 5 , 0 , 0 , 0 , - 1 , 0 } , { 8 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Convert Whl to EMTrq Vector/4EM/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 9 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Convert Whl to EMTrq Vector/4EM/Unit Delay1" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 10 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Powertrain Constraints /EM Constraint Front/Tabular Power Loss Data/3EM Dual Front or 4EM/WhlTrq2EMTrq/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 3 , 0 , 0 , 0 , - 1 , 0 } , { 11 , - 1 , TARGET_STRING ( "EvPowertrainController4EM/Energy Management/Powertrain Constraints /EM Constraint Rear/Tabular Power Loss Data/3EM Dual Rear or 4EM/WhlTrq2EMTrq/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 3 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 2 , 8 , 9 , 5 , 6 , 1 , 3 , 10 , 11 , 4 , 7 } ;
#ifndef HOST_CAPI_BUILD
static void EvPowertrainController4EM_InitializeDataAddr ( void * dataAddr [
] , fuctzs4sww * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
pophr5lzve [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> fyczfqu5d1 [
0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> jxlucfehp1 ) ; dataAddr [
3 ] = ( void * ) ( & localDW -> knprixuhqy ) ; dataAddr [ 4 ] = ( void * ) ( &
localDW -> fsvou2544p [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) ( & localDW ->
hheq0b5rgn [ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( & localDW -> fy5ps0vnmo [
0 ] ) ; dataAddr [ 7 ] = ( void * ) ( & localDW -> k3wtm0bzih [ 0 ] ) ;
dataAddr [ 8 ] = ( void * ) ( & localDW -> hyfypdejrs ) ; dataAddr [ 9 ] = ( void * ) ( & localDW -> i1rb5p2wdu ) ; dataAddr [ 10 ] = ( void * ) ( & localDW -> m2eudybppp [ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( & localDW -> bkeddeqpbw [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void EvPowertrainController4EM_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void EvPowertrainController4EM_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL ) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs [ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_SCALAR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 4 , 1 , 11 , 1 , 1 , 1 , 201 , 1 , 26 , 1 , 2
, 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 30 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 30 , rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 12 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 3744729930U , 2551275188U , 2733397362U , 45537690U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * EvPowertrainController4EM_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void EvPowertrainController4EM_InitializeSystemRan ( ghy3lg3t4k *
const obwppemxpt , sysRanDType * systemRan [ ] , fuctzs4sww * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( obwppemxpt ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ; systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ] = ( NULL ) ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( NULL ) ; systemRan [ 16 ] = ( NULL ) ; systemRan [ 17 ] = ( NULL ) ; systemRan [ 18 ] = ( NULL ) ; systemRan [ 19 ] = ( NULL ) ; systemRan [ 20 ] = ( NULL ) ; systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ] = ( NULL ) ; systemRan [ 23 ] = ( sysRanDType * ) & localDW -> b5yo3nv33g ; systemRan [ 24 ] = ( sysRanDType * ) & localDW -> oienxzjnme ; systemRan [ 25 ] = ( NULL ) ; systemRan [ 26 ] = ( NULL ) ; systemRan [ 27 ] = ( NULL ) ; systemRan [ 28 ] = ( NULL ) ; systemRan [ 29 ] = ( NULL ) ; systemTid [ 1 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 17 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 27 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 28 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 29 ] = obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [ 5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ; rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [ 10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ; rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems [ 15 ] = 0 ; rtContextSystems [ 16 ] = 0 ; rtContextSystems [ 17 ] = 0 ; rtContextSystems [ 18 ] = 0 ; rtContextSystems [ 19 ] = 0 ; rtContextSystems [ 20 ] = 0 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems [ 22 ] = 0 ; rtContextSystems [ 23 ] = 23 ; rtContextSystems [ 24 ] = 24 ; rtContextSystems [ 25 ] = 0 ; rtContextSystems [ 26 ] = 0 ; rtContextSystems [ 27 ] = 0 ; rtContextSystems [ 28 ] = 0 ; rtContextSystems [ 29 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void EvPowertrainController4EM_InitializeDataMapInfo ( ghy3lg3t4k * const
obwppemxpt , fuctzs4sww * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( obwppemxpt -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( obwppemxpt -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( obwppemxpt -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; EvPowertrainController4EM_InitializeDataAddr ( obwppemxpt -> DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap ( obwppemxpt -> DataMapInfo . mmi , obwppemxpt -> DataMapInfo . dataAddress ) ; EvPowertrainController4EM_InitializeVarDimsAddr ( obwppemxpt -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( obwppemxpt -> DataMapInfo . mmi , obwppemxpt -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( obwppemxpt -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( obwppemxpt -> DataMapInfo . mmi , ( NULL ) ) ; EvPowertrainController4EM_InitializeLoggingFunctions ( obwppemxpt -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( obwppemxpt -> DataMapInfo . mmi , obwppemxpt -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo ( obwppemxpt -> DataMapInfo . mmi , & obwppemxpt -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( obwppemxpt -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( obwppemxpt -> DataMapInfo . mmi , 0 ) ; EvPowertrainController4EM_InitializeSystemRan ( obwppemxpt , obwppemxpt -> DataMapInfo . systemRan , localDW , obwppemxpt -> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( obwppemxpt -> DataMapInfo . mmi , obwppemxpt -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( obwppemxpt -> DataMapInfo . mmi , obwppemxpt -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( obwppemxpt -> DataMapInfo . mmi , & obwppemxpt -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EvPowertrainController4EM_host_InitializeDataMapInfo ( EvPowertrainController4EM_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
