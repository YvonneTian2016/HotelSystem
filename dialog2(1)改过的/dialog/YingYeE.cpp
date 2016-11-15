// YingYeE.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "YingYeE.h"


// YingYeE 对话框

IMPLEMENT_DYNAMIC(YingYeE, CDialog)

YingYeE::YingYeE(CWnd* pParent /*=NULL*/)
	: CDialog(YingYeE::IDD, pParent)
{

}

YingYeE::~YingYeE()
{
}

void YingYeE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(YingYeE, CDialog)
END_MESSAGE_MAP()


// YingYeE 消息处理程序
void YingYeE::setHotel(CHotel * p)
{
	h=p;
}
