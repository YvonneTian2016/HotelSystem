#pragma once


// deleteroom �Ի���
class CHotel;
class deleteroom : public CDialog
{
	DECLARE_DYNAMIC(deleteroom)

public:
	deleteroom(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~deleteroom();

// �Ի�������
	enum { IDD = IDD_CANCEL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	public:
    void setHotel(CHotel * );   //����ӣ��������ڵ�CHotel�ഫ��
	private: 
		CHotel*Delesit;
public:
	CString m_checkout;
	CString checkout_fee;
	afx_msg void OnBnClickedOk();
};
