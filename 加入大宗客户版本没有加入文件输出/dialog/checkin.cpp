// checkin.cpp : ʵ���ļ�
//
#include "stdafx.h"
#include "CHotel.h"
#include "dialog.h"
#include "checkin.h"
using namespace  std;

// ccheckin �Ի���

//CString vip1;
extern COleDateTime time2;
   int vip=0;

IMPLEMENT_DYNAMIC(ccheckin, CDialog)

ccheckin::ccheckin(CWnd* pParent /*=NULL*/)
	: CDialog(ccheckin::IDD, pParent)
	, name(_T(""))
	, sex(_T(""))
	, age(0)
	, id(_T(""))
	, workplace(_T(""))
	, city(_T(""))
	 
{

}

ccheckin::~ccheckin()
{
}

void ccheckin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMROOM1, PRoomCode);
	DDX_Control(pDX, IDC_COMROOM2, BRoomCode);
	DDX_Control(pDX, IDC_COMROOM3, HRoomCode);
	DDX_Control(pDX, IDC_COMROOM4, ZRoomCode);
	DDX_Text(pDX, IDC_NAME, name);
	DDX_Text(pDX, IDC_SEX, sex);
	DDX_Text(pDX, IDC_AGE, age);
	DDX_Text(pDX, IDC_ID, id);
	DDX_Text(pDX, IDC_WORKPLACE, workplace);
	DDX_Text(pDX, IDC_CITY, city);
}


BEGIN_MESSAGE_MAP(ccheckin, CDialog)
	ON_BN_CLICKED(IDOK, &ccheckin::OnBnClickedOk)
	ON_BN_CLICKED(IDC_VIP, &ccheckin::OnBnClickedVip)
END_MESSAGE_MAP()


// ccheckin ��Ϣ�������

void ccheckin::OnBnClickedOk()
{

	// TODO: �ڴ���ӿؼ�֪ͨ����������
    CString room_num;
 
	
    int p,b,h,z;
	
	p=PRoomCode.GetCurSel();
	b=BRoomCode.GetCurSel();
	h=HRoomCode.GetCurSel();
	z=ZRoomCode.GetCurSel();
   
	if(p>=0)
	{PRoomCode.GetLBText(p,room_num);}
	else if(b>=0)
	{BRoomCode.GetLBText(b,room_num);}
	else if(h>=0)
	{HRoomCode.GetLBText(h,room_num);}
	else if(z>=0)
	{ZRoomCode.GetLBText(z,room_num);}
     
	
   

  
    UpdateData(TRUE);

 	string sname=string(name.GetBuffer());
    string swork=string(workplace.GetBuffer());
    string sid=string(id.GetBuffer());
    string ssex=string(sex.GetBuffer());
	string scity=string(city.GetBuffer());
    string sroom=string(room_num.GetBuffer());
 
	
	int cindays=time2.GetDayOfYear();
    int cinhour=time2.GetHour();


	
    string see;
	see=sithotel->GetRoom(sithotel->xb_SearchBylivID(sroom))->GetCustomer1()->GetName();
	MessageBox(see.c_str());




    int num=sithotel->JudbookToRegister(sname,cindays,cinhour,sroom);
    if (num==1)
    {   MessageBox("�ɹ�ת����ס״̬");
		sithotel->SucToRegi(cinhour,cindays,sroom);
    }
	else if(num==2){
           MessageBox("�������ڿ�ס���Ǽ���ס�ɹ�");
		    sithotel->FinalCheckIn(sname,age,swork,sid,ssex,scity,vip,sroom,cindays,cinhour);
	       OnOK();
	}
	else
	
		MessageBox("�˷�����Ч��������ѡ�񷿼�");
	


}

void ccheckin::OnBnClickedVip()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	vip=1;
}
void ccheckin::setHotel(CHotel * p)
{
    sithotel=p;
}