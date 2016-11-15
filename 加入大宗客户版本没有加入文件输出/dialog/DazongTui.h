#pragma once


// DazongTui 对话框
class CHotel;
class DazongTui : public CDialog
{
	DECLARE_DYNAMIC(DazongTui)

public:
	DazongTui(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DazongTui();

// 对话框数据
	enum { IDD = IDD_DAZONGTUI };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString name_tui;
	afx_msg void OnBnClickedOk();
	void sethotel(CHotel *p);
	private:
		CHotel* Dazongtui;

};
