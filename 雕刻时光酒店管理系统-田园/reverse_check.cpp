// reverse_check.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "reverse_check.h"
#include "CHotel.h"

extern COleDateTime time2;

// reverse_check 对话框


IMPLEMENT_DYNAMIC(reverse_check, CDialog)

reverse_check::reverse_check(CWnd* pParent /*=NULL*/)
	: CDialog(reverse_check::IDD, pParent)
	, y_name(_T(""))
	, y_age(0)
	, y_city(_T(""))
	, y_id(_T(""))
	, y_sex(_T(""))
	, y_wp(_T(""))
{

}

reverse_check::~reverse_check()
{
}

void reverse_check::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, y_name);
	//DDX_Control(pDX, IDC_EDIT1, y_sex);
	DDX_Text(pDX, IDC_EDIT3, y_age);
	DDX_Text(pDX, IDC_EDIT6, y_city);
	DDX_Text(pDX, IDC_EDIT5, y_id);
	//	DDX_Control(pDX, IDC_EDIT4, y_wp);
	DDX_Control(pDX, IDC_COMBO1, y_list1);
	DDX_Control(pDX, IDC_COMBO2, y_list2);
	DDX_Control(pDX, IDC_COMBO3, y_list3);
	DDX_Control(pDX, IDC_COMBO4, y_list4);
	DDX_Text(pDX, IDC_EDIT1, y_sex);
	DDX_Text(pDX, IDC_EDIT4, y_wp);
}


BEGIN_MESSAGE_MAP(reverse_check, CDialog)
	ON_BN_CLICKED(IDOK, &reverse_check::OnBnClickedOk)
END_MESSAGE_MAP()


// reverse_check 消息处理程序
void reverse_check::setHotel(CHotel * p)
{
	sithotel=p;
}

void reverse_check::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString room_num;


	int p,b,h,z;

	p=y_list1.GetCurSel();
	b=y_list2.GetCurSel();
	h=y_list3.GetCurSel();
	z=y_list4.GetCurSel();

	if(p>=0)
	{y_list1.GetLBText(p,room_num);}
	else if(b>=0)
	{y_list2.GetLBText(b,room_num);}
	else if(h>=0)
	{y_list3.GetLBText(h,room_num);}
	else if(z>=0)
	{y_list4.GetLBText(z,room_num);}





	
	UpdateData(TRUE);
	

	string sname=string(y_name.GetBuffer());
	string swork=string(y_wp.GetBuffer());
	string sid=string(y_id.GetBuffer());
	string ssex=string(y_sex.GetBuffer());
	string scity=string(y_city.GetBuffer());
	string sroom=string(room_num.GetBuffer());
	int cindays=time2.GetDayOfYear();
	int cinhour=time2.GetHour();
 
    bool vip=true;

	
	int num=sithotel->JudpreTobook(cinhour,cindays,sroom);
	if(num==0)
	
		MessageBox("此房间无效！请重新选择房间");
	else if (num==1)
	{MessageBox("此房间无人！可以预约");
	sithotel->JudSucpreBook(sname,y_age,swork,sid,ssex,scity,vip,cinhour,cindays,sroom);
	sithotel->GetRoom(sithotel->xb_SearchBylivID(sroom))->SetEmptyRoom(1);
	OnOK();
	}
    else if(num==2)
	{ MessageBox("此房间预约已经无效！可以预约");
		sithotel->JudSucpreBook(sname,y_age,swork,sid,ssex,scity,vip,cinhour,cindays,sroom);
		OnOK();
	}

	
}
