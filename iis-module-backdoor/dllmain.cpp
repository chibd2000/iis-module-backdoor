// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"
#include "MyHttpFactory.h"

// Create the module's exported registration function.
HRESULT __stdcall RegisterModule(DWORD dwServerVersion,IHttpModuleRegistrationInfo * pModuleInfo,IHttpServer * pGlobalInfo)
{
    UNREFERENCED_PARAMETER( dwServerVersion );
    UNREFERENCED_PARAMETER( pGlobalInfo );

    // Set the request notifications and exit.
    return pModuleInfo->SetRequestNotifications(
        new CMyHttpFactory,
        RQ_BEGIN_REQUEST,
        0
    );
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

