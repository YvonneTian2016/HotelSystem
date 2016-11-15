// FindRoom.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "FindRoom.h"
#include "CHotel.h"

// FindRoom �Ի���

IMPLEMENT_DYNAMIC(FindRoom, CDialog)

FindRoom::FindRoom(CWnd* pParent /*=NULL*/)
	: CDialog(FindRoom::IDD, pParent)
	, m_room(_T(""))
	, room_result(_T(""))
{

}

FindRoom::~FindRoom()
{
}

void FindRoom::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_room);
	DDX_Text(pDX, IDC_EDIT3, room_result);
}


BEGIN_MESSAGE_MAP(FindRoom, CDialog)
	ON_BN_CLICKED(IDOK, &FindRoom::OnBnClickedOk)
END_MESSAGE_MAP()


// FindRoom ��Ϣ�������
void FindRoom::setHotel(CHotel * p)
{
	Fsithotel=p;
}
void FindRoom::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
     string sm_room;
	 sm_room=string(m_room.GetBuffer());
	 string CusName;
	 CusName=Fsithotel->ReCusNamSeByRoId(sm_room);
     string CusSex;
	 CusSex=Fsithotel->ReCusSexSeByRoId(sm_room);
	 int Cusage;
	 Cusage=Fsithotel->ReCusAgeSeByRoId(sm_room);
     string Cuswp;
     Cuswp=Fsithotel->ReCusWpSeByRoId(sm_room);
     string CusId;
	  CusId= Fsithotel->ReCusIdSeByRoId(sm_room);
	 string CusCit;
     CusCit=Fsithotel->ReCusCitSeByRoId(sm_room);
     string CusVip;
	 CusVip=Fsithotel->ReCusVipSeByRoId(sm_room);
	 room_result.Format("������%s \r\n�Ա�%s\r\n���䣺%d\r\n�����ص㣺%s\r\n���֤�ţ�%s\r\n��ס���У�%s\r\n�Ƿ���vip:%s "
		 ,CusName.c_str(),CusSex.c_str(),Cusage,Cuswp.c_str(),CusId.c_str(),CusCit.c_str(),CusVip.c_str());
	

	 UpdateData(FALSE);

	 //sm_roomΪ���뺯����string�ͷ����

//	OnOK();
}
