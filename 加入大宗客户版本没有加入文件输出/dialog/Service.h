#pragma once


// Service 对话框
class CHotel;
class Service : public CDialog
{
	DECLARE_DYNAMIC(Service)

public:
	Service(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Service();

// 对话框数据
	enum { IDD = IDD_SERVICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck5();
	afx_msg void OnBnClickedCheck6();
	afx_msg void OnBnClickedCheck7();
	afx_msg void OnBnClickedCheck8();
	afx_msg void OnBnClickedCheck9();
	afx_msg void OnBnClickedCheck10();
	afx_msg void OnBnClickedOk();
	void sethotel(CHotel* p);
	private:
		CHotel *service;

	
public:
	CString ser_room;
};
