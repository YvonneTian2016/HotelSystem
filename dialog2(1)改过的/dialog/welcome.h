#pragma once


// welcome 对话框

class welcome : public CDialog
{
	DECLARE_DYNAMIC(welcome)

public:
	welcome(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~welcome();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
