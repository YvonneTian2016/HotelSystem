// FindRoom.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "FindRoom.h"
#include "CHotel.h"

// FindRoom 对话框

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


// FindRoom 消息处理程序
void FindRoom::setHotel(CHotel * p)
{
	Fsithotel=p;
}
void FindRoom::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
     string sm_room;
	 sm_room=string(m_room.GetBuffer());
	 if((Fsithotel->GetRoom(Fsithotel->xb_SearchBylivID(sm_room)))->GetEmptyRoom())
		 MessageBox("此房间没有住人，请输入正确的房号");
	 else{
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
	
	 
	 int i=Fsithotel->GetRoom(Fsithotel->xb_SearchBylivID(sm_room))->Getprebook();
	 CString tip;
	 if(i==1)
		 tip="此房间为预约状态：";
	 else
		 tip="";
	
	 room_result.Format("%s\r\n姓名：%s \r\n性别：%s\r\n年龄：%d\r\n工作地点：%s\r\n身份证号：%s\r\n居住城市：%s\r\n是否是vip:%s "
		 ,tip,CusName.c_str(),CusSex.c_str(),Cusage,Cuswp.c_str(),CusId.c_str(),CusCit.c_str(),CusVip.c_str());
	
    }
	 UpdateData(FALSE);
	 

	 //sm_room为传入函数的string型房间号

//	OnOK();
}
