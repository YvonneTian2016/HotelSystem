#pragma once


// DazongTui �Ի���
class CHotel;
class DazongTui : public CDialog
{
	DECLARE_DYNAMIC(DazongTui)

public:
	DazongTui(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DazongTui();

// �Ի�������
	enum { IDD = IDD_DAZONGTUI };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString name_tui;
	afx_msg void OnBnClickedOk();
	void sethotel(CHotel *p);
	private:
		CHotel* Dazongtui;

};
