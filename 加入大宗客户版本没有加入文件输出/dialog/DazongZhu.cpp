// DazongZhu.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "DazongZhu.h"
#include <cstdio>
#include <cstdlib>

#include "CHotel.h"
extern COleDateTime time2;



// DazongZhu �Ի���

//int room[22]={0};
int fangjianshu=0;


IMPLEMENT_DYNAMIC(DazongZhu, CDialog)

DazongZhu::DazongZhu(CWnd* pParent /*=NULL*/)
	: CDialog(DazongZhu::IDD, pParent)
	, name_dazong(_T(""))
{

}

DazongZhu::~DazongZhu()
{
}

void DazongZhu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name_dazong);
}


BEGIN_MESSAGE_MAP(DazongZhu, CDialog)
//	ON_BN_CLICKED(IDC_CHECK1, &DazongZhu::OnBnClickedCheck1)
ON_BN_CLICKED(IDC_CHECK17, &DazongZhu::OnBnClickedCheck17)
ON_BN_CLICKED(IDC_CHECK20, &DazongZhu::OnBnClickedCheck20)
ON_BN_CLICKED(IDC_CHECK21, &DazongZhu::OnBnClickedCheck21)
ON_BN_CLICKED(IDC_CHECK22, &DazongZhu::OnBnClickedCheck22)
ON_BN_CLICKED(IDC_CHECK23, &DazongZhu::OnBnClickedCheck23)
ON_BN_CLICKED(IDC_CHECK24, &DazongZhu::OnBnClickedCheck24)
ON_BN_CLICKED(IDC_CHECK15, &DazongZhu::OnBnClickedCheck15)
ON_BN_CLICKED(IDC_CHECK16, &DazongZhu::OnBnClickedCheck16)
ON_BN_CLICKED(IDC_CHECK18, &DazongZhu::OnBnClickedCheck18)
ON_BN_CLICKED(IDC_CHECK19, &DazongZhu::OnBnClickedCheck19)
ON_BN_CLICKED(IDC_CHECK11, &DazongZhu::OnBnClickedCheck11)
ON_BN_CLICKED(IDC_CHECK12, &DazongZhu::OnBnClickedCheck12)
ON_BN_CLICKED(IDC_CHECK13, &DazongZhu::OnBnClickedCheck13)
ON_BN_CLICKED(IDC_CHECK14, &DazongZhu::OnBnClickedCheck14)
ON_BN_CLICKED(IDC_CHECK1, &DazongZhu::OnBnClickedCheck1)
ON_BN_CLICKED(IDC_CHECK2, &DazongZhu::OnBnClickedCheck2)
ON_BN_CLICKED(IDC_CHECK3, &DazongZhu::OnBnClickedCheck3)
ON_BN_CLICKED(IDC_CHECK4, &DazongZhu::OnBnClickedCheck4)
ON_BN_CLICKED(IDC_CHECK5, &DazongZhu::OnBnClickedCheck5)
ON_BN_CLICKED(IDC_CHECK6, &DazongZhu::OnBnClickedCheck6)
ON_BN_CLICKED(IDC_CHECK7, &DazongZhu::OnBnClickedCheck7)
ON_BN_CLICKED(IDC_CHECK10, &DazongZhu::OnBnClickedCheck10)
ON_BN_CLICKED(IDC_BUTTON1, &DazongZhu::OnBnClickedButton1)
ON_BN_CLICKED(IDOK, &DazongZhu::OnBnClickedOk)
END_MESSAGE_MAP()


// DazongZhu ��Ϣ�������

//void DazongZhu::OnBnClickedCheck1()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//}


void DazongZhu::OnBnClickedCheck17()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
	
	string room=Daz->GetRoom(0)->GetRoomID();
    string sname=string(name_dazong.GetBuffer());
    int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
       Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	   fangjianshu++;
	 //  room[0]=1;
    }
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
    
}

void DazongZhu::OnBnClickedCheck20()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
    string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(1)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	   fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
	
}
void DazongZhu::OnBnClickedCheck21()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(2)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	     fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck22()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(3)->GetRoomID();
    string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	   fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck23()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(4)->GetRoomID();
    string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	    fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck24()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
    string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(5)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
       fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck15()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
     string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(6)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
     string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(7)->GetRoomID();
    
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck18()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(8)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck19()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(9)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(10)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	    fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck12()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(11)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	    fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(12)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	   fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(13)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	    fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(14)->GetRoomID();
      string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	    fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
     string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(15)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");

}

void DazongZhu::OnBnClickedCheck3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
    string sname=string(name_dazong.GetBuffer());
	string room=Daz->GetRoom(16)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(17)->GetRoomID();
    string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(18)->GetRoomID();
     string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
	    fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(19)->GetRoomID();
	 string sname=string(name_dazong.GetBuffer());

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();

	string room=Daz->GetRoom(20)->GetRoomID();
    string sname=string(name_dazong.GetBuffer());
	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}

void DazongZhu::OnBnClickedCheck10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int ddd,hhh;
	ddd=time2.GetDayOfYear();
	hhh=time2.GetHour();
	string sname=string(name_dazong.GetBuffer());

	string room=Daz->GetRoom(21)->GetRoomID();

	int num=Daz->JudbookToRegister(sname,ddd,hhh,room);
	if (num==2)
	{
		Daz->FinalCheckIn(sname,0,"","","","�Ŷ�",1,room,ddd,hhh);
		fangjianshu++;
		MessageBox(room.c_str());
	}
	else
		MessageBox("sorry,�˷�����ס�˻���Ԥ��");
}
void  DazongZhu::Sethotel(CHotel* p){
     Daz=p;
}



void DazongZhu::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������


	UpdateData(TRUE);

}

void DazongZhu::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
    CString str;
	str.Format("��ӭ���٣����Ѿ�����%d�ͷ�",fangjianshu);
	
	MessageBox(str);
	fangjianshu=0;
	OnOK();
}
