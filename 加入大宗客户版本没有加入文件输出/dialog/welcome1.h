#pragma once


// welcome1 �Ի���

class welcome1 : public CDialog
{
	DECLARE_DYNAMIC(welcome1)

public:
	welcome1(CWnd* pParent = NULL);   // ��׼���캯��
//	virtual ~welcome1();

// �Ի�������
	enum { IDD = IDD_TIP1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString welcome;
//	afx_msg void OnEnChangeEdit2();
//	afx_msg void OnEnChangeEdit5();
//	afx_msg void OnEnChangeEdit3();
	afx_msg void OnPaint();
};
