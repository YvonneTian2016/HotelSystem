#pragma once


// welcome1 对话框

class welcome1 : public CDialog
{
	DECLARE_DYNAMIC(welcome1)

public:
	welcome1(CWnd* pParent = NULL);   // 标准构造函数
//	virtual ~welcome1();

// 对话框数据
	enum { IDD = IDD_TIP1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString welcome;
//	afx_msg void OnEnChangeEdit2();
//	afx_msg void OnEnChangeEdit5();
//	afx_msg void OnEnChangeEdit3();
	afx_msg void OnPaint();
};
