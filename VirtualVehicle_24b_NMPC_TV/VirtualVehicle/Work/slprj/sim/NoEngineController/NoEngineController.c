#include "NoEngineController.h"
#include "rtwtypes.h"
#include "NoEngineController_private.h"
#include "NoEngineController_capi.h"
static RegMdlInfo rtMdlInfo_NoEngineController [ 39 ] = { { "oyfbmrj0fcb" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "NoEngineController" } , {
"a1oc2cqe4h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "gsv5fe01yv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "ibc0pazbxk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "ird2ohfxur" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "capzv3nrt3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "pxdoip22tm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "l3ejwi3xn2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "egm5pkv5pb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "psosmcalvn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "psyp0da1v0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "oh10tklwbn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "ovhdc3d2g0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "fyjwfqzotk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "jgmyxjjdy1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "hizwzwfecs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "k1l0tekhfw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "l4z4udmhha" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "bgaunqzhxo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "lrji0cbcje" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "NoEngineController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "nvylvug5ip" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "dtzrjczxvbv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"NoEngineController" } , { "maz5rz3lkh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "NoEngineController" } , { "e1w1qplsha" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "NoEngineController"
} , { "mr_NoEngineController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "NoEngineController" } , {
"mr_NoEngineController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "NoEngineController" } , { "mr_NoEngineController_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "NoEngineController" } , {
"NoEngineController.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"NoEngineController.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"NoEngineController" } } ; dtzrjczxvbv dtzrjczxvb = { 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 }
; void k1l0tekhfw ( real_T * p3mvyc5rvb , real_T * b5titl24kv , real_T *
irvbjyllue , real_T * dyyd0llnwo , real_T * mkygbhlohn , real_T * g421j2lvqa
, real_T * eeysh4dioy , real_T * nserh2o43x , real_T * kmgacitazt , real_T *
fpjx245cq0 , real_T * p2kjsexujv , real_T * fee24oltav , real_T * aoc5dvnjro
, real_T * peybq2ek1b , real_T * i4hkuvyvxc , real_T * aqruaopco0 , real_T *
kpk5up525t ) { * p3mvyc5rvb = dtzrjczxvb . P_0 ; * b5titl24kv = dtzrjczxvb .
P_1 ; * irvbjyllue = dtzrjczxvb . P_2 ; * dyyd0llnwo = dtzrjczxvb . P_3 ; *
mkygbhlohn = dtzrjczxvb . P_4 ; * g421j2lvqa = dtzrjczxvb . P_5 ; *
eeysh4dioy = dtzrjczxvb . P_6 ; * nserh2o43x = dtzrjczxvb . P_7 ; *
kmgacitazt = dtzrjczxvb . P_8 ; * fpjx245cq0 = dtzrjczxvb . P_9 ; *
p2kjsexujv = dtzrjczxvb . P_10 ; * fee24oltav = dtzrjczxvb . P_11 ; *
aoc5dvnjro = dtzrjczxvb . P_12 ; * peybq2ek1b = dtzrjczxvb . P_13 ; *
i4hkuvyvxc = dtzrjczxvb . P_14 ; * aqruaopco0 = dtzrjczxvb . P_15 ; *
kpk5up525t = dtzrjczxvb . P_16 ; } void bgaunqzhxo ( real_T * p3mvyc5rvb ,
real_T * b5titl24kv , real_T * irvbjyllue , real_T * dyyd0llnwo , real_T *
mkygbhlohn , real_T * g421j2lvqa , real_T * eeysh4dioy , real_T * nserh2o43x
, real_T * kmgacitazt , real_T * fpjx245cq0 , real_T * p2kjsexujv , real_T *
fee24oltav , real_T * aoc5dvnjro , real_T * peybq2ek1b , real_T * i4hkuvyvxc
, real_T * aqruaopco0 , real_T * kpk5up525t ) { * p3mvyc5rvb = dtzrjczxvb .
P_0 ; * b5titl24kv = dtzrjczxvb . P_1 ; * irvbjyllue = dtzrjczxvb . P_2 ; *
dyyd0llnwo = dtzrjczxvb . P_3 ; * mkygbhlohn = dtzrjczxvb . P_4 ; *
g421j2lvqa = dtzrjczxvb . P_5 ; * eeysh4dioy = dtzrjczxvb . P_6 ; *
nserh2o43x = dtzrjczxvb . P_7 ; * kmgacitazt = dtzrjczxvb . P_8 ; *
fpjx245cq0 = dtzrjczxvb . P_9 ; * p2kjsexujv = dtzrjczxvb . P_10 ; *
fee24oltav = dtzrjczxvb . P_11 ; * aoc5dvnjro = dtzrjczxvb . P_12 ; *
peybq2ek1b = dtzrjczxvb . P_13 ; * i4hkuvyvxc = dtzrjczxvb . P_14 ; *
aqruaopco0 = dtzrjczxvb . P_15 ; * kpk5up525t = dtzrjczxvb . P_16 ; } void
NoEngineController ( real_T * p3mvyc5rvb , real_T * b5titl24kv , real_T *
irvbjyllue , real_T * dyyd0llnwo , real_T * mkygbhlohn , real_T * g421j2lvqa
, real_T * eeysh4dioy , real_T * nserh2o43x , real_T * kmgacitazt , real_T *
fpjx245cq0 , real_T * p2kjsexujv , real_T * fee24oltav , real_T * aoc5dvnjro
, real_T * peybq2ek1b , real_T * i4hkuvyvxc , real_T * aqruaopco0 , real_T *
kpk5up525t ) { * p3mvyc5rvb = dtzrjczxvb . P_0 ; * b5titl24kv = dtzrjczxvb .
P_1 ; * irvbjyllue = dtzrjczxvb . P_2 ; * dyyd0llnwo = dtzrjczxvb . P_3 ; *
mkygbhlohn = dtzrjczxvb . P_4 ; * g421j2lvqa = dtzrjczxvb . P_5 ; *
eeysh4dioy = dtzrjczxvb . P_6 ; * nserh2o43x = dtzrjczxvb . P_7 ; *
kmgacitazt = dtzrjczxvb . P_8 ; * fpjx245cq0 = dtzrjczxvb . P_9 ; *
p2kjsexujv = dtzrjczxvb . P_10 ; * fee24oltav = dtzrjczxvb . P_11 ; *
aoc5dvnjro = dtzrjczxvb . P_12 ; * peybq2ek1b = dtzrjczxvb . P_13 ; *
i4hkuvyvxc = dtzrjczxvb . P_14 ; * aqruaopco0 = dtzrjczxvb . P_15 ; *
kpk5up525t = dtzrjczxvb . P_16 ; } void hizwzwfecs ( e1w1qplsha * const
chhmqpexyb ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( chhmqpexyb -> _mdlRefSfcnS , "NoEngineController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void l4z4udmhha ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , e1w1qplsha * const chhmqpexyb , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ( void
) memset ( ( void * ) chhmqpexyb , 0 , sizeof ( e1w1qplsha ) ) ; chhmqpexyb
-> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; chhmqpexyb -> _mdlRefSfcnS
= ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( chhmqpexyb -> _mdlRefSfcnS , "NoEngineController" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
NoEngineController_InitializeDataMapInfo ( chhmqpexyb , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( chhmqpexyb
-> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( chhmqpexyb -> DataMapInfo . mmi
, rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( chhmqpexyb ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_NoEngineController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_NoEngineController , 39 ) ; * retVal = 1 ; } static void mr_NoEngineController_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void mr_NoEngineController_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray ) ; } static void mr_NoEngineController_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void mr_NoEngineController_restoreDataFromMxArray ( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void mr_NoEngineController_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void mr_NoEngineController_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T mr_NoEngineController_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T mr_NoEngineController_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void mr_NoEngineController_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void mr_NoEngineController_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static void mr_NoEngineController_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static void mr_NoEngineController_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static void mr_NoEngineController_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void mr_NoEngineController_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T mr_NoEngineController_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T mr_NoEngineController_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray * mr_NoEngineController_GetDWork ( const oyfbmrj0fcb * mdlrefDW ) { ( void ) mdlrefDW ; return ( NULL ) ; } void mr_NoEngineController_SetDWork ( oyfbmrj0fcb * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void mr_NoEngineController_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3001147490U , 2924814476U , 3611566263U , 1342983273U , } ; slmrModelRefRegisterSimStateChecksum ( S , "NoEngineController" , & chksum [ 0 ] ) ; } mxArray * mr_NoEngineController_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
