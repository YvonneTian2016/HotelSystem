#pragma once


// welcome �Ի���

class welcome : public CDialog
{
	DECLARE_DYNAMIC(welcome)

public:
	welcome(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~welcome();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
