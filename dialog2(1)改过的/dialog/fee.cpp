// fee.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "fee.h"


// fee 对话框

IMPLEMENT_DYNAMIC(fee, CDialog)

fee::fee(CWnd* pParent /*=NULL*/)
	: CDialog(fee::IDD, pParent)
	, m_qingdan(_T(""))
{

}

fee::~fee()
{
}

void fee::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_qingdan);
 

}


BEGIN_MESSAGE_MAP(fee, CDialog)
//	ON_EN_CHANGE(IDC_EDIT1, &fee::OnEnChangeEdit1)
END_MESSAGE_MAP()


// fee 消息处理程序

/*void fee::OnEnChangeEdit1()
{

   int i=300,j=600;
	m_qingdan.Format(_T("\n房费：%d 其他消费：%d"),i,j);

	UpdateData(FALSE);

	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}*/
void fee::setHotel(CHotel * p)
{
	h=p;
}