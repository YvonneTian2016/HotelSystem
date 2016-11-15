// RoomMap.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "RoomMap.h"
#include "CHotel.h"



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




BOOL RoomMap::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	Bmp1.LoadBitmap(IDB_ROOMFREE);
	Bmp2.LoadBitmap(IDB_ROOMFULL);
	
	int a;
	
	a=h->GetRoom(h->xb_SearchBylivID("101"))->GetEmptyRoom();
	
	if(a==1)
		m_101.SetBitmap((HBITMAP)Bmp1);
	else
		m_101.SetBitmap((HBITMAP)Bmp2);
	a=h->GetRoom(h->xb_SearchBylivID("102"))->GetEmptyRoom();
	if(a==1)
		m_102.SetBitmap((HBITMAP)Bmp1);
	else
		m_102.SetBitmap((HBITMAP)Bmp2);


	a=h->GetRoom(h->xb_SearchBylivID("103"))->GetEmptyRoom();
	if(a==1)
		m_103.SetBitmap((HBITMAP)Bmp1);
	else
		m_103.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("104"))->GetEmptyRoom();
	if(a==1)
		m_104.SetBitmap((HBITMAP)Bmp1);
	else
		m_104.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("105"))->GetEmptyRoom();
	if(a==1)
		m_105.SetBitmap((HBITMAP)Bmp1);
	else
		m_105.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("106"))->GetEmptyRoom();
	if(a==1)
		m_106.SetBitmap((HBITMAP)Bmp1);
	else
		m_106.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("107"))->GetEmptyRoom();
	if(a==1)
		m_107.SetBitmap((HBITMAP)Bmp1);
	else
		m_107.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("108"))->GetEmptyRoom();
	if(a==1)
		m_108.SetBitmap((HBITMAP)Bmp1);
	else
		m_108.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("109"))->GetEmptyRoom();
	if(a==1)
		m_109.SetBitmap((HBITMAP)Bmp1);
	else
		m_109.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("110"))->GetEmptyRoom();
	if(a==1)
		m_110.SetBitmap((HBITMAP)Bmp1);
	else
		m_110.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("111"))->GetEmptyRoom();
	if(a==1)
		m_111.SetBitmap((HBITMAP)Bmp1);
	else
		m_111.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("201"))->GetEmptyRoom();
	if(a==1)
		m_201.SetBitmap((HBITMAP)Bmp1);
	else
		m_201.SetBitmap((HBITMAP)Bmp2);
	
	a=h->GetRoom(h->xb_SearchBylivID("202"))->GetEmptyRoom();
	if(a==1)
		m_202.SetBitmap((HBITMAP)Bmp1);
	else
		m_202.SetBitmap((HBITMAP)Bmp2);




	a=h->GetRoom(h->xb_SearchBylivID("203"))->GetEmptyRoom();
	if(a==1)
		m_203.SetBitmap((HBITMAP)Bmp1);
	else
		m_203.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("204"))->GetEmptyRoom();
	if(a==1)
		m_204.SetBitmap((HBITMAP)Bmp1);
	else
		m_204.SetBitmap((HBITMAP)Bmp2);



	a=h->GetRoom(h->xb_SearchBylivID("205"))->GetEmptyRoom();
	if(a==1)
		m_205.SetBitmap((HBITMAP)Bmp1);
	else
		m_205.SetBitmap((HBITMAP)Bmp2);

	a=h->GetRoom(h->xb_SearchBylivID("206"))->GetEmptyRoom();
	if(a==1)
		m_206.SetBitmap((HBITMAP)Bmp1);
	else
		m_206.SetBitmap((HBITMAP)Bmp2);

	a=h->GetRoom(h->xb_SearchBylivID("207"))->GetEmptyRoom();
	if(a==1)
		m_207.SetBitmap((HBITMAP)Bmp1);
	else
		m_207.SetBitmap((HBITMAP)Bmp2);

	a=h->GetRoom(h->xb_SearchBylivID("208"))->GetEmptyRoom();
	if(a==1)
		m_208.SetBitmap((HBITMAP)Bmp1);
	else
		m_208.SetBitmap((HBITMAP)Bmp2);

	a=h->GetRoom(h->xb_SearchBylivID("209"))->GetEmptyRoom();
	if(a==1)
		m_209.SetBitmap((HBITMAP)Bmp1);
	else
		m_209.SetBitmap((HBITMAP)Bmp2);

	a=h->GetRoom(h->xb_SearchBylivID("210"))->GetEmptyRoom();
	if(a==1)
		m_210.SetBitmap((HBITMAP)Bmp1);
	else
		m_210.SetBitmap((HBITMAP)Bmp2);

	a=h->GetRoom(h->xb_SearchBylivID("211"))->GetEmptyRoom();
	if(a==1)
		m_211.SetBitmap((HBITMAP)Bmp1);
	else
		m_211.SetBitmap((HBITMAP)Bmp2);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
