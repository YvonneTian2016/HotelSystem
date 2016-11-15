#pragma once

class CHotel;
// FindName 对话框

class FindName : public CDialog
{
	DECLARE_DYNAMIC(FindName)

public:
	FindName(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~FindName();

// 对话框数据
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	public:
		void setHotel(CHotel * p);
private :
			CHotel* sithotel;
		
public:
	CString m_name;
	afx_msg void OnBnClickedOk();
	CString m_result;
};
