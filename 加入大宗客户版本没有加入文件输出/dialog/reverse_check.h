#pragma once
#include "afxwin.h"


// reverse_check 对话框
class CHotel;
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
public:
	CString y_name;
 //	CEdit y_sex;
	int y_age;
	CString y_city;
	CString y_id;
	//CEdit y_wp;
	CComboBox y_list1;
	CComboBox y_list2;
	CComboBox y_list3;
	CComboBox y_list4;
	afx_msg void OnBnClickedOk();
	void setHotel(CHotel * );   //新添加，将主窗口的CHotel类传入


    private:
	CHotel * sithotel;  
public:
	CString y_sex;
	CString y_wp;
};
