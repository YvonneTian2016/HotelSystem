#pragma once


// YingYeE �Ի���
class CHotel;

class YingYeE : public CDialog
{
	DECLARE_DYNAMIC(YingYeE)

public:
	YingYeE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~YingYeE();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public: void setHotel(CHotel * p);
private: CHotel*h;
	
};
