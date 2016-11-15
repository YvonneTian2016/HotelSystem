// welcome1.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "welcome1.h"


// welcome1 对话框

IMPLEMENT_DYNAMIC(welcome1, CDialog)

welcome1::welcome1(CWnd* pParent /*=NULL*/)
	: CDialog(welcome1::IDD, pParent)
	, welcome(_T(""))
{

}

//welcome1::~welcome1()
//{
//}

void welcome1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_TIP1, welcome);
}


BEGIN_MESSAGE_MAP(welcome1, CDialog)

	ON_WM_PAINT()
END_MESSAGE_MAP()


void welcome1::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_TIP1BACK);   
	//IDB_BITMAP是你自己的图对应的ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialog::OnPaint()
}
