// YingYeE.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "YingYeE.h"
#include "CHotel.h"


// YingYeE 对话框

IMPLEMENT_DYNAMIC(YingYeE, CDialog)

YingYeE::YingYeE(CWnd* pParent /*=NULL*/)
	: CDialog(YingYeE::IDD, pParent)
	, m_yye(_T(""))
{

}

YingYeE::~YingYeE()
{
}

void YingYeE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_yye);
}

BEGIN_MESSAGE_MAP(YingYeE, CDialog)
	ON_BN_CLICKED(IDOK, &YingYeE::OnBnClickedOk)
END_MESSAGE_MAP()


// YingYeE 消息处理程序
void YingYeE::setHotel(CHotel * p)
{
	h=p;
}

void YingYeE::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	double tt;
	tt=h->Getttopric();
	m_yye.Format("当前营业额为：%.2f元",tt);
	UpdateData(FALSE);
	//OnOK();
}
