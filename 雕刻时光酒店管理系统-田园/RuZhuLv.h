#pragma once


// RuZhuLv �Ի���
class CHotel;
class RuZhuLv : public CDialog
{
	DECLARE_DYNAMIC(RuZhuLv)

public:
	RuZhuLv(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RuZhuLv();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:void setHotel(CHotel * p);
private: CHotel* h;
	  
public:
	CString ruzhulv;
	afx_msg void OnBnClickedOk();
};