// deleteroom.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "deleteroom.h"
#include "CHotel.h"

extern COleDateTime time2;
// deleteroom �Ի���

IMPLEMENT_DYNAMIC(deleteroom, CDialog)

deleteroom::deleteroom(CWnd* pParent /*=NULL*/)
	: CDialog(deleteroom::IDD, pParent)
	, m_checkout(_T(""))
	, checkout_fee(_T(""))
{

}

deleteroom::~deleteroom()
{
}

void deleteroom::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_checkout);
	DDX_Text(pDX, IDC_EDIT2, checkout_fee);
}


BEGIN_MESSAGE_MAP(deleteroom, CDialog)
	ON_BN_CLICKED(IDOK, &deleteroom::OnBnClickedOk)
END_MESSAGE_MAP()


// deleteroom ��Ϣ�������
void deleteroom::setHotel(CHotel * p)
{
	Delesit=p;
}
void deleteroom::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������


	 UpdateData(TRUE);
     string roomid=string(m_checkout.GetBuffer());
	 bool vip2=Delesit->GetRoom(Delesit->xb_SearchBylivID(roomid))->GetCustomer1()->GetVip();
     int Coutdayth=time2.GetDayOfYear();
	 int Chour=time2.GetHour();
     Delesit->FinalCheckOut(roomid,Coutdayth,Chour);
	 double price;
	 price=(Delesit->GetRoom(Delesit->xb_SearchBylivID(roomid)))->GetTotalPrice(vip2);
	 int days;
	 days=(Delesit->GetRoom(Delesit->xb_SearchBylivID(roomid)))->GetLivingDays();
	

	 checkout_fee.Format("������ס������Ϊ��%d\r\n ���ƽ�%.2f",days,price);
		;
      
	 UpdateData(FALSE);
	//OnOK();
}
