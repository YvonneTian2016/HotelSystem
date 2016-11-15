// Service.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "Service.h"
#include "CHotel.h"

int food=0,water=0,heath=0;
// Service 对话框

IMPLEMENT_DYNAMIC(Service, CDialog)

Service::Service(CWnd* pParent /*=NULL*/)
	: CDialog(Service::IDD, pParent)
	, ser_room(_T(""))
{

}

Service::~Service()
{
}

void Service::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ser_room);
}


BEGIN_MESSAGE_MAP(Service, CDialog)
	ON_BN_CLICKED(IDC_CHECK1, &Service::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK2, &Service::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &Service::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK4, &Service::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_CHECK5, &Service::OnBnClickedCheck5)
	ON_BN_CLICKED(IDC_CHECK6, &Service::OnBnClickedCheck6)
	ON_BN_CLICKED(IDC_CHECK7, &Service::OnBnClickedCheck7)
	ON_BN_CLICKED(IDC_CHECK8, &Service::OnBnClickedCheck8)
	ON_BN_CLICKED(IDC_CHECK9, &Service::OnBnClickedCheck9)
	ON_BN_CLICKED(IDC_CHECK10, &Service::OnBnClickedCheck10)
	ON_BN_CLICKED(IDOK, &Service::OnBnClickedOk)
END_MESSAGE_MAP()


// Service 消息处理程序

void Service::OnBnClickedCheck1()
{
	// TODO: 在此添加控件通知处理程序代码
	++food;

}

void Service::OnBnClickedCheck2()
{
	// TODO: 在此添加控件通知处理程序代码
	++food;
}

void Service::OnBnClickedCheck3()
{
	// TODO: 在此添加控件通知处理程序代码
	++food;
}

void Service::OnBnClickedCheck4()
{
	// TODO: 在此添加控件通知处理程序代码
	++food;
}

void Service::OnBnClickedCheck5()
{
	// TODO: 在此添加控件通知处理程序代码
	++water;
}

void Service::OnBnClickedCheck6()
{
	// TODO: 在此添加控件通知处理程序代码
	++water;
}

void Service::OnBnClickedCheck7()
{
	// TODO: 在此添加控件通知处理程序代码
	++water;
}

void Service::OnBnClickedCheck8()
{
   ++water;
	// TODO: 在此添加控件通知处理程序代码
}

void Service::OnBnClickedCheck9()
{
	// TODO: 在此添加控件通知处理程序代码
	++heath;
}

void Service::OnBnClickedCheck10()
{
	// TODO: 在此添加控件通知处理程序代码
	++heath;
}
void Service::sethotel(CHotel *p){
	service=p;
}
void Service::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
   
   UpdateData(TRUE);
    
  string room=string(ser_room.GetBuffer());
  service->GetRoom(service->xb_SearchBylivID(room))->seta(food);
  service->GetRoom(service->xb_SearchBylivID(room))->setb(water);
  service->GetRoom(service->xb_SearchBylivID(room))->setc(heath);


	OnOK();
}
