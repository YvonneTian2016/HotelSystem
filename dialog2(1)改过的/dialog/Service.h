#pragma once


// Service �Ի���

class Service : public CDialog
{
	DECLARE_DYNAMIC(Service)

public:
	Service(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Service();

// �Ի�������
	enum { IDD = IDD_SERVICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
