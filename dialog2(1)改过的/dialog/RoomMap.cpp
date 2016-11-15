// RoomMap.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "RoomMap.h"

// RoomMap 对话框
CBitmap Bmp1,Bmp2;
 


IMPLEMENT_DYNAMIC(RoomMap, CDialog)

RoomMap::RoomMap(CWnd* pParent /*=NULL*/)
	: CDialog(RoomMap::IDD, pParent)
{

}

RoomMap::~RoomMap()
{
}

void RoomMap::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_ONE, m_201);
	DDX_Control(pDX, IDC_TWO, m_202);
	DDX_Control(pDX, IDC_THREE, m_203);
	DDX_Control(pDX, IDC_FOUR, m_204);
	DDX_Control(pDX, IDC_FIVE, m_205);
	DDX_Control(pDX, IDC_SIX, m_206);
	DDX_Control(pDX, IDC_SEVEN, m_207);
	DDX_Control(pDX, IDC_EIGHT, m_208);
	DDX_Control(pDX, IDC_NINE, m_209);
	DDX_Control(pDX, IDC_TEN, m_210);
	DDX_Control(pDX, IDC_ELEVEN, m_211);
	DDX_Control(pDX, IDC_OONE, m_101);
	DDX_Control(pDX, IDC_OTWO, m_102);
	DDX_Control(pDX, IDC_OTHREE, m_103);
	DDX_Control(pDX, IDC_OFOUR, m_104);
	DDX_Control(pDX, IDC_OFIVE, m_105);
	DDX_Control(pDX, IDC_OSIX, m_106);
	DDX_Control(pDX, IDC_OSEVEN, m_107);
	DDX_Control(pDX, IDC_OEIGHT, m_108);
	DDX_Control(pDX, IDC_ONINE, m_109);
	DDX_Control(pDX, IDC_OTEN, m_110);
	DDX_Control(pDX, IDC_OELEVEN, m_111);
}


BEGIN_MESSAGE_MAP(RoomMap, CDialog)
END_MESSAGE_MAP()


// RoomMap 消息处理程序
void RoomMap::setHotel(CHotel * p)
{
	h=p;
}


void RoomMap::OnRoomPicture(void)
{
		Bmp1.LoadBitmap(IDB_ROOMFREE);
	Bmp2.LoadBitmap(IDB_ROOMFULL);
	//::CoInitialize(NULL); 
	//_ConnectionPtr con(__uuidof(Connection));
	//_RecordsetPtr rst(__uuidof(Recordset));

	//con->Open("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=GuestData.mdb","","",0); 
	//CString SQLstr,m_Room_Num,m_Room_Type,m_Info;


	//SQLstr.Format("select * from RecordData");
	//rst->Open(_variant_t(SQLstr),_variant_t((IDispatch*) con),adOpenDynamic,adLockOptimistic,-1);

	
	m_101.SetBitmap((HBITMAP)Bmp1);
	m_102.SetBitmap((HBITMAP)Bmp2);
	m_103.SetBitmap((HBITMAP)Bmp2);
	m_104.SetBitmap((HBITMAP)Bmp2);
	m_105.SetBitmap((HBITMAP)Bmp2);
	m_106.SetBitmap((HBITMAP)Bmp2);
	m_107.SetBitmap((HBITMAP)Bmp2);
	m_108.SetBitmap((HBITMAP)Bmp2);
	m_109.SetBitmap((HBITMAP)Bmp2);
	m_110.SetBitmap((HBITMAP)Bmp2);
	m_111.SetBitmap((HBITMAP)Bmp2);
	
	m_201.SetBitmap((HBITMAP)Bmp2);
	m_202.SetBitmap((HBITMAP)Bmp2);
	m_203.SetBitmap((HBITMAP)Bmp2);
	m_204.SetBitmap((HBITMAP)Bmp2);
	m_205.SetBitmap((HBITMAP)Bmp2);
	m_206.SetBitmap((HBITMAP)Bmp2);
	m_207.SetBitmap((HBITMAP)Bmp2);
	m_208.SetBitmap((HBITMAP)Bmp2);
	m_209.SetBitmap((HBITMAP)Bmp2);
	m_210.SetBitmap((HBITMAP)Bmp2);
    m_211.SetBitmap((HBITMAP)Bmp2);
	
	

     


	/*while(!rst->adoEOF)
	{

		m_Room_Num=(rst->GetCollect("房间编号").bstrVal);
		m_Room_Type=(rst->GetCollect("房间状态").bstrVal);





		if(m_Room_Num=="101"&&m_Room_Type=="入住")
			m_101.SetBitmap(Bmp1);
		else if(m_Room_Num=="102"&&m_Room_Type=="入住")
			m_102.SetBitmap(Bmp1);
		else if(m_Room_Num=="103"&&m_Room_Type=="入住")
			m_103.SetBitmap(Bmp1);
		else if(m_Room_Num=="104"&&m_Room_Type=="入住")
			m_104.SetBitmap(Bmp1);
		else if(m_Room_Num=="201"&&m_Room_Type=="入住")
			m_201.SetBitmap(Bmp1);
		else if(m_Room_Num=="202"&&m_Room_Type=="入住")
			m_202.SetBitmap(Bmp1);
		else if(m_Room_Num=="203"&&m_Room_Type=="入住")
			m_203.SetBitmap(Bmp1);
		else if(m_Room_Num=="204"&&m_Room_Type=="入住")
			m_204.SetBitmap(Bmp1);
		else if(m_Room_Num=="301"&&m_Room_Type=="入住")
			m_301.SetBitmap(Bmp1);
		else if(m_Room_Num=="302"&&m_Room_Type=="入住")
			m_302.SetBitmap(Bmp1);
		else if(m_Room_Num=="303"&&m_Room_Type=="入住")
			m_303.SetBitmap(Bmp1);
		else if(m_Room_Num=="304"&&m_Room_Type=="入住")
			m_304.SetBitmap(Bmp1);
		else if(m_Room_Num=="401"&&m_Room_Type=="入住")
			m_401.SetBitmap(Bmp1);
		else if(m_Room_Num=="402"&&m_Room_Type=="入住")
			m_402.SetBitmap(Bmp1);
		else if(m_Room_Num=="403"&&m_Room_Type=="入住")
			m_403.SetBitmap(Bmp1);
		else if(m_Room_Num=="404"&&m_Room_Type=="入住")
			m_404.SetBitmap(Bmp1);
		rst->MoveNext();
	*/
}
