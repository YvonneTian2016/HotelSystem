#pragma once


// fee �Ի���
class CHotel;
class fee : public CDialog
{
	DECLARE_DYNAMIC(fee)

public:
	fee(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~fee();

// �Ի�������
	enum { IDD = IDD_FEECHECK };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_qingdan;
//	afx_msg void OnEnChangeEdit1();
	void setHotel(CHotel * p);
	private:
		CHotel*h;
	
};
