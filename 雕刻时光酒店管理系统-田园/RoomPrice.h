#pragma once


// RoomPrice �Ի���
class CHotel;
class RoomPrice : public CDialog
{
	DECLARE_DYNAMIC(RoomPrice)

public:
	RoomPrice(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RoomPrice();

// �Ի�������
	enum { IDD = IDD_RPRICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int p_putong;
	int p_biaozhun;
	int p_hh;
	int p_zttf;
	afx_msg void OnBnClickedOk();
    void setHotel(CHotel * p); 
	private: CHotel* roomprice;
};
