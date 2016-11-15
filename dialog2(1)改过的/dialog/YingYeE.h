#pragma once


// YingYeE 对话框
class CHotel;

class YingYeE : public CDialog
{
	DECLARE_DYNAMIC(YingYeE)

public:
	YingYeE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~YingYeE();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public: void setHotel(CHotel * p);
private: CHotel*h;
	
};
