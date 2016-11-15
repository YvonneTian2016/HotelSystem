// SysLogin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "SysLogin.h"
#include "welcome1.h"


// SysLogin �Ի���

IMPLEMENT_DYNAMIC(SysLogin, CDialog)

SysLogin::SysLogin(CWnd* pParent /*=NULL*/)
	: CDialog(SysLogin::IDD, pParent)
	, m_username(_T(""))
	, m_usercode(_T(""))
{

}

SysLogin::~SysLogin()
{
}

void SysLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_username);
	DDX_Text(pDX, IDC_EDIT2, m_usercode);
}


BEGIN_MESSAGE_MAP(SysLogin, CDialog)
//	ON_EN_CHANGE(IDC_EDIT1, &SysLogin::OnEnChangeEdit1)
ON_BN_CLICKED(IDOK, &SysLogin::OnBnClickedOk)
ON_WM_PAINT()
END_MESSAGE_MAP()


// SysLogin ��Ϣ�������

//void SysLogin::OnEnChangeEdit1()
//{
//	// TODO:  ����ÿؼ��� RICHEDIT �ؼ�������������
//	// ���͸�֪ͨ��������д CDialog::OnInitDialog()
//	// ���������� CRichEditCtrl().SetEventMask()��
//	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
//
//	// TODO:  �ڴ���ӿؼ�֪ͨ����������
//}

void SysLogin::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(TRUE);//�������е����ݴ������Ա����


	OnOK();
    if(m_username=="SIT"&&m_usercode=="80211")
	{
		welcome1 dlg;
		dlg.welcome="��ӭ���ٵ��ʱ��Ƶ꣬���ѵ�½�ɹ���";
		dlg.DoModal();
	}
	else
	{
		welcome1 dlg;
		dlg.welcome="�Բ��������û������������󣬵�½ʧ�ܣ�";
    	dlg.DoModal();
		SysLogin Login1;    
		Login1.DoModal();
	}


}

BOOL SysLogin::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	m_username = "SIT";
    m_usercode = "80211";

	this->UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

void SysLogin::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_SYSLOGIN1);   
	//IDB_BITMAP�����Լ���ͼ��Ӧ��ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   

	// TODO: �ڴ˴������Ϣ����������
	// ��Ϊ��ͼ��Ϣ���� CDialog::OnPaint()
}
