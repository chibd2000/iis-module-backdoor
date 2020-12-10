#pragma once
#define _WINSOCKAPI_

class CMyHttpModule :
	public CHttpModule
{
public:
	CMyHttpModule();
	~CMyHttpModule();
	REQUEST_NOTIFICATION_STATUS OnBeginRequest(IN IHttpContext * pHttpContext, IN IHttpEventProvider * pProvider);

};

