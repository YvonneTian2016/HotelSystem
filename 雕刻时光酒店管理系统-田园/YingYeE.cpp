// YingYeE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "YingYeE.h"
#include "CHotel.h"


// YingYeE �Ի���

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


// YingYeE ��Ϣ�������
void YingYeE::setHotel(CHotel * p)
{
	h=p;
}

void YingYeE::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	double tt;
	tt=h->Getttopric();
	m_yye.Format("��ǰӪҵ��Ϊ��%.2fԪ",tt);
	UpdateData(FALSE);
	//OnOK();
}
