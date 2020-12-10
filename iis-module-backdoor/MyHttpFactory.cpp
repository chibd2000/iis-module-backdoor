#include "stdafx.h"
#include "MyHttpFactory.h"
#include "MyHttpModule.h"


CMyHttpFactory::CMyHttpFactory()
{
}


CMyHttpFactory::~CMyHttpFactory()
{
}


HRESULT CMyHttpFactory::GetHttpModule(OUT CHttpModule ** ppModule, IN IModuleAllocator * pAllocator)
{
	UNREFERENCED_PARAMETER(pAllocator);

	// Create a new instance.
	CMyHttpModule* pModule = new CMyHttpModule;

	// Test for an error.
	if (!pModule)
	{
		// Return an error if the factory cannot create the instance.
		return HRESULT_FROM_WIN32(ERROR_NOT_ENOUGH_MEMORY);
	}
	else
	{
		// Return a pointer to the module.
		*ppModule = pModule;
		pModule = NULL;
		// Return a success status.
		return S_OK;
	}
}

void CMyHttpFactory::Terminate()
{
	// Remove the class from memory.
	delete this;
}