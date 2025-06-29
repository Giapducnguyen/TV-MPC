#include "BMSCurrPowerLimCalc.h"
#include "rtwtypes.h"
#include "BMSCurrPowerLimCalc_private.h"
#include "mwmathutil.h"
#include "BMSCurrPowerLimCalc_capi.h"
#include "look1_iflf_binlcpw.h"
static RegMdlInfo rtMdlInfo_BMSCurrPowerLimCalc [ 40 ] = { { "ozx2hltu2vi" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"nmbd3k1hcq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "jqacrkovtg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "kiyn2oqhw5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "l1pzasquyk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "no0rimu42g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "e3peyfr5ru" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "idaqzyveji" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "iyfkxzcwei" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "jqopypj5kl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "hg1vudkp1r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "ex3wbp43ez" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "nqqhrasv32" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "civiuhml2a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "dvtlb0ngqi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "du2aze3q0u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "j4krnruoer" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "ovxk0vh13q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "mmipgl5oaa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "osess5f5ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "kdkufhgnej" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "BMSCurrPowerLimCalc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "fiuo2fvsaw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "c4f4hs3f30w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSCurrPowerLimCalc" } , { "nnj3wcguse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "fff1on5pla" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc"
} , { "mr_BMSCurrPowerLimCalc_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , {
"mr_BMSCurrPowerLimCalc_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "mr_BMSCurrPowerLimCalc_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } , { "BMSCurrPowerLimCalc.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "BMSCurrPowerLimCalc.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "BMSCurrPowerLimCalc" } } ; c4f4hs3f30w c4f4hs3f30 = { { 1.0F , 0.8F , 0.5F , 0.3F , 0.0F } , { 40.0F , 45.0F , 50.0F , 55.0F , 60.0F } , { 0.1F , 0.2F , 0.3F , 0.3F , 0.5F , 1.0F , 1.0F } , { - 15.0F , - 10.0F , - 5.0F , 0.0F , 5.0F , 10.0F , 15.0F } , { 1.0F , 0.8F , 0.3F , 0.3F } , { 3.9F , 4.0F , 4.15F , 4.2F } , 6.36F , { 1.0F , 0.5F , 0.3F , 0.0F } , { 40.0F , 45.0F , 50.0F , 60.0F } , { 0.0F , 0.2F , 0.3F , 0.5F , 0.75F , 1.0F , 1.0F } , { - 10.0F , - 5.0F , 0.0F , 5.0F , 10.0F , 15.0F , 20.0F } , { 0.0F , 0.5F , 1.0F } , { 2.5F , 2.75F , 3.0F } , - 20.0F } ; void BMSCurrPowerLimCalc ( const real32_T d51msl4tbc [ 96 ] , const real32_T noulgqqcoo [ 96 ] , real32_T * oqmgsset2u , real32_T * kouqt1hzal , real32_T * kv5an1dmb2 , real32_T * ii5nemx5k0 , real32_T * bnkpia5wne , real32_T * jqa42ursw1 ) { int32_T k ; real32_T minV ; minV = d51msl4tbc [ 0 ] ; for ( k = 0 ; k < 95 ; k ++ ) { minV = muSingleScalarMin ( minV , d51msl4tbc [ k + 1 ] ) ; } * kv5an1dmb2 = minV ; minV = noulgqqcoo [ 0 ] ; for ( k = 0 ; k < 95 ; k ++ ) { minV = muSingleScalarMin ( minV , noulgqqcoo [ k + 1 ] ) ; } * bnkpia5wne = minV ; minV = d51msl4tbc [ 0 ] ; for ( k = 0 ; k < 95 ; k ++ ) { minV = muSingleScalarMax ( minV , d51msl4tbc [ k + 1 ] ) ; } * ii5nemx5k0 = minV ; minV = noulgqqcoo [ 0 ] ; for ( k = 0 ; k < 95 ; k ++ ) { minV = muSingleScalarMax ( minV , noulgqqcoo [ k + 1 ] ) ; } * jqa42ursw1 = minV ; * kouqt1hzal = c4f4hs3f30 . P_7 * muSingleScalarMin ( muSingleScalarMin ( look1_iflf_binlcpw ( * ii5nemx5k0 , c4f4hs3f30 . P_6 , c4f4hs3f30 . P_5 , 3U ) , look1_iflf_binlcpw ( * bnkpia5wne , c4f4hs3f30 . P_4 , c4f4hs3f30 . P_3 , 6U ) ) , look1_iflf_binlcpw ( * jqa42ursw1 , c4f4hs3f30 . P_2 , c4f4hs3f30 . P_1 , 4U ) ) * ( real32_T ) rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; * oqmgsset2u = c4f4hs3f30 . P_14 * muSingleScalarMin ( muSingleScalarMin ( look1_iflf_binlcpw ( * kv5an1dmb2 , c4f4hs3f30 . P_13 , c4f4hs3f30 . P_12 , 2U ) , look1_iflf_binlcpw ( * bnkpia5wne , c4f4hs3f30 . P_11 , c4f4hs3f30 . P_10 , 6U ) ) , look1_iflf_binlcpw ( * jqa42ursw1 , c4f4hs3f30 . P_9 , c4f4hs3f30 . P_8 , 3U ) ) * ( real32_T ) rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; } void du2aze3q0u ( fff1on5pla * const jhq13jgrxf ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( jhq13jgrxf -> _mdlRefSfcnS , "BMSCurrPowerLimCalc" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void mmipgl5oaa ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , fff1on5pla * const jhq13jgrxf , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset ( ( void * ) jhq13jgrxf , 0 , sizeof ( fff1on5pla ) ) ; jhq13jgrxf -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; jhq13jgrxf -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( jhq13jgrxf -> _mdlRefSfcnS , "BMSCurrPowerLimCalc" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } BMSCurrPowerLimCalc_InitializeDataMapInfo ( jhq13jgrxf , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( jhq13jgrxf -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( jhq13jgrxf -> DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( jhq13jgrxf -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_BMSCurrPowerLimCalc_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_BMSCurrPowerLimCalc , 40 ) ; * retVal = 1 ; } static void mr_BMSCurrPowerLimCalc_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_BMSCurrPowerLimCalc_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_BMSCurrPowerLimCalc_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_BMSCurrPowerLimCalc_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_BMSCurrPowerLimCalc_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_BMSCurrPowerLimCalc_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_BMSCurrPowerLimCalc_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_BMSCurrPowerLimCalc_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_BMSCurrPowerLimCalc_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_BMSCurrPowerLimCalc_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_BMSCurrPowerLimCalc_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_BMSCurrPowerLimCalc_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_BMSCurrPowerLimCalc_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_BMSCurrPowerLimCalc_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_BMSCurrPowerLimCalc_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_BMSCurrPowerLimCalc_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_BMSCurrPowerLimCalc_GetDWork ( const ozx2hltu2vi * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void mr_BMSCurrPowerLimCalc_SetDWork ( ozx2hltu2vi * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void mr_BMSCurrPowerLimCalc_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3686256244U , 3114940124U , 947661178U , 701098456U , } ; slmrModelRefRegisterSimStateChecksum ( S , "BMSCurrPowerLimCalc" , & chksum [ 0 ] ) ; } mxArray * mr_BMSCurrPowerLimCalc_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
