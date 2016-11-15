// RoomPrice.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "RoomPrice.h"
#include "CHotel.h"


// RoomPrice 对话框

IMPLEMENT_DYNAMIC(RoomPrice, CDialog)

RoomPrice::RoomPrice(CWnd* pParent /*=NULL*/)
	: CDialog(RoomPrice::IDD, pParent)
	, p_putong(0)
	, p_biaozhun(0)
	, p_hh(0)
	, p_zttf(0)
{

}

RoomPrice::~RoomPrice()
{
}

void RoomPrice::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, p_putong);
	DDX_Text(pDX, IDC_EDIT2, p_biaozhun);
	DDX_Text(pDX, IDC_EDIT3, p_hh);
	DDX_Text(pDX, IDC_EDIT4, p_zttf);
}


BEGIN_MESSAGE_MAP(RoomPrice, CDialog)
	ON_BN_CLICKED(IDOK, &RoomPrice::OnBnClickedOk)
END_MESSAGE_MAP()


// RoomPrice 消息处理程序
void RoomPrice::setHotel(CHotel * p){
	roomprice=p;
}

void RoomPrice::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
     UpdateData(TRUE);
	// int p,b,h,z;
	 roomprice->Setputong(p_putong);
	 roomprice->SetExGrprice(p_zttf);
     roomprice->SetGraprice(p_hh);
     roomprice->Setstdprice(p_biaozhun);
	 roomprice->setprice();

	OnOK();
}
