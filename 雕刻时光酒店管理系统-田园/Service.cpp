// Service.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "Service.h"
#include "CHotel.h"

int food=0,water=0,heath=0;
// Service �Ի���

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


// Service ��Ϣ�������

void Service::OnBnClickedCheck1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++food;

}

void Service::OnBnClickedCheck2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++food;
}

void Service::OnBnClickedCheck3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++food;
}

void Service::OnBnClickedCheck4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++food;
}

void Service::OnBnClickedCheck5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++water;
}

void Service::OnBnClickedCheck6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++water;
}

void Service::OnBnClickedCheck7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++water;
}

void Service::OnBnClickedCheck8()
{
   ++water;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void Service::OnBnClickedCheck9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++heath;
}

void Service::OnBnClickedCheck10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	++heath;
}
void Service::sethotel(CHotel *p){
	service=p;
}
void Service::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
   
   UpdateData(TRUE);
    
  string room=string(ser_room.GetBuffer());
  service->GetRoom(service->xb_SearchBylivID(room))->seta(food);
  service->GetRoom(service->xb_SearchBylivID(room))->setb(water);
  service->GetRoom(service->xb_SearchBylivID(room))->setc(heath);


	OnOK();
}
