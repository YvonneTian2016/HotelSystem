#pragma once
#include "afxwin.h"

class CHotel;
// RoomMap 对话框

class RoomMap : public CDialog
{
	DECLARE_DYNAMIC(RoomMap)

public:
	RoomMap(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~RoomMap();

// 对话框数据
	enum { IDD = IDD_MAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CStatic m_201;
	CStatic m_202;
	CStatic m_203;
	CStatic m_204;
	CStatic m_205;
	CStatic m_206;
	CStatic m_207;
	CStatic m_208;
	CStatic m_209;
	CStatic m_210;
	CStatic m_211;
	CStatic m_101;
	CStatic m_102;
	CStatic m_103;
	CStatic m_104;
	CStatic m_105;
	CStatic m_106;
	CStatic m_107;
	CStatic m_108;
	CStatic m_109;
	CStatic m_110;
	CStatic m_111;
	void OnRoomPicture(void);
	public:
		void setHotel(CHotel * p);
		private:
			CHotel* h;
		
public:
	virtual BOOL OnInitDialog();
};
