// RuZhuLv.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "RuZhuLv.h"
#include "CHotel.h"

// RuZhuLv �Ի���

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


// RuZhuLv ��Ϣ�������
void RuZhuLv::setHotel(CHotel * p)
{
	h=p;
}
void RuZhuLv::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	double f;
	f=h->GetRegRate()*100;
	
	ruzhulv.Format("��ǰ��ס��Ϊ��%.2f%%",f);
	UpdateData(FALSE);
	//OnOK();
}
