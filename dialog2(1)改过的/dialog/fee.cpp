// fee.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "fee.h"


// fee �Ի���

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


// fee ��Ϣ�������

/*void fee::OnEnChangeEdit1()
{

   int i=300,j=600;
	m_qingdan.Format(_T("\n���ѣ�%d �������ѣ�%d"),i,j);

	UpdateData(FALSE);

	// TODO:  ����ÿؼ��� RICHEDIT �ؼ�������������
	// ���͸�֪ͨ��������д CDialog::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}*/
void fee::setHotel(CHotel * p)
{
	h=p;
}