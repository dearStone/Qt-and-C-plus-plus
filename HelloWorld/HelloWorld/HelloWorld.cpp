// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ipp.h"
#include "stdlib.h"

int main(int argc, char* argv[])
{
	const IppLibraryVersion *lib;
	IppStatus status;
	Ipp64u mask, emask;

	/* Initialize Intel IPP library */
	ippInit();
	/* Get Intel IPP library version info */
	lib = ippGetLibVersion();
	printf("%s %s\n", lib->Name, lib->Version);

	/* Get CPU features and features enabled with selected library level */
	status = ippGetCpuFeatures(&mask, 0);
	if (ippStsNoErr == status) {
		emask = ippGetEnabledCpuFeatures();
		printf("Features supported by CPU\tby Intel IPP\n");
		printf("-----------------------------------------\n");
	}
	system("pause");
	printf("dearStone\n");
	return 0;
}
