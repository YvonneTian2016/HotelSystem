#pragma once
#include "afxwin.h"


// ccheckin 对话框
class CHotel;
class ccheckin : public CDialog
{
	DECLARE_DYNAMIC(ccheckin)

public:
	ccheckin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ccheckin();

// 对话框数据
	enum { IDD = IDD_CHECKIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CComboBox PRoomCode;
	CComboBox BRoomCode;
	CComboBox HRoomCode;
	CComboBox ZRoomCode;
	afx_msg void OnBnClickedVip();
    void setHotel(CHotel * );   //新添加，将主窗口的CHotel类传入
	CString name;
	CString sex;
	int age;
	CString id;
	CString workplace;
	CString city;

public:
    CHotel * sithotel;   //CHotel指针，setHotel中将进行设置
	int vip;
    
};
