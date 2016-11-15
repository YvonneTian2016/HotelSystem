#pragma once


// deleteroom 对话框
class CHotel;
class deleteroom : public CDialog
{
	DECLARE_DYNAMIC(deleteroom)

public:
	deleteroom(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~deleteroom();

// 对话框数据
	enum { IDD = IDD_CANCEL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	public:
    void setHotel(CHotel * );   //新添加，将主窗口的CHotel类传入
	private: 
		CHotel*Delesit;
public:
	CString m_checkout;
	CString checkout_fee;
	afx_msg void OnBnClickedOk();
};
