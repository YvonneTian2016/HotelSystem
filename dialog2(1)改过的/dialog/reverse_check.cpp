// reverse_check.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "reverse_check.h"


// reverse_check 对话框

IMPLEMENT_DYNAMIC(reverse_check, CDialog)

reverse_check::reverse_check(CWnd* pParent /*=NULL*/)
	: CDialog(reverse_check::IDD, pParent)
{

}

reverse_check::~reverse_check()
{
}

void reverse_check::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(reverse_check, CDialog)
END_MESSAGE_MAP()


// reverse_check 消息处理程序
