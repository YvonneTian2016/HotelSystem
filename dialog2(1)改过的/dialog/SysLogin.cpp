// SysLogin.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "SysLogin.h"
#include "welcome1.h"


// SysLogin 对话框

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


// SysLogin 消息处理程序

//void SysLogin::OnEnChangeEdit1()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
//	// 发送该通知，除非重写 CDialog::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//
//	// TODO:  在此添加控件通知处理程序代码
//}

void SysLogin::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(TRUE);//将界面中的数据存入类成员变量


	OnOK();
    if(m_username=="SIT"&&m_usercode=="80211")
	{
		welcome1 dlg;
		dlg.welcome="欢迎光临雕刻时光酒店，您已登陆成功！";
		dlg.DoModal();
	}
	else
	{
		welcome1 dlg;
		dlg.welcome="对不起，您的用户名或密码有误，登陆失败！";
    	dlg.DoModal();
		SysLogin Login1;    
		Login1.DoModal();
	}


}

BOOL SysLogin::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化

	m_username = "SIT";
    m_usercode = "80211";

	this->UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
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
	//IDB_BITMAP是你自己的图对应的ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   

	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialog::OnPaint()
}
