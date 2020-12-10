#pragma once
#define _WINSOCKAPI_
#include "Exploit.h"
class CMyHttpModule : public CHttpModule
{

public:
	Exploit* exp;
	
public:
	CMyHttpModule();
	~CMyHttpModule();
	REQUEST_NOTIFICATION_STATUS OnBeginRequest(IN IHttpContext * pHttpContext, IN IHttpEventProvider * pProvider);

};

