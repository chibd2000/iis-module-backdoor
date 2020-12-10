#pragma once

class CMyHttpFactory : public IHttpModuleFactory
{
public:
	CMyHttpFactory();
	~CMyHttpFactory();
	HRESULT GetHttpModule(OUT CHttpModule ** ppModule, IN IModuleAllocator * pAllocator);
	void Terminate();
};

