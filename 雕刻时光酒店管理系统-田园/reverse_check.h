#pragma once
#include "afxwin.h"


// reverse_check �Ի���
class CHotel;
class reverse_check : public CDialog
{
	DECLARE_DYNAMIC(reverse_check)

public:
	reverse_check(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~reverse_check();

// �Ի�������
	enum { IDD = IDD_REVERSE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
	void setHotel(CHotel * );   //����ӣ��������ڵ�CHotel�ഫ��


    private:
	CHotel * sithotel;  
public:
	CString y_sex;
	CString y_wp;
};
