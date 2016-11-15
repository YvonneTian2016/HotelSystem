#pragma once


// reverse_check 对话框

class reverse_check : public CDialog
{
	DECLARE_DYNAMIC(reverse_check)

public:
	reverse_check(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~reverse_check();

// 对话框数据
	enum { IDD = IDD_REVERSE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
