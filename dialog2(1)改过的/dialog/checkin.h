#pragma once
#include "afxwin.h"


// ccheckin �Ի���
class CHotel;
class ccheckin : public CDialog
{
	DECLARE_DYNAMIC(ccheckin)

public:
	ccheckin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ccheckin();

// �Ի�������
	enum { IDD = IDD_CHECKIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CComboBox PRoomCode;
	CComboBox BRoomCode;
	CComboBox HRoomCode;
	CComboBox ZRoomCode;
	afx_msg void OnBnClickedVip();
    void setHotel(CHotel * );   //����ӣ��������ڵ�CHotel�ഫ��
	CString name;
	CString sex;
	int age;
	CString id;
	CString workplace;
	CString city;

public:
    CHotel * sithotel;   //CHotelָ�룬setHotel�н���������
	int vip;
    
};
