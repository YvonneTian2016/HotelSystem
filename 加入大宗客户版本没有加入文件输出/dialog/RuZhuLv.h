#pragma once


// RuZhuLv 对话框
class CHotel;
class RuZhuLv : public CDialog
{
	DECLARE_DYNAMIC(RuZhuLv)

public:
	RuZhuLv(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~RuZhuLv();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:void setHotel(CHotel * p);
private: CHotel* h;
	  
public:
	CString ruzhulv;
	afx_msg void OnBnClickedOk();
};