#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME NoEngineController_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "NoEngineController_types.h"
#include "NoEngineController.h"
#include "NoEngineController_private.h"
const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const
char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue ( void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr ) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start ( args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , & voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut = ( SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) { _ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic ( simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S , void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; } void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) { _ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char * rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char * fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath ) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) { return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void * slsa_malloc ( size_t s ) { return malloc ( s ) ; } void slsa_free ( void * ptr ) { free ( ptr ) ; } void slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void ) ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss , void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void ) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const char * key , void * * ptr , unsigned int sizeInBytes , void * ( * customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( * customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void ) sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { real_T * o_o_o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_o_B_1_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_o_B_1_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_o_B_1_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_o_B_1_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_o_B_1_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_B_1_7 = ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_o_o_B_1_8 = ( real_T * ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_B_1_9 = ( real_T * ) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_o_B_1_10 = ( real_T * ) ssGetOutputPortSignal ( S , 9 ) ; real_T * o_o_o_B_1_11 = ( real_T * ) ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_o_B_1_12 = ( real_T * ) ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_o_B_1_13 = ( real_T * ) ssGetOutputPortSignal ( S , 12 ) ; real_T * o_o_o_B_1_14 = ( real_T * ) ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_o_B_1_15 = ( real_T * ) ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_o_B_1_16 = ( real_T * ) ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_o_B_1_17 = ( real_T * ) ssGetOutputPortSignal ( S , 16 ) ; }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { oyfbmrj0fcb * dw = ( oyfbmrj0fcb * ) ssGetDWork ( S , 0 ) ; real_T * o_o_o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_o_B_1_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_o_B_1_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_o_B_1_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_o_B_1_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_o_B_1_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_B_1_7 = ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_o_o_B_1_8 = ( real_T * ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_B_1_9 = ( real_T * ) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_o_B_1_10 = ( real_T * ) ssGetOutputPortSignal ( S , 9 ) ; real_T * o_o_o_B_1_11 = ( real_T * ) ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_o_B_1_12 = ( real_T * ) ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_o_B_1_13 = ( real_T * ) ssGetOutputPortSignal ( S , 12 ) ; real_T * o_o_o_B_1_14 = ( real_T * ) ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_o_B_1_15 = ( real_T * ) ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_o_B_1_16 = ( real_T * ) ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_o_B_1_17 = ( real_T * ) ssGetOutputPortSignal ( S , 16 ) ; k1l0tekhfw ( o_o_o_B_1_1 , o_o_o_B_1_2 , o_o_o_B_1_3 , o_o_o_B_1_4 , o_o_o_B_1_5 , o_o_o_B_1_6 , o_o_o_B_1_7 , o_o_o_B_1_8 , o_o_o_B_1_9 , o_o_o_B_1_10 , o_o_o_B_1_11 , o_o_o_B_1_12 , o_o_o_B_1_13 , o_o_o_B_1_14 , o_o_o_B_1_15 , o_o_o_B_1_16 , o_o_o_B_1_17 ) ; } static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { oyfbmrj0fcb * dw = ( oyfbmrj0fcb * ) ssGetDWork ( S , 0 ) ; real_T * o_o_o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_o_B_1_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_o_B_1_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_o_B_1_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_o_B_1_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_o_B_1_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_B_1_7 = ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_o_o_B_1_8 = ( real_T * ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_B_1_9 = ( real_T * ) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_o_B_1_10 = ( real_T * ) ssGetOutputPortSignal ( S , 9 ) ; real_T * o_o_o_B_1_11 = ( real_T * ) ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_o_B_1_12 = ( real_T * ) ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_o_B_1_13 = ( real_T * ) ssGetOutputPortSignal ( S , 12 ) ; real_T * o_o_o_B_1_14 = ( real_T * ) ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_o_B_1_15 = ( real_T * ) ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_o_B_1_16 = ( real_T * ) ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_o_B_1_17 = ( real_T * ) ssGetOutputPortSignal ( S , 16 ) ; if ( tid == 0 ) { NoEngineController ( o_o_o_B_1_1 , o_o_o_B_1_2 , o_o_o_B_1_3 , o_o_o_B_1_4 , o_o_o_B_1_5 , o_o_o_B_1_6 , o_o_o_B_1_7 , o_o_o_B_1_8 , o_o_o_B_1_9 , o_o_o_B_1_10 , o_o_o_B_1_11 , o_o_o_B_1_12 , o_o_o_B_1_13 , o_o_o_B_1_14 , o_o_o_B_1_15 , o_o_o_B_1_16 , o_o_o_B_1_17 ) ; } } static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S , GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; } ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; } ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ; ssSetNumDiscStates ( S , 0 ) ; ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S , 1 , 17 ) ; if ( ! ssSetNumInputPorts ( S , 1 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ; ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rpm" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 , unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.01 ) ;
ssSetInputPortOffsetTime ( S , 0 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S ,
17 ) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return
; ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 2 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 3 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 4 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 5 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 6 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 7 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 8 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 8 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 8 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 8 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 8 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 8 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 8 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 8 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 9 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 9 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 9 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 9 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 9 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 9 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 9 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 9 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 10 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 10 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 10 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 10 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 10 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 10 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 10 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 10 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 11 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 11 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 11 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 11 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 11 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 11 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 11 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 11 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 12 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 12 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 12 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 12 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 12 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 12 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 12 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 12 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 13 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 13 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 13 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 13 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 13 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 13 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 13 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 13 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 14 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 14 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 14 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 14 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 14 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 14 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 14 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 14 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 15 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 15 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 15 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 15 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 15 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 15 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 15 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 15 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 16 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 16 , unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 16 , 0.01 ) ; ssSetOutputPortOffsetTime ( S
, 16 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 16 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 16 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 16 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 16 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_NoEngineController_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S
, PORT_BASED_SAMPLE_TIMES ) ; ssSetParameterTuningCompliance ( S , true ) ;
ssSetNumRWork ( S , 0 ) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ;
ssSetNumModes ( S , 0 ) ; { int_T zcsIdx = 0 ; }
ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 8 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 8 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 9 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 9 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 10 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 10 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 11 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 11 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 12 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 12 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 13 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 13 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 14 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 14 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 15 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 15 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 16 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 16 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetRuntimeThreadSafetyCompliance ( S ,
RUNTIME_THREAD_SAFETY_COMPLIANCE_TRUE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
| SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_NoEngineController_MdlInfoRegFcn ( S , "NoEngineController" , & retVal ) ;
if ( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType ( S
, & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ; if
( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( oyfbmrj0fcb ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "24.2" ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { oyfbmrj0fcb * dw = ( oyfbmrj0fcb * ) ssGetDWork ( S , 0 ) ; real_T * o_o_o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_o_B_1_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_o_B_1_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_o_B_1_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_o_B_1_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_o_B_1_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_B_1_7 = ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_o_o_B_1_8 = ( real_T * ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_B_1_9 = ( real_T * ) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_o_B_1_10 = ( real_T * ) ssGetOutputPortSignal ( S , 9 ) ; real_T * o_o_o_B_1_11 = ( real_T * ) ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_o_B_1_12 = ( real_T * ) ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_o_B_1_13 = ( real_T * ) ssGetOutputPortSignal ( S , 12 ) ; real_T * o_o_o_B_1_14 = ( real_T * ) ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_o_B_1_15 = ( real_T * ) ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_o_B_1_16 = ( real_T * ) ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_o_B_1_17 = ( real_T * ) ssGetOutputPortSignal ( S , 16 ) ; void * sysRanPtr = ( NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } l4z4udmhha ( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) , & ( dw -> rtm ) , sysRanPtr , sysTid , ( ( NULL ) ) , ( ( NULL ) ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { oyfbmrj0fcb * dw = ( oyfbmrj0fcb * )
ssGetDWork ( S , 0 ) ; real_T * o_o_o_B_1_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_o_B_1_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_o_B_1_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_o_B_1_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_o_B_1_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_o_B_1_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_B_1_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_o_o_B_1_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_B_1_9 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_o_B_1_10 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_o_o_B_1_11 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_o_B_1_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_o_B_1_13 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_o_o_B_1_14 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_o_B_1_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_o_B_1_16 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_o_B_1_17 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; bgaunqzhxo ( o_o_o_B_1_1 , o_o_o_B_1_2 ,
o_o_o_B_1_3 , o_o_o_B_1_4 , o_o_o_B_1_5 , o_o_o_B_1_6 , o_o_o_B_1_7 ,
o_o_o_B_1_8 , o_o_o_B_1_9 , o_o_o_B_1_10 , o_o_o_B_1_11 , o_o_o_B_1_12 ,
o_o_o_B_1_13 , o_o_o_B_1_14 , o_o_o_B_1_15 , o_o_o_B_1_16 , o_o_o_B_1_17 ) ;
} static void mdlOutputs ( SimStruct * S , int_T tid ) { oyfbmrj0fcb * dw = ( oyfbmrj0fcb * ) ssGetDWork ( S , 0 ) ; real_T * o_o_o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_o_B_1_2 = ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_o_B_1_3 = ( real_T * ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_o_B_1_4 = ( real_T * ) ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_o_B_1_5 = ( real_T * ) ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_o_B_1_6 = ( real_T * ) ssGetOutputPortSignal ( S , 5 ) ; real_T * o_o_o_B_1_7 = ( real_T * ) ssGetOutputPortSignal ( S , 6 ) ; real_T * o_o_o_B_1_8 = ( real_T * ) ssGetOutputPortSignal ( S , 7 ) ; real_T * o_o_o_B_1_9 = ( real_T * ) ssGetOutputPortSignal ( S , 8 ) ; real_T * o_o_o_B_1_10 = ( real_T * ) ssGetOutputPortSignal ( S , 9 ) ; real_T * o_o_o_B_1_11 = ( real_T * ) ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_o_B_1_12 = ( real_T * ) ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_o_B_1_13 = ( real_T * ) ssGetOutputPortSignal ( S , 12 ) ; real_T * o_o_o_B_1_14 = ( real_T * ) ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_o_B_1_15 = ( real_T * ) ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_o_B_1_16 = ( real_T * ) ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_o_B_1_17 = ( real_T * ) ssGetOutputPortSignal ( S , 16 ) ; if ( tid != CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { NoEngineController ( o_o_o_B_1_1 , o_o_o_B_1_2 , o_o_o_B_1_3 , o_o_o_B_1_4 , o_o_o_B_1_5 , o_o_o_B_1_6 , o_o_o_B_1_7 , o_o_o_B_1_8 , o_o_o_B_1_9 , o_o_o_B_1_10 , o_o_o_B_1_11 , o_o_o_B_1_12 , o_o_o_B_1_13 , o_o_o_B_1_14 , o_o_o_B_1_15 , o_o_o_B_1_16 , o_o_o_B_1_17 ) ; } } static void mdlTerminate ( SimStruct * S ) { oyfbmrj0fcb * dw = ( oyfbmrj0fcb * ) ssGetDWork ( S , 0 ) ; hizwzwfecs ( & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { mxArray *
mdlrefDW = mr_NoEngineController_GetDWork ( ssGetDWork ( S , 0 ) ) ;
mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_NoEngineController_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss
, 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar
( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) {
mr_NoEngineController_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss
, 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss
, 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar ( mxGetFieldByNumber
( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
