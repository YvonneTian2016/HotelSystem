// dialogDlg.cpp : ʵ���ļ�
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


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���
COleDateTime time2;

   CString Current_Time1;
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CdialogDlg �Ի���




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


// CdialogDlg ��Ϣ�������

BOOL CdialogDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	
	
	
	
	
	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	SysLogin Login1;    
	Login1.DoModal();
	
	time2= COleDateTime::GetCurrentTime();
	SetTimer(1,1000,NULL);
	Current_Time.AddString(Current_Time1); 
	UpdateData(FALSE);
	
	return TRUE;  // ���ǽ�����a���õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CdialogDlg::OnPaint()
{
	
	CPaintDC dc(this); 
	CRect   rect1;   
	GetClientRect(&rect1);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_MAINBACK);   
	//IDB_BITMAP�����Լ���ͼ��Ӧ��ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect1.Width(),rect1.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
     
	/*if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������



		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);

	}
	else
	{
		CDialog::OnPaint();
	}*/
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CdialogDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CdialogDlg::OnBnClickedCheckbutton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
  ccheckin dlg;
  dlg.setHotel(&sit);  //��CHotel���󴫸�ccheckin,�������á�����
  dlg.DoModal();

}

void CdialogDlg::OnBnClickedReverse()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	reverse_check dlg;
	dlg.DoModal();
}

void CdialogDlg::OnBnClickedFee()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	//CString a;
	//a="111";
	fee dlg;
   int i=300,j=600;
	dlg.m_qingdan.Format(_T("\n���ѣ�%d �������ѣ�%d"),i,j);

	UpdateData(FALSE);
	//dlg.m_qingdan.AddString(_T("�����嵥%s",a));
//    dlg.m_qingdan="�����嵥";
	dlg.DoModal();
}

void CdialogDlg::OnBnClickedCancle()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	deleteroom dlg;
    dlg.setHotel(&sit);
	dlg.DoModal();
}

void CdialogDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void CdialogDlg::OnRuZhuLv()
{
	// TODO: �ڴ���������������
	RuZhuLv dlg;

	dlg.DoModal();

}

void CdialogDlg::OnYingYeE()
{
	// TODO: �ڴ���������������
	YingYeE dlg;
	dlg.DoModal();
}

void CdialogDlg::OnFindName()
{

	// TODO: �ڴ�������������
	FindName dlg;
	dlg.setHotel(&sit);
	dlg.DoModal();
}

void CdialogDlg::OnFindRoom()
{
	// TODO: �ڴ���������������
	FindRoom dlg;
	dlg.setHotel(&sit);
	dlg.DoModal();
}

void CdialogDlg::OnService()
{
	// TODO: �ڴ���������������

	Service dlg;
	dlg.DoModal();
}

void CdialogDlg::OnBnClickedMap()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	RoomMap dlg;
	dlg.DoModal();
}
