#pragma once


// reverse_check �Ի���

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
};
