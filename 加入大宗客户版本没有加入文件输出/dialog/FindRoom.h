#pragma once


// FindRoom �Ի���
class CHotel ;
class FindRoom : public CDialog
{
	DECLARE_DYNAMIC(FindRoom)

public:
	FindRoom(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~FindRoom();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public: void setHotel(CHotel * p);
	
private: CHotel* Fsithotel;
public:
	afx_msg void OnBnClickedOk();
	CString m_room;
	
	CString room_result;
};
