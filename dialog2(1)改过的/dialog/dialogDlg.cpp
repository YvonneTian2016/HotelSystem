// dialogDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "dialogDlg.h"
#include "checkin.h"
#include "reverse_check.h"
#include "fee.h"
#include "deleteroom.h"
#include "RuZhuLv.h"
#include "YingYeE.h"
#include "FindName.h"
#include "FindRoom.h"
#include "Service.h"
#include "RoomMap.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框
COleDateTime time2;

   CString Current_Time1;
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickeReverseButton();
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//ON_BN_CLICKED(IDC_BUTTON2, &CAboutDlg::OnBnClickeReverseButton)
END_MESSAGE_MAP()


// CdialogDlg 对话框




CdialogDlg::CdialogDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CdialogDlg::IDD, pParent)
	//Current_Time3(_T(""))
{


	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CdialogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);



	//	DDX_Control(pDX, IDC_LIST1, Current_Time);
	
//	DDX_Control(pDX, IDC_EDIT2, Current_Time);
	DDX_Control(pDX, IDC_LIST1, Current_Time);
}

BEGIN_MESSAGE_MAP(CdialogDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_CHECKBUTTON, &CdialogDlg::OnBnClickedCheckbutton)
	ON_BN_CLICKED(IDC_REVERSE, &CdialogDlg::OnBnClickedReverse)
	ON_BN_CLICKED(IDC_FEE, &CdialogDlg::OnBnClickedFee)
	ON_BN_CLICKED(IDC_CANCLE, &CdialogDlg::OnBnClickedCancle)
	ON_WM_TIMER()
//	ON_BN_CLICKED(IDC_BUTTON1, &CdialogDlg::OnBnClickedButton1)
ON_COMMAND(ID_HAHA_HEIHEI, &CdialogDlg::OnRuZhuLv)
ON_COMMAND(ID_32772, &CdialogDlg::OnYingYeE)
ON_COMMAND(ID_32774, &CdialogDlg::OnFindName)
ON_COMMAND(ID_32775, &CdialogDlg::OnFindRoom)
ON_COMMAND(ID_32776, &CdialogDlg::OnService)
ON_BN_CLICKED(IDC_BUTTON1, &CdialogDlg::OnBnClickedMap)
END_MESSAGE_MAP()


// CdialogDlg 消息处理程序

BOOL CdialogDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	
	
	
	
	
	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	SysLogin Login1;    
	Login1.DoModal();
	
	time2= COleDateTime::GetCurrentTime();
	SetTimer(1,1000,NULL);
	Current_Time.AddString(Current_Time1); 
	UpdateData(FALSE);
	
	return TRUE;  // 除非将焦点a设置到控件，否则返回 TRUE
}


void CdialogDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CdialogDlg::OnPaint()
{
	
	CPaintDC dc(this); 
	CRect   rect1;   
	GetClientRect(&rect1);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_MAINBACK);   
	//IDB_BITMAP是你自己的图对应的ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect1.Width(),rect1.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
     
	/*if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文



		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);

	}
	else
	{
		CDialog::OnPaint();
	}*/
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CdialogDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CdialogDlg::OnBnClickedCheckbutton()
{
	// TODO: 在此添加控件通知处理程序代码
  ccheckin dlg;
  dlg.setHotel(&sit);  //将CHotel对象传给ccheckin,供它调用。。。
  dlg.DoModal();

}

void CdialogDlg::OnBnClickedReverse()
{
	// TODO: 在此添加控件通知处理程序代码
	reverse_check dlg;
	dlg.DoModal();
}

void CdialogDlg::OnBnClickedFee()
{
	// TODO: 在此添加控件通知处理程序代码

	//CString a;
	//a="111";
	fee dlg;
   int i=300,j=600;
	dlg.m_qingdan.Format(_T("\n房费：%d 其他消费：%d"),i,j);

	UpdateData(FALSE);
	//dlg.m_qingdan.AddString(_T("消费清单%s",a));
//    dlg.m_qingdan="消费清单";
	dlg.DoModal();
}

void CdialogDlg::OnBnClickedCancle()
{
	// TODO: 在此添加控件通知处理程序代码
	deleteroom dlg;
    dlg.setHotel(&sit);
	dlg.DoModal();
}

void CdialogDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
     COleDateTimeSpan time1(0,0,20,0);
	 //
	 
	 time2.operator +=(time1);
     Current_Time1=time2.Format(_T("%Y-%m-%d %H:%M:%S"));

   //   MessageBox(Current_Time1);
     // a=Current_Time1.GetDay()
	 UpdateData(FALSE);
	 //CDialog::OnTimer(nIDEvent);
}

void CdialogDlg::OnBnClickedButton1()
{
	//Current_Time.AddString(_T("%S%S",)); 
	// TODO: 在此添加控件通知处理程序代码
}

void CdialogDlg::OnRuZhuLv()
{
	// TODO: 在此添加命令处理程序代码
	RuZhuLv dlg;

	dlg.DoModal();

}

void CdialogDlg::OnYingYeE()
{
	// TODO: 在此添加命令处理程序代码
	YingYeE dlg;
	dlg.DoModal();
}

void CdialogDlg::OnFindName()
{

	// TODO: 在此添加命令处理程序代
	FindName dlg;
	dlg.setHotel(&sit);
	dlg.DoModal();
}

void CdialogDlg::OnFindRoom()
{
	// TODO: 在此添加命令处理程序代码
	FindRoom dlg;
	dlg.setHotel(&sit);
	dlg.DoModal();
}

void CdialogDlg::OnService()
{
	// TODO: 在此添加命令处理程序代码

	Service dlg;
	dlg.DoModal();
}

void CdialogDlg::OnBnClickedMap()
{
	// TODO: 在此添加控件通知处理程序代码
	RoomMap dlg;
	dlg.DoModal();
}
