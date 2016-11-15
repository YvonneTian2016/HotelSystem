// RoomPrice.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "RoomPrice.h"
#include "CHotel.h"


// RoomPrice �Ի���

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


// RoomPrice ��Ϣ�������
void RoomPrice::setHotel(CHotel * p){
	roomprice=p;
}

void RoomPrice::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
     UpdateData(TRUE);
	// int p,b,h,z;
	 roomprice->Setputong(p_putong);
	 roomprice->SetExGrprice(p_zttf);
     roomprice->SetGraprice(p_hh);
     roomprice->Setstdprice(p_biaozhun);
	 roomprice->setprice();

	OnOK();
}
