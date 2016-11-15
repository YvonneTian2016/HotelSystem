// Service.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "Service.h"


// Service 对话框

IMPLEMENT_DYNAMIC(Service, CDialog)

Service::Service(CWnd* pParent /*=NULL*/)
	: CDialog(Service::IDD, pParent)
{

}

Service::~Service()
{
}

void Service::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Service, CDialog)
END_MESSAGE_MAP()


// Service 消息处理程序
