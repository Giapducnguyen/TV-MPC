#include "OpenLoopBraking.h"
#include "rtwtypes.h"
#include "OpenLoopBraking_private.h"
#include "OpenLoopBraking_capi.h"
static RegMdlInfo rtMdlInfo_OpenLoopBraking [ 40 ] = { { "j2diisom34j" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"bqyczto0u4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "cxcadjbwoo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "cx1iprc35w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "o5ikwgaqlg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "n0p1j2mg4i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "lwjhrh20mb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "itxkeo0aks" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "kvv05sdcpa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "bduxd1nlpp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "hgaayokwpf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "b3sagfv1rh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "m2wltvpdrh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "cq4hrfe0rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "dm01kjy012" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "ese1g5rr1h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "mq1lvxnig4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "n5x0ejbjln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "dl2qsu4ppj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "hc3tptuv0o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "mqalido1eh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "OpenLoopBraking" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "jdu3dqp4yk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "pqlkmereof1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"OpenLoopBraking" } , { "baz2tyrx4j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "OpenLoopBraking" } , { "dshwzf1s03" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "OpenLoopBraking" } ,
{ "mr_OpenLoopBraking_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "OpenLoopBraking" } , { "mr_OpenLoopBraking_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "OpenLoopBraking" } , {
"mr_OpenLoopBraking_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "OpenLoopBraking" } , { "OpenLoopBraking.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "OpenLoopBraking.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "OpenLoopBraking" } } ; pqlkmereof1 pqlkmereof = { 0.25 ,
false } ; void OpenLoopBraking ( const real_T * pkgibffjyg , real_T
ch24exy52s [ 4 ] , real_T lsyrlfgmud [ 6 ] ) { real_T bsxse14na5 ; ch24exy52s
[ 0 ] = * pkgibffjyg ; ch24exy52s [ 1 ] = * pkgibffjyg ; ch24exy52s [ 2 ] = *
pkgibffjyg ; ch24exy52s [ 3 ] = * pkgibffjyg ; bsxse14na5 = ( ( ( ch24exy52s
[ 0 ] + ch24exy52s [ 1 ] ) + ch24exy52s [ 2 ] ) + ch24exy52s [ 3 ] ) *
pqlkmereof . P_1 * rtP__CtrlBcuTrlrBrkGain2f2PassVeh_sldd_ ; lsyrlfgmud [ 0 ]
= bsxse14na5 ; lsyrlfgmud [ 1 ] = bsxse14na5 ; lsyrlfgmud [ 2 ] = bsxse14na5
; lsyrlfgmud [ 3 ] = bsxse14na5 ; lsyrlfgmud [ 4 ] = bsxse14na5 ; lsyrlfgmud
[ 5 ] = bsxse14na5 ; } void OpenLoopBrakingTID1 ( boolean_T * fh0nkfle4t ) {
* fh0nkfle4t = pqlkmereof . P_2 ; } void ese1g5rr1h ( dshwzf1s03 * const
njmlsg0bqs ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( njmlsg0bqs -> _mdlRefSfcnS , "OpenLoopBraking" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void dl2qsu4ppj ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , dshwzf1s03 * const
njmlsg0bqs , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ( void ) memset ( ( void * ) njmlsg0bqs , 0 , sizeof ( dshwzf1s03 ) ) ; njmlsg0bqs -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; njmlsg0bqs -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; njmlsg0bqs -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( njmlsg0bqs -> _mdlRefSfcnS , "OpenLoopBraking" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } OpenLoopBraking_InitializeDataMapInfo ( njmlsg0bqs , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( njmlsg0bqs -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( njmlsg0bqs -> DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( njmlsg0bqs -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_OpenLoopBraking_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_OpenLoopBraking , 40 ) ; * retVal = 1 ; } static void mr_OpenLoopBraking_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_OpenLoopBraking_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_OpenLoopBraking_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_OpenLoopBraking_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_OpenLoopBraking_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_OpenLoopBraking_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_OpenLoopBraking_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_OpenLoopBraking_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_OpenLoopBraking_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_OpenLoopBraking_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_OpenLoopBraking_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_OpenLoopBraking_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_OpenLoopBraking_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_OpenLoopBraking_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_OpenLoopBraking_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_OpenLoopBraking_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_OpenLoopBraking_GetDWork ( const j2diisom34j * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void mr_OpenLoopBraking_SetDWork ( j2diisom34j * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void mr_OpenLoopBraking_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 2828042905U , 878084799U , 1326284179U , 3878673274U , } ; slmrModelRefRegisterSimStateChecksum ( S , "OpenLoopBraking" , & chksum [ 0 ] ) ; } mxArray * mr_OpenLoopBraking_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
