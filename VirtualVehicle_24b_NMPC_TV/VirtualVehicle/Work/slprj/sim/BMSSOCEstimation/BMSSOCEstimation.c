#include "BMSSOCEstimation.h"
#include "rtwtypes.h"
#include "BMSSOCEstimation_private.h"
#include "BMSSOCEstimation_capi.h"
static RegMdlInfo rtMdlInfo_BMSSOCEstimation [ 42 ] = { { "pe5hyd5e5ea" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"c1vnk4bz5q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "j3dscajw3t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "bjcz3zxgfk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "nrhlzznkhr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "h3puzbdfgf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "hjckfmofj5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "e3awe0thaz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "d3rumsr0qz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "jboicjttrg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "ippvh32ghj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "iwvfcolfgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "izjsvhfdps" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "pbiqgdx5za" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "fnots123ka" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "kcczw4j51s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "oypyoif5rn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "ioolb10wj0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "hue3c0yakn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "bbzyccyfe5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "dllaarzzct" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "edlegkvm3f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "juw2ywacbx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "BMSSOCEstimation" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "gtoacagi4d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "aisrboyg3zp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMSSOCEstimation" } , { "hpenwvdsgo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , { "fcomfl1sgs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMSSOCEstimation" }
, { "mr_BMSSOCEstimation_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BMSSOCEstimation" } , { "mr_BMSSOCEstimation_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMSSOCEstimation" } , {
"mr_BMSSOCEstimation_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "BMSSOCEstimation" } , { "BMSSOCEstimation.h" , MDL_INFO_MODEL_FILENAME ,
0 , - 1 , ( NULL ) } , { "BMSSOCEstimation.c" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( void * ) "BMSSOCEstimation" } } ; aisrboyg3zp aisrboyg3z = { 0.1F ,
1.0F , 0.0F , 0.000277777785F } ; void bbzyccyfe5 ( izjsvhfdps * localDW ) {
localDW -> myrqiep04m = ( real32_T ) rtP__PlntBattSocInit2f2BatteryDCDC_sldd_
; } void hue3c0yakn ( izjsvhfdps * localDW ) { localDW -> myrqiep04m = ( real32_T ) rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ ; } void BMSSOCEstimation ( const real32_T * e4051bwwkz , real32_T * bjpjid5gap , pbiqgdx5za * localB , izjsvhfdps * localDW ) { * bjpjid5gap = localDW -> myrqiep04m ; localB -> l2x3rgvlyq = aisrboyg3z . P_6 * * e4051bwwkz / ( real32_T ) ( rtP__PlntBattChrgMax2f2BatteryDCDC_sldd_ * rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ) ; } void ioolb10wj0 ( pbiqgdx5za * localB , izjsvhfdps * localDW ) { localDW -> myrqiep04m += aisrboyg3z . P_3 * localB -> l2x3rgvlyq ; if ( localDW -> myrqiep04m > aisrboyg3z . P_4 ) { localDW -> myrqiep04m = aisrboyg3z . P_4 ; } else if ( localDW -> myrqiep04m < aisrboyg3z . P_5 ) { localDW -> myrqiep04m = aisrboyg3z . P_5 ; } } void kcczw4j51s ( fcomfl1sgs * const ileo0mwgm0 ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ileo0mwgm0 -> _mdlRefSfcnS , "BMSSOCEstimation" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void dllaarzzct ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , fcomfl1sgs * const ileo0mwgm0 , pbiqgdx5za * localB , izjsvhfdps * localDW , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void ) memset ( ( void * ) ileo0mwgm0 , 0 , sizeof ( fcomfl1sgs ) ) ; ileo0mwgm0 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; ileo0mwgm0 -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ileo0mwgm0 -> _mdlRefSfcnS , "BMSSOCEstimation" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> l2x3rgvlyq = 0.0F ; } localDW -> myrqiep04m = 0.0F ; BMSSOCEstimation_InitializeDataMapInfo ( ileo0mwgm0 , localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( ileo0mwgm0 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( ileo0mwgm0 -> DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( ileo0mwgm0 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_BMSSOCEstimation_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_BMSSOCEstimation , 42 ) ; * retVal = 1 ; } static void mr_BMSSOCEstimation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_BMSSOCEstimation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_BMSSOCEstimation_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_BMSSOCEstimation_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_BMSSOCEstimation_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_BMSSOCEstimation_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_BMSSOCEstimation_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_BMSSOCEstimation_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_BMSSOCEstimation_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_BMSSOCEstimation_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_BMSSOCEstimation_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_BMSSOCEstimation_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_BMSSOCEstimation_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_BMSSOCEstimation_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_BMSSOCEstimation_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_BMSSOCEstimation_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_BMSSOCEstimation_GetDWork ( const pe5hyd5e5ea * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ; mr_BMSSOCEstimation_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T * rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.myrqiep04m" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ; mr_BMSSOCEstimation_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . myrqiep04m ) , sizeof ( mdlrefDW -> rtdw . myrqiep04m ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void mr_BMSSOCEstimation_SetDWork ( pe5hyd5e5ea * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; mr_BMSSOCEstimation_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_BMSSOCEstimation_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw . myrqiep04m ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . myrqiep04m ) ) ; } } void mr_BMSSOCEstimation_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3158557707U , 1056802611U , 2473140573U , 1411181104U , } ; slmrModelRefRegisterSimStateChecksum ( S , "BMSSOCEstimation" , & chksum [ 0 ] ) ; } mxArray * mr_BMSSOCEstimation_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
