// fee.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "fee.h"
#include "CHotel.h"


// fee 对话框

IMPLEMENT_DYNAMIC(fee, CDialog)

fee::fee(CWnd* pParent /*=NULL*/)
	: CDialog(fee::IDD, pParent)
//	, m_qingdan(_T(""))
, m_price(_T(""))
{

}

fee::~fee()
{
}

void fee::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//DDX_Text(pDX, IDC_EDIT1, m_qingdan);


	DDX_Text(pDX, IDC_EDIT1, m_price);
}


BEGIN_MESSAGE_MAP(fee, CDialog)
//	ON_EN_CHANGE(IDC_EDIT1, &fee::OnEnChangeEdit1)
END_MESSAGE_MAP()


// fee 消息处理程序
BOOL fee::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化

	int pp,pb,ph,pz;
	pp=h->Getputong();
	pb=h->Getstdprice();
	ph=h->GetGraprice();
	pz=h->GetExGrprice();
	m_price.Format("普通间：%d元/天\r\n标准间：%d元/天\r\n豪华间：%d元/天\r\n总统套房：%d元/天\r\n食品累消费：10元/份\r\n饮料类：15元/份\r\n保健类：50元\次",pp,pb,ph,pz);
	UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}




void fee::setHotel(CHotel * p)
{
	h=p;
}
