// fee.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "fee.h"
#include "CHotel.h"


// fee �Ի���

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


// fee ��Ϣ�������
BOOL fee::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	int pp,pb,ph,pz;
	pp=h->Getputong();
	pb=h->Getstdprice();
	ph=h->GetGraprice();
	pz=h->GetExGrprice();
	m_price.Format("��ͨ�䣺%dԪ/��\r\n��׼�䣺%dԪ/��\r\n�����䣺%dԪ/��\r\n��ͳ�׷���%dԪ/��\r\nʳƷ�����ѣ�10Ԫ/��\r\n�����ࣺ15Ԫ/��\r\n�����ࣺ50Ԫ\��",pp,pb,ph,pz);
	UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}




void fee::setHotel(CHotel * p)
{
	h=p;
}
