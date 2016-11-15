// checkin.cpp : 实现文件
//
#include "stdafx.h"
#include "CHotel.h"
#include "dialog.h"
#include "checkin.h"
using namespace  std;

// ccheckin 对话框

//CString vip1;
extern COleDateTime time2;

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


// ccheckin 消息处理程序

void ccheckin::OnBnClickedOk()
{

	// TODO: 在此添加控件通知处理程序代码
    CString room_num;
	vip=0;
	
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
     
	
   
   
    
 // WCHAR name[100],sex[10],city[100],workplace[100];
//	int age,id;
    bool vip2;
	//GetDlgItem(IDC_NAME)->GetWindowText(name,100);
	//GetDlgItem(IDC_SEX)->GetWindowText(sex,10);
	//GetDlgItem(IDC_CITY)->GetWindowText(city,100);
	//GetDlgItem(IDC_WORKPLACE)->GetWindowText(workplace,100);
	//age=GetDlgItemInt(IDC_AGE);
	//id=GetDlgItemInt(IDC_ID);
   if(vip)
	   vip2=true;
   else
	   vip2=false;
	 
	//MessageBox(workplace);
	UpdateData(TRUE);
    //sit.FinalCheckOut(name,age,workplace,sex,city,vip2);
	//***************************************************//将CString变量型转化为string型
    //CString 转化为string,不需要用char * 作为中介进行转换,Edited by ZZQ~~~,2010/06/09
// 	char* chr1=new char[(name.GetLength())+1];  
// 	char* chr2=new char[(workplace.GetLength()+1)];
// 	char* chr3=new char[(id.GetLength()+1)];
// 	char* chr4=new char[(sex.GetLength()+1)];
// 	char* chr5=new char[(city.GetLength()+1)];
// 	char* chr6=new char[(room_num.GetLength()+1)];

// 	WideCharToMultiByte(CP_ACP,0,name.GetBuffer(),-1,chr1,name.GetLength(),NULL,NULL);
//     chr1[name.GetLength()]=0;
// 	WideCharToMultiByte(CP_ACP,0,workplace.GetBuffer(),-1,chr2,workplace.GetLength(),NULL,NULL);
//     chr2[workplace.GetLength()]=0;
// 	WideCharToMultiByte(CP_ACP,0,id.GetBuffer(),-1,chr3,id.GetLength(),NULL,NULL);
//     chr3[id.GetLength()]=0;
// 	WideCharToMultiByte(CP_ACP,0,sex.GetBuffer(),-1,chr4,sex.GetLength(),NULL,NULL);
//     chr4[sex.GetLength()]=0;
// 	WideCharToMultiByte(CP_ACP,0,city.GetBuffer(),-1,chr5,city.GetLength(),NULL,NULL);
//     chr5[city.GetLength()]=0;
// 	WideCharToMultiByte(CP_ACP,0,room_num.GetBuffer(),-1,chr6,room_num.GetLength(),NULL,NULL);
//     chr6[room_num.GetLength()]=0;

 	string sname=string(name.GetBuffer());
    string swork=string(workplace.GetBuffer());
    string sid=string(id.GetBuffer());
    string ssex=string(sex.GetBuffer());
    string scity=string(city.GetBuffer());
    string sroom=string(room_num.GetBuffer());
    int cindays=time2.GetDayOfYear();
    int cinhour=time2.GetHour();
     sithotel->FinalCheckIn(sname,age,swork,sid,ssex,scity,vip2,sroom,cindays,cinhour);
// 	//sithotel->FinalCheckIn("李",18,"工作","23","男","ab",true,"201");

	//SetDlgItemInt(IDC_ID,age);
	//SetDlgItemTextW(IDC_CITY,name);
   

	OnOK();
}

void ccheckin::OnBnClickedVip()
{
	// TODO: 在此添加控件通知处理程序代码
	vip=1;
}
void ccheckin::setHotel(CHotel * p)
{
    sithotel=p;
}