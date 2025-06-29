#include "DriverPassThrough.h"
#include "rtwtypes.h"
#include "DriverPassThrough_capi.h"
#include "DriverPassThrough_private.h"
static RegMdlInfo rtMdlInfo_DriverPassThrough [ 37 ] = { { "am5nrfreizz" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"bk5t4s5mfn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "cej1qg1sfy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "nerlqyfb1f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "edkmt5sura" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "ochcra0sow" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "eua0qfz5ec" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "ned4cypc2o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "fkjim3ovhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "cfmmsloryn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "lzsxwyzbtz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "fsl5nl0qum" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "o3jvs1ah5n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "cnc5jhur0w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "epsf2c04te" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "labuig2vc2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "lkghv3zku5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "k035c20ex5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "ivih3mqpkr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "DriverPassThrough" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "kjbaklr24l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DriverPassThrough" } , { "epwsmz04yp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DriverPassThrough" } , { "puf0tombf2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DriverPassThrough" }
, { "mr_DriverPassThrough_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"mr_DriverPassThrough_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "DriverPassThrough" } , { "mr_DriverPassThrough_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DriverPassThrough" } , {
"DriverPassThrough.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"DriverPassThrough.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"DriverPassThrough" } } ; void DriverPassThrough ( const real_T * f2mlfg30ti
, real_T * m2aloqbdxt ) { * m2aloqbdxt = * f2mlfg30ti ; } void labuig2vc2 ( puf0tombf2 * const fqrkdx2hx2 ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( fqrkdx2hx2 -> _mdlRefSfcnS , "DriverPassThrough" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void lkghv3zku5 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , puf0tombf2 * const fqrkdx2hx2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset ( ( void * ) fqrkdx2hx2 , 0 , sizeof ( puf0tombf2 ) ) ; fqrkdx2hx2 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; fqrkdx2hx2 -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( fqrkdx2hx2 -> _mdlRefSfcnS , "DriverPassThrough" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } DriverPassThrough_InitializeDataMapInfo ( fqrkdx2hx2 , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( fqrkdx2hx2 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( fqrkdx2hx2 -> DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( fqrkdx2hx2 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_DriverPassThrough_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_DriverPassThrough , 37 ) ; * retVal = 1 ; } static void mr_DriverPassThrough_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_DriverPassThrough_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_DriverPassThrough_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_DriverPassThrough_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_DriverPassThrough_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_DriverPassThrough_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_DriverPassThrough_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_DriverPassThrough_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_DriverPassThrough_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_DriverPassThrough_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_DriverPassThrough_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_DriverPassThrough_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_DriverPassThrough_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_DriverPassThrough_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_DriverPassThrough_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_DriverPassThrough_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_DriverPassThrough_GetDWork ( const am5nrfreizz * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void mr_DriverPassThrough_SetDWork ( am5nrfreizz * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void mr_DriverPassThrough_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 2308229639U , 2673036444U , 769032161U , 2012016351U , } ; slmrModelRefRegisterSimStateChecksum ( S , "DriverPassThrough" , & chksum [ 0 ] ) ; } mxArray * mr_DriverPassThrough_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
