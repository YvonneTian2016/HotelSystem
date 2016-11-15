// RuZhuLv.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "RuZhuLv.h"


// RuZhuLv 对话框

IMPLEMENT_DYNAMIC(RuZhuLv, CDialog)

RuZhuLv::RuZhuLv(CWnd* pParent /*=NULL*/)
	: CDialog(RuZhuLv::IDD, pParent)
{

}

RuZhuLv::~RuZhuLv()
{
}

void RuZhuLv::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(RuZhuLv, CDialog)
END_MESSAGE_MAP()


// RuZhuLv 消息处理程序
void RuZhuLv::setHotel(CHotel * p)
{
	h=p;
}