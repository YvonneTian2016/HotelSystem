#pragma once


// SysLogin 对话框

class SysLogin : public CDialog
{
	DECLARE_DYNAMIC(SysLogin)

public:
	SysLogin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SysLogin();

// 对话框数据
	enum { IDD = IDD_SysLogin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnEnChangeEdit1();
	CString m_username;
	afx_msg void OnBnClickedOk();
	CString m_usercode;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
