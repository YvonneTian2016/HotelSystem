#pragma once


// RoomPrice 对话框
class CHotel;
class RoomPrice : public CDialog
{
	DECLARE_DYNAMIC(RoomPrice)

public:
	RoomPrice(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~RoomPrice();

// 对话框数据
	enum { IDD = IDD_RPRICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
