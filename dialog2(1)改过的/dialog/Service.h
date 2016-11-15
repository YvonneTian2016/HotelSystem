#pragma once


// Service 对话框

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
};
