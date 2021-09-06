#include <wdm.h>
#include <ntstrsafe.h>


NTSTATUS SysMain(PDRIVER_OBJECT DrvObject, PUNICODE_STRING RegPath) {
	UNREFERENCED_PARAMETER(DrvObject);
	UNREFERENCED_PARAMETER(RegPath);


	return STATUS_UNSUCCESSFUL;
}