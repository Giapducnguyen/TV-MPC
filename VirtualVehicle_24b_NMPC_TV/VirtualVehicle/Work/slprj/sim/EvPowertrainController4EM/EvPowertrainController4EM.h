#ifndef EvPowertrainController4EM_h_
#define EvPowertrainController4EM_h_
#ifndef EvPowertrainController4EM_COMMON_INCLUDES_
#define EvPowertrainController4EM_COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "EvPowertrainController4EM_types.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { oytx5zapfu QRManager ; kzv4ftj4e2 CholManager ; c3tcu1vsoj
b_obj ; c3tcu1vsoj WorkingSet ; c3tcu1vsoj c_WorkingSet ; kmbpuy2anc memspace
; real_T B [ 26741 ] ; ci1jcnwvc5 TrialState ; real_T Hessian [ 676 ] ;
real_T nmimg104an [ 11 ] ; real_T o2qc0z2iec ; real_T mvqmwjobhl [ 2 ] ;
real_T kk5g3qa1ab [ 26 ] ; real_T hifwcmswrk [ 201 ] ; real_T kfky3x1ct4 [
201 ] ; real_T iiyddlbchw [ 201 ] ; real_T pfotcoa1by [ 201 ] ; real_T
a4s2nojs0h ; real_T aalmyye01r ; real_T c1fcf4xd3b ; real_T jwymxcmvfu ;
real_T a0wmwsydze ; real_T dghaupurkc ; } d4m2qnxaxx ; typedef struct {
real_T pophr5lzve [ 4 ] ; real_T fy5ps0vnmo [ 26 ] ; real_T fyczfqu5d1 [ 11 ]
; real_T k3wtm0bzih [ 2 ] ; real_T m2eudybppp [ 201 ] ; real_T fsvou2544p [
201 ] ; real_T hheq0b5rgn [ 201 ] ; real_T bkeddeqpbw [ 201 ] ; real_T
jxlucfehp1 ; real_T knprixuhqy ; real_T hyfypdejrs ; real_T i1rb5p2wdu ;
real_T lcjh3yhjfv [ 2 ] ; real_T aqogycpvqd [ 2 ] ; real_T p1ynaxw2kn [ 4 ] ;
real_T pg2hyiwwhz ; real_T pepscbjqk4 ; struct { void * AQHandles ; }
ivmrcbyxgt ; struct { void * AQHandles ; } l4ltxt5zx1 ; struct { void *
AQHandles ; } iow1zb41nn ; struct { void * AQHandles ; } depxbtcebe ; struct
{ void * AQHandles ; } dkrgzmmphu ; struct { void * AQHandles ; } fv1ztkelof
; struct { void * AQHandles ; } itskgiqhz2 ; struct { void * AQHandles ; }
mlemipyadb ; struct { void * AQHandles ; } ezl2ntihdf ; struct { void *
AQHandles ; } i1mtsusvml ; struct { void * AQHandles ; } cekiui3znc ; struct
{ void * AQHandles ; } ol1dphwxf3 ; struct { void * AQHandles ; } ms4bj3urgt
; struct { void * AQHandles ; } k3hp0ajooa ; struct { void * AQHandles ; }
gctb1llys1 ; struct { void * AQHandles ; } dkrgzmmphuh ; uint32_T mwdg02ndpd
; uint32_T jmxm2hc1kh ; uint32_T n0bkstmppv [ 202 ] ; uint32_T pgi1aok3cr ;
uint32_T g3a1sbd5cj [ 201 ] ; uint32_T gedptl3pzo [ 202 ] ; uint32_T
buyauevq5n ; uint32_T cdnjjogkeu [ 201 ] ; uint32_T piqmu5hx3l ; int8_T
o4ablo3jr0 ; int8_T pbom5jpcjj ; int8_T b5yo3nv33g ; int8_T oienxzjnme ; }
fuctzs4sww ; struct njz0210ca5h_ { real_T P_32 ; real_T P_33 ; real_T P_34 ;
real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T
P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ;
real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T
P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ;
real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T
P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ;
real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T
P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ;
real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T
P_84 ; real_T P_85 ; real_T P_86 [ 200 ] ; real_T P_87 ; real_T P_88 ; real_T
P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 [ 200 ] ; real_T P_93 ; real_T
P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ;
real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ;
real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T P_109 ;
real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ;
real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ;
real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ;
real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ;
real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T P_133 ; real_T P_134 ;
real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ; real_T P_139 ;
real_T P_140 ; real_T P_141 [ 3 ] ; real_T P_142 [ 3 ] ; real_T P_143 ;
real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T P_148 ;
real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ;
real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ;
real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ;
real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T P_168 [ 4
] ; real_T P_169 ; real_T P_170 ; real_T P_171 [ 26 ] ; real_T P_172 [ 11 ] ;
real_T P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 [ 2
] ; real_T P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182
; real_T P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; uint32_T P_187
; uint32_T P_188 [ 2 ] ; uint32_T P_189 [ 2 ] ; uint8_T P_190 ; uint8_T P_191
; uint8_T P_192 ; uint8_T P_193 ; uint8_T P_194 ; } ; struct n1mbwr340b {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
12 ] ; int32_T * vardimsAddress [ 12 ] ; RTWLoggingFcnPtr loggingPtrs [ 12 ]
; sysRanDType * systemRan [ 30 ] ; int_T systemTid [ 30 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef struct {
d4m2qnxaxx rtb ; fuctzs4sww rtdw ; ghy3lg3t4k rtm ; } etgxjyp0hjh ; extern
real_T rtP__CtrlBcuTrlrBrkGain2f2PassVeh_sldd_ ; extern real_T
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__EnvGrvty2f2Environment_sldd_ ; extern real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ [ 154 ] ; extern real_T
rtP__PlntEM1Spd2f2ElectricMachine1_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM1SpdEff2f2ElectricMachine1_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM1Trq2f2ElectricMachine1_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ [ 11 ] ; extern real_T
rtP__PlntEM3EffTbl2f2ElectricMachine3_sldd_ [ 154 ] ; extern real_T
rtP__PlntEM3Spd2f2ElectricMachine3_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM3SpdEff2f2ElectricMachine3_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM3Trq2f2ElectricMachine3_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM3TrqEff2f2ElectricMachine3_sldd_ [ 11 ] ; extern real_T
rtP__PlntEMWhlGearEffFL2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEMWhlGearEffRL2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEMWhlGearRatioFL2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEMWhlGearRatioRL2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehMass2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlLdRadiusFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlLdRadiusRear2f2PassVeh_sldd_ ; extern void jtu2yp4mzt ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
ghy3lg3t4k * const obwppemxpt , d4m2qnxaxx * localB , fuctzs4sww * localDW ,
void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI ,
const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_EvPowertrainController4EM_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_EvPowertrainController4EM_GetDWork ( const etgxjyp0hjh * mdlrefDW ) ;
extern void mr_EvPowertrainController4EM_SetDWork ( etgxjyp0hjh * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_EvPowertrainController4EM_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_EvPowertrainController4EM_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
EvPowertrainController4EM_GetCAPIStaticMap ( void ) ; extern void cudgh3jl0o
( ghy3lg3t4k * const obwppemxpt , fuctzs4sww * localDW ) ; extern void
dx03fqh3vz ( real_T * d5al3q5d2n , real_T * h1t2u5fil2 , real_T * j200csbdtq
, real_T * jxlsupm5zm , real_T * fbgdfzguau , fuctzs4sww * localDW ) ; extern
void cvnazlnugz ( real_T * d5al3q5d2n , real_T * h1t2u5fil2 , real_T *
j200csbdtq , real_T * jxlsupm5zm , real_T * fbgdfzguau , fuctzs4sww * localDW
) ; extern void pmaz4haa3k ( ghy3lg3t4k * const obwppemxpt , fuctzs4sww *
localDW ) ; extern void o2dsc4aixv ( real_T * d5al3q5d2n , real_T *
h1t2u5fil2 , real_T * j200csbdtq , real_T * jxlsupm5zm , real_T * fbgdfzguau
, d4m2qnxaxx * localB ) ; extern void eomqpqr0rkTID0 ( real_T cmdd4wxsgc [ 4
] , d4m2qnxaxx * localB , fuctzs4sww * localDW ) ; extern void eomqpqr0rkTID1
( fuctzs4sww * localDW ) ; extern void EvPowertrainController4EMTID0 ( ghy3lg3t4k * const obwppemxpt , const real_T * ou4mx0rbp5 , const real_T lvdodww5cm [ 4 ] , const real_T * abdrusdwgj , const real_T kq5dbo0rgg [ 4 ] , const real_T * iehyt2vhuj , const real_T * nlrfbnbw4m , const real_T * gofaxr5yxi , const real_T * buze2bnr1i , const real_T m1uk1i0jhi [ 3 ] , const real_T e1vxnu1wnp [ 4 ] , const real_T * oakxzdmw2z , const real_T jyoqfmrpak [ 3 ] , const real_T * hqcf5g33ch , const real_T * ob3iqse2rj , real_T * d5al3q5d2n , real_T cmdd4wxsgc [ 4 ] , real_T g0tgkqdgu5 [ 4 ] , real_T * h1t2u5fil2 , real_T * j200csbdtq , real_T * jxlsupm5zm , real_T * fbgdfzguau , real_T ggfsdvp45d [ 6 ] , d4m2qnxaxx * localB , fuctzs4sww * localDW ) ; extern void EvPowertrainController4EMTID1 ( fuctzs4sww * localDW ) ; extern void EvPowertrainController4EMTID2 ( d4m2qnxaxx * localB ) ; extern void c3safteidr ( ghy3lg3t4k * const obwppemxpt ) ;
#endif
