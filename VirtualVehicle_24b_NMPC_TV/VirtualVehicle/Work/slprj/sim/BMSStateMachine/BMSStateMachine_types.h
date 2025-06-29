#ifndef BMSStateMachine_types_h_
#define BMSStateMachine_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_Contact_
#define DEFINED_TYPEDEF_FOR_Contact_
typedef int8_T Contact ;
#define Contact_Init ((Contact)0)
#define Contact_Open ((Contact)1) 
#define Contact_Close ((Contact)2)
#endif
#ifndef DEFINED_TYPEDEF_FOR_MonitorCellTempModeType_
#define DEFINED_TYPEDEF_FOR_MonitorCellTempModeType_
typedef enum { MonitorCellTempModeType_None = 0 ,
MonitorCellTempModeType_NoCellTempFault ,
MonitorCellTempModeType_HighTemperatureFault ,
MonitorCellTempModeType_LowTemperatureFault } MonitorCellTempModeType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MonitorCellVoltageModeType_
#define DEFINED_TYPEDEF_FOR_MonitorCellVoltageModeType_
typedef enum { MonitorCellVoltageModeType_None = 0 ,
MonitorCellVoltageModeType_NoCellVoltFault ,
MonitorCellVoltageModeType_OverVoltageFault ,
MonitorCellVoltageModeType_SensorFaut ,
MonitorCellVoltageModeType_UnderVoltageFault } MonitorCellVoltageModeType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MonitorCurrLimModeType_
#define DEFINED_TYPEDEF_FOR_MonitorCurrLimModeType_
typedef enum { MonitorCurrLimModeType_None = 0 ,
MonitorCurrLimModeType_NoCurrLimFault , MonitorCurrLimModeType_Wait ,
MonitorCurrLimModeType_OverCurrentFault } MonitorCurrLimModeType ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 21
#endif
#ifndef SS_INT64
#define SS_INT64 22
#endif
typedef struct ewqe2zdtlnq_ ewqe2zdtlnq ; typedef struct ip5ny4q1kv
prulmh2jni ;
#endif
