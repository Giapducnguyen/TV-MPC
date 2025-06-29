#include "NoThermalControl.h"
#include "rtwtypes.h"
#include "NoThermalControl_private.h"
#include "NoThermalControl_capi.h"
static RegMdlInfo rtMdlInfo_NoThermalControl [ 39 ] = { { "lraeusaudmt" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"h3opygb11j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "cbqdv1um2w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "parwsj5epd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "pgbgg0y5nn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "f4bre2rjyi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "mprrry0krl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "naqjsn1ijh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "fpuoobqhby" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "kam4khgkue" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "ghiffc4gb1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "jimzmyq2fc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "ce5pl2ukvi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "cupp3kgnc3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "anwatlot10" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "ozqahyp1e2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "logslksxmu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "ehwnuiq0go" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "n0kgruy2ln" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "cy0j5uonw0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "NoThermalControl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "iswr31i0uq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "ajlc0frzu2j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoThermalControl" } , { "n4weulck5w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "NoThermalControl" } , { "ilh2sbbmqd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoThermalControl" }
, { "mr_NoThermalControl_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "NoThermalControl" } , { "mr_NoThermalControl_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoThermalControl" } , {
"mr_NoThermalControl_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "NoThermalControl" } , { "NoThermalControl.h" , MDL_INFO_MODEL_FILENAME ,
0 , - 1 , ( NULL ) } , { "NoThermalControl.c" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( void * ) "NoThermalControl" } } ; ajlc0frzu2j ajlc0frzu2 = { 0.0 } ;
void logslksxmu ( real_T * beapjezfaw , real_T * hxlxikaqf4 , real_T *
dvmnf0qf4u , real_T * em5losp1q2 , real_T * ekgo11rsl2 , real_T * odjsze3sp5
, real_T * g4x5lprhj2 , real_T * p5gslhtvr2 , real_T * c1n35vn4c3 , real_T *
nm5mrccp4k ) { * nm5mrccp4k = ajlc0frzu2 . P_0 ; * g4x5lprhj2 = * nm5mrccp4k
; * p5gslhtvr2 = * nm5mrccp4k ; * dvmnf0qf4u = * nm5mrccp4k ; * em5losp1q2 =
* nm5mrccp4k ; * ekgo11rsl2 = * nm5mrccp4k ; * odjsze3sp5 = * nm5mrccp4k ; *
hxlxikaqf4 = * nm5mrccp4k ; * c1n35vn4c3 = * nm5mrccp4k ; * beapjezfaw = *
nm5mrccp4k ; } void n0kgruy2ln ( real_T * nm5mrccp4k ) { * nm5mrccp4k =
ajlc0frzu2 . P_0 ; } void NoThermalControl ( real_T * beapjezfaw , real_T *
hxlxikaqf4 , real_T * dvmnf0qf4u , real_T * em5losp1q2 , real_T * ekgo11rsl2
, real_T * odjsze3sp5 , real_T * g4x5lprhj2 , real_T * p5gslhtvr2 , real_T *
c1n35vn4c3 , real_T * nm5mrccp4k ) { * nm5mrccp4k = ajlc0frzu2 . P_0 ; *
g4x5lprhj2 = * nm5mrccp4k ; * p5gslhtvr2 = * nm5mrccp4k ; * dvmnf0qf4u = *
nm5mrccp4k ; * em5losp1q2 = * nm5mrccp4k ; * ekgo11rsl2 = * nm5mrccp4k ; *
odjsze3sp5 = * nm5mrccp4k ; * hxlxikaqf4 = * nm5mrccp4k ; * c1n35vn4c3 = *
nm5mrccp4k ; * beapjezfaw = * nm5mrccp4k ; } void ozqahyp1e2 ( ilh2sbbmqd *
const lqpzzdfgao ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lqpzzdfgao -> _mdlRefSfcnS , "NoThermalControl" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void ehwnuiq0go ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , ilh2sbbmqd * const lqpzzdfgao , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void
) memset ( ( void * ) lqpzzdfgao , 0 , sizeof ( ilh2sbbmqd ) ) ; lqpzzdfgao
-> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; lqpzzdfgao -> _mdlRefSfcnS
= ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( lqpzzdfgao -> _mdlRefSfcnS , "NoThermalControl" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
NoThermalControl_InitializeDataMapInfo ( lqpzzdfgao , sysRanPtr , contextTid
) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( lqpzzdfgao ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( lqpzzdfgao -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( lqpzzdfgao ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_NoThermalControl_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_NoThermalControl , 39 ) ; * retVal = 1 ; } static void mr_NoThermalControl_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_NoThermalControl_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_NoThermalControl_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_NoThermalControl_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_NoThermalControl_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_NoThermalControl_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_NoThermalControl_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_NoThermalControl_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_NoThermalControl_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_NoThermalControl_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_NoThermalControl_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_NoThermalControl_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_NoThermalControl_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_NoThermalControl_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_NoThermalControl_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_NoThermalControl_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_NoThermalControl_GetDWork ( const lraeusaudmt * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void mr_NoThermalControl_SetDWork ( lraeusaudmt * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void mr_NoThermalControl_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3642979633U , 2571224776U , 1785159418U , 2668158788U , } ; slmrModelRefRegisterSimStateChecksum ( S , "NoThermalControl" , & chksum [ 0 ] ) ; } mxArray * mr_NoThermalControl_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
