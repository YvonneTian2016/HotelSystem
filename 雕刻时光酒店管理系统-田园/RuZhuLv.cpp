// RuZhuLv.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "RuZhuLv.h"
#include "CHotel.h"

// RuZhuLv 对话框

IMPLEMENT_DYNAMIC(RuZhuLv, CDialog)

RuZhuLv::RuZhuLv(CWnd* pParent /*=NULL*/)
	: CDialog(RuZhuLv::IDD, pParent)
	, ruzhulv(_T(""))
{

}

RuZhuLv::~RuZhuLv()
{
}

void RuZhuLv::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ruzhulv);
}


BEGIN_MESSAGE_MAP(RuZhuLv, CDialog)
	ON_BN_CLICKED(IDOK, &RuZhuLv::OnBnClickedOk)
END_MESSAGE_MAP()


// RuZhuLv 消息处理程序
void RuZhuLv::setHotel(CHotel * p)
{
	h=p;
}
void RuZhuLv::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	
	double f;
	f=h->GetRegRate()*100;
	
	ruzhulv.Format("当前入住率为：%.2f%%",f);
	UpdateData(FALSE);
	//OnOK();
}
