#pragma once

class CHotel;
// FindName �Ի���

class FindName : public CDialog
{
	DECLARE_DYNAMIC(FindName)

public:
	FindName(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~FindName();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
