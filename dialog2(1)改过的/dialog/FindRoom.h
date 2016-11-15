#pragma once


// FindRoom 对话框
class CHotel ;
class FindRoom : public CDialog
{
	DECLARE_DYNAMIC(FindRoom)

public:
	FindRoom(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~FindRoom();

// 对话框数据
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public: void setHotel(CHotel * p);
	
private: CHotel* Fsithotel;
public:
	afx_msg void OnBnClickedOk();
	CString m_room;
	
	CString room_result;
};
