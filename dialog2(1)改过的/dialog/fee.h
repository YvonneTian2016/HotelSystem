#pragma once


// fee 对话框
class CHotel;
class fee : public CDialog
{
	DECLARE_DYNAMIC(fee)

public:
	fee(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~fee();

// 对话框数据
	enum { IDD = IDD_FEECHECK };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_qingdan;
//	afx_msg void OnEnChangeEdit1();
	void setHotel(CHotel * p);
	private:
		CHotel*h;
	
};
