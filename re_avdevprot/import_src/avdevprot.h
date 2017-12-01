#ifndef _AVDEVPROT_H_
#define _AVDEVPROT_H_






















//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/28 19:59
//	函数功能  :	复制并保存RegistryPath	sub_140009388
//************************************************************************************************************
NTSTATUS avk_CopyRegistryPath(PUNICODE_STRING src , PUNICODE_STRING dst);


//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/28 20:35
//	函数功能  :	sub_1400093E8
//************************************************************************************************************
NTSTATUS avk_GetSimulateUSBValue(PUNICODE_STRING RegistryPath);

//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/28 22:27
//	函数功能  :	获取系统信息 sub_1400019EC
//************************************************************************************************************
NTSTATUS avk_GetSystemInfo(SYSINFO *SysInfo);
void sub_14000172C();


void sub_1400027F4();
void sub_140002978(int itrue);
void sub_140002E74(HANDLE ParentId , HANDLE ProcessId , BOOLEAN Create);









//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/27 22:04
//	函数功能  :	创建和关闭派遣函数 sub_14000170C
//************************************************************************************************************
NTSTATUS avk_DispatchCreateClose(_Inout_ struct _DEVICE_OBJECT *DeviceObject , _Inout_ struct _IRP *Irp);



//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/27 22:09
//	函数功能  :	设备控制派遣函数函数 sub_140009198
//************************************************************************************************************
NTSTATUS avk_DispatchDeviceControl(_Inout_ struct _DEVICE_OBJECT *DeviceObject , _Inout_ struct _IRP *Irp);



//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/29 20:01
//	函数功能  :	获取函数PsIsThreadTerminating偏移标识	sub_140003694
//************************************************************************************************************
int avk_GetOffsetFlag(int dwBuildNumber , int dwMinorVersion);

//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/29 21:40
//	函数功能  :	根据 peprocess得到其指向空间某个特定的值 sub_1400036E4 -> sub_140003998
//				windbg命令： !processfields
//************************************************************************************************************
int avk_GetPeprocessValue(char *peprocess , int length , char *aSystem , int a4);




PAM_OFF28 sub_1400019E4();


NTSTATUS sub_140003290(void *a1);

void sub_1400032EC();


NTSTATUS sub_140003150();

void sub_140002A40(void *a1,void *a2);

void sub_1400032F8();



























#endif // !_AVDEVPROT_H_
