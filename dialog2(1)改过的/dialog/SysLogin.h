#pragma once


// SysLogin �Ի���

class SysLogin : public CDialog
{
	DECLARE_DYNAMIC(SysLogin)

public:
	SysLogin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SysLogin();

// �Ի�������
	enum { IDD = IDD_SysLogin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnEnChangeEdit1();
	CString m_username;
	afx_msg void OnBnClickedOk();
	CString m_usercode;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
