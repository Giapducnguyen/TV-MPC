#include "NoDifferentialControl.h"
#include "rtwtypes.h"
#include "NoDifferentialControl_private.h"
#include "NoDifferentialControl_capi.h"
static RegMdlInfo rtMdlInfo_NoDifferentialControl [ 40 ] = { { "mak5rrl2d2r"
, MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "NoDifferentialControl" }
, { "kboxvdslmk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "a2jidpayi1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "inokg0ydty" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "bntujuj4b2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "mmffy1ck41" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "nweukoyo4y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "cqx35pb4fa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "oohmtuxg0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "ic5tkmfmcc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "huxtc4mu01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "l2sti153am" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "hmobdjezgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "frqdhj3j2y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "p3ou30eeas" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "asqqn1cov4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "lcfkk2cxaz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "mrw2l4tpa5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "d2hcwqfdgq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "lx5eeaqdva" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "dmxetamsss" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "NoDifferentialControl"
, MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "ewtop00jp2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "g3ugjv5y42s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , { "fizr5snrtr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , { "n1ssnfpndb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoDifferentialControl" } , {
"mr_NoDifferentialControl_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "NoDifferentialControl" } , {
"mr_NoDifferentialControl_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } ,
{ "mr_NoDifferentialControl_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "NoDifferentialControl" } , {
"mr_NoDifferentialControl_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "NoDifferentialControl" } , { "NoDifferentialControl.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "NoDifferentialControl.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "NoDifferentialControl" } }
; g3ugjv5y42s g3ugjv5y42 = { 0.0 , 0.0 } ; void mrw2l4tpa5 ( real_T *
bonhcnyeku ) { * bonhcnyeku = g3ugjv5y42 . P_1 ; } void lx5eeaqdva ( real_T *
bonhcnyeku ) { * bonhcnyeku = g3ugjv5y42 . P_1 ; } void NoDifferentialControl
( real_T j1ocgzqti0 [ 4 ] , real_T * bonhcnyeku ) { j1ocgzqti0 [ 0 ] =
g3ugjv5y42 . P_0 ; j1ocgzqti0 [ 1 ] = g3ugjv5y42 . P_0 ; j1ocgzqti0 [ 2 ] =
g3ugjv5y42 . P_0 ; j1ocgzqti0 [ 3 ] = g3ugjv5y42 . P_0 ; * bonhcnyeku =
g3ugjv5y42 . P_1 ; } void asqqn1cov4 ( n1ssnfpndb * const g5ua053czk ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( g5ua053czk ->
_mdlRefSfcnS , "NoDifferentialControl" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void d2hcwqfdgq ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , n1ssnfpndb * const g5ua053czk , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void
) memset ( ( void * ) g5ua053czk , 0 , sizeof ( n1ssnfpndb ) ) ; g5ua053czk
-> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; g5ua053czk -> _mdlRefSfcnS
= ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( g5ua053czk -> _mdlRefSfcnS , "NoDifferentialControl" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
NoDifferentialControl_InitializeDataMapInfo ( g5ua053czk , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( g5ua053czk
-> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( g5ua053czk -> DataMapInfo . mmi
, rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( g5ua053czk ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_NoDifferentialControl_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_NoDifferentialControl , 40 ) ; * retVal = 1 ; } static void mr_NoDifferentialControl_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_NoDifferentialControl_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_NoDifferentialControl_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_NoDifferentialControl_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_NoDifferentialControl_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_NoDifferentialControl_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_NoDifferentialControl_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_NoDifferentialControl_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_NoDifferentialControl_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_NoDifferentialControl_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_NoDifferentialControl_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_NoDifferentialControl_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_NoDifferentialControl_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_NoDifferentialControl_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_NoDifferentialControl_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_NoDifferentialControl_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_NoDifferentialControl_GetDWork ( const mak5rrl2d2r * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void mr_NoDifferentialControl_SetDWork ( mak5rrl2d2r * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void mr_NoDifferentialControl_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 4142194601U , 1982835837U , 1582072381U , 146060729U , } ; slmrModelRefRegisterSimStateChecksum ( S , "NoDifferentialControl" , & chksum [ 0 ] ) ; } mxArray * mr_NoDifferentialControl_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
