#include "BMSBalancingLogic.h"
#include "rtwtypes.h"
#include "BMSBalancingLogic_private.h"
#include <string.h>
#include "BMSBalancingLogic_capi.h"
#define foe4jvytmj ((uint8_T)1U)
#define hrvbr3ddnk ((uint8_T)1U)
#define lqesd2dwv2 ((uint8_T)2U)
#define mexwwlsbb3 ((uint8_T)2U)
#define odur2uoaw3 ((uint8_T)0U)
static RegMdlInfo rtMdlInfo_BMSBalancingLogic [ 43 ] = { { "nxoas2gjfbm" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"jstvhowtcn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "g5xty3lupd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "juhxm4naco" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "mrmn34imhv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "jsb02kmnff" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "gszquorpt1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "ewonr4vamm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "bl2niwctsp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "j4z3yailpq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "jgzu1z1fxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "mls2ojfpfx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "hse03z0axo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "oghtrigrl0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "nqnuxuemn0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "jozn1uvmvd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "eouphsgcbg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "jvumnon2rl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "dnz245ggmu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "l0kmnlkf5y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "okbayvkvs0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "bjd0wkxsam" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "crcml3exdv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "bcsjconw2e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "BMSBalancingLogic" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "hy4a30rjzn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "pi3h4ymvb42" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSBalancingLogic" } , { "arovgo0wao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSBalancingLogic" } , { "jtvn52kzgd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSBalancingLogic" }
, { "mr_BMSBalancingLogic_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"mr_BMSBalancingLogic_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "BMSBalancingLogic" } , { "mr_BMSBalancingLogic_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSBalancingLogic" } , {
"BMSBalancingLogic.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"BMSBalancingLogic.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"BMSBalancingLogic" } } ; pi3h4ymvb42 pi3h4ymvb4 = { 0.01F , 30 , 20 , 60 ,
true } ; void okbayvkvs0 ( boolean_T n4byhwdk3h [ 96 ] , hse03z0axo * localDW
) { localDW -> mlepkj1i2a = 0U ; memset ( & n4byhwdk3h [ 0 ] , 0 , 96U *
sizeof ( boolean_T ) ) ; localDW -> l14arht0pc = false ; localDW ->
pvtvefe55b = 0.0F ; localDW -> fj34nukmqi = 0U ; localDW -> obquvdup4b =
odur2uoaw3 ; localDW -> cttsdmifmf = odur2uoaw3 ; } void l0kmnlkf5y ( boolean_T
n4byhwdk3h [ 96 ] , hse03z0axo * localDW ) { localDW -> mlepkj1i2a = 0U ;
memset ( & n4byhwdk3h [ 0 ] , 0 , 96U * sizeof ( boolean_T ) ) ; localDW ->
l14arht0pc = false ; localDW -> pvtvefe55b = 0.0F ; localDW -> fj34nukmqi =
0U ; localDW -> obquvdup4b = odur2uoaw3 ; localDW -> cttsdmifmf = odur2uoaw3
; } void BMSBalancingLogic ( const real32_T * kzzpi5g2pn , const real32_T
kecw5f4uup [ 96 ] , const real32_T * h2x23ryqoh , const real32_T * erx1den1g5
, boolean_T n4byhwdk3h [ 96 ] , hse03z0axo * localDW ) { int32_T i ; real32_T
pvtvefe55b_tmp ; boolean_T exitg1 ; boolean_T exitg2 ; boolean_T exitg3 ; if
( localDW -> mlepkj1i2a < 8191 ) { localDW -> mlepkj1i2a ++ ; } if ( localDW
-> fj34nukmqi == 0 ) { localDW -> fj34nukmqi = 1U ; localDW -> l14arht0pc =
true ; localDW -> mlepkj1i2a = 0U ; localDW -> obquvdup4b = hrvbr3ddnk ;
memset ( & n4byhwdk3h [ 0 ] , 0 , 96U * sizeof ( boolean_T ) ) ; localDW ->
pvtvefe55b = * h2x23ryqoh - * erx1den1g5 ; } else if ( localDW -> obquvdup4b
== hrvbr3ddnk ) { if ( pi3h4ymvb4 . P_4 && ( * kzzpi5g2pn != 2.0F ) && ( localDW
-> mlepkj1i2a * 5 >= pi3h4ymvb4 . P_2 ) && ( localDW -> pvtvefe55b >
pi3h4ymvb4 . P_0 ) ) { localDW -> obquvdup4b = lqesd2dwv2 ; localDW ->
pvtvefe55b = * h2x23ryqoh - * erx1den1g5 ; localDW -> cttsdmifmf = foe4jvytmj
; pvtvefe55b_tmp = pi3h4ymvb4 . P_0 / 2.0F ; for ( i = 0 ; i < 96 ; i ++ ) {
n4byhwdk3h [ i ] = ( kecw5f4uup [ i ] - * erx1den1g5 > pvtvefe55b_tmp ) ; }
localDW -> l14arht0pc = true ; i = 0 ; exitg3 = false ; while ( ( ! exitg3 )
&& ( i < 96 ) ) { if ( n4byhwdk3h [ i ] ) { localDW -> l14arht0pc = false ;
exitg3 = true ; } else { i ++ ; } } } else { localDW -> pvtvefe55b = *
h2x23ryqoh - * erx1den1g5 ; } } else if ( * kzzpi5g2pn == 2.0F ) { localDW ->
cttsdmifmf = odur2uoaw3 ; localDW -> mlepkj1i2a = 0U ; localDW -> obquvdup4b
= hrvbr3ddnk ; memset ( & n4byhwdk3h [ 0 ] , 0 , 96U * sizeof ( boolean_T ) )
; localDW -> pvtvefe55b = * h2x23ryqoh - * erx1den1g5 ; } else {
pvtvefe55b_tmp = * h2x23ryqoh - * erx1den1g5 ; localDW -> pvtvefe55b =
pvtvefe55b_tmp ; switch ( localDW -> cttsdmifmf ) { case foe4jvytmj : if ( localDW -> l14arht0pc ) { localDW -> mlepkj1i2a = 0U ; localDW -> cttsdmifmf = mexwwlsbb3 ; } else { pvtvefe55b_tmp = pi3h4ymvb4 . P_0 / 2.0F ; for ( i = 0 ; i < 96 ; i ++ ) { n4byhwdk3h [ i ] = ( kecw5f4uup [ i ] - * erx1den1g5 > pvtvefe55b_tmp ) ; } localDW -> l14arht0pc = true ; i = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( i < 96 ) ) { if ( n4byhwdk3h [ i ] ) { localDW -> l14arht0pc = false ; exitg2 = true ; } else { i ++ ; } } } break ; default : i = localDW -> mlepkj1i2a * 5 ; if ( ( i >= pi3h4ymvb4 . P_1 ) && ( localDW -> pvtvefe55b > pi3h4ymvb4 . P_0 ) ) { localDW -> cttsdmifmf = foe4jvytmj ; pvtvefe55b_tmp = pi3h4ymvb4 . P_0 / 2.0F ; for ( i = 0 ; i < 96 ; i ++ ) { n4byhwdk3h [ i ] = ( kecw5f4uup [ i ] - * erx1den1g5 > pvtvefe55b_tmp ) ; } localDW -> l14arht0pc = true ; i = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( i < 96 ) ) { if ( n4byhwdk3h [ i ] ) { localDW -> l14arht0pc = false ; exitg1 = true ; } else { i ++ ; } } } else if ( i >= pi3h4ymvb4 . P_3 ) { localDW -> cttsdmifmf = odur2uoaw3 ; localDW -> mlepkj1i2a = 0U ; localDW -> obquvdup4b = hrvbr3ddnk ; memset ( & n4byhwdk3h [ 0 ] , 0 , 96U * sizeof ( boolean_T ) ) ; localDW -> pvtvefe55b = pvtvefe55b_tmp ; } break ; } } } void jozn1uvmvd ( jtvn52kzgd * const d0hda010hq ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( d0hda010hq -> _mdlRefSfcnS , "BMSBalancingLogic" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void bjd0wkxsam ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , jtvn52kzgd * const d0hda010hq , hse03z0axo * localDW , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset ( ( void * ) d0hda010hq , 0 , sizeof ( jtvn52kzgd ) ) ; d0hda010hq -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; d0hda010hq -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( d0hda010hq -> _mdlRefSfcnS , "BMSBalancingLogic" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( hse03z0axo ) ) ; localDW -> pvtvefe55b = 0.0F ; BMSBalancingLogic_InitializeDataMapInfo ( d0hda010hq , localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( d0hda010hq -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( d0hda010hq -> DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( d0hda010hq -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_BMSBalancingLogic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_BMSBalancingLogic , 43 ) ; * retVal = 1 ; } static void mr_BMSBalancingLogic_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_BMSBalancingLogic_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_BMSBalancingLogic_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_BMSBalancingLogic_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_BMSBalancingLogic_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_BMSBalancingLogic_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_BMSBalancingLogic_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_BMSBalancingLogic_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_BMSBalancingLogic_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_BMSBalancingLogic_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_BMSBalancingLogic_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_BMSBalancingLogic_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_BMSBalancingLogic_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_BMSBalancingLogic_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_BMSBalancingLogic_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_BMSBalancingLogic_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_BMSBalancingLogic_GetDWork ( const nxoas2gjfbm * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = { "NULL->rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ; { static const char_T * rtdwDataFieldNames [ 6 ] = { "mdlrefDW->rtdw.pvtvefe55b" , "mdlrefDW->rtdw.mlepkj1i2a" , "mdlrefDW->rtdw.fj34nukmqi" , "mdlrefDW->rtdw.obquvdup4b" , "mdlrefDW->rtdw.cttsdmifmf" , "mdlrefDW->rtdw.l14arht0pc" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 6 , rtdwDataFieldNames ) ; mr_BMSBalancingLogic_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . pvtvefe55b ) , sizeof ( mdlrefDW -> rtdw . pvtvefe55b ) ) ; mr_BMSBalancingLogic_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . mlepkj1i2a ) , sizeof ( mdlrefDW -> rtdw . mlepkj1i2a ) ) ; mr_BMSBalancingLogic_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . fj34nukmqi ) , sizeof ( mdlrefDW -> rtdw . fj34nukmqi ) ) ; mr_BMSBalancingLogic_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . obquvdup4b ) , sizeof ( mdlrefDW -> rtdw . obquvdup4b ) ) ; mr_BMSBalancingLogic_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . cttsdmifmf ) , sizeof ( mdlrefDW -> rtdw . cttsdmifmf ) ) ; mr_BMSBalancingLogic_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . l14arht0pc ) , sizeof ( mdlrefDW -> rtdw . l14arht0pc ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void mr_BMSBalancingLogic_SetDWork ( nxoas2gjfbm * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_BMSBalancingLogic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . pvtvefe55b ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . pvtvefe55b ) ) ; mr_BMSBalancingLogic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . mlepkj1i2a ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . mlepkj1i2a ) ) ; mr_BMSBalancingLogic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . fj34nukmqi ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . fj34nukmqi ) ) ; mr_BMSBalancingLogic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . obquvdup4b ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . obquvdup4b ) ) ; mr_BMSBalancingLogic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . cttsdmifmf ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . cttsdmifmf ) ) ; mr_BMSBalancingLogic_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . l14arht0pc ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . l14arht0pc ) ) ; } } void mr_BMSBalancingLogic_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3555482080U , 1673835481U , 2365504665U , 613920185U , } ; slmrModelRefRegisterSimStateChecksum ( S , "BMSBalancingLogic" , & chksum [ 0 ] ) ; } mxArray * mr_BMSBalancingLogic_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
