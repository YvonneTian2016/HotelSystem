#pragma once

class CHotel;
// DazongZhu 对话框

class DazongZhu : public CDialog
{
	DECLARE_DYNAMIC(DazongZhu)

public:
	DazongZhu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DazongZhu();

// 对话框数据
	enum { IDD = IDD_DAZONGZHU };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString name_dazong;
//	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck17();
	afx_msg void OnBnClickedCheck20();
	afx_msg void OnBnClickedCheck21();
	afx_msg void OnBnClickedCheck22();
	afx_msg void OnBnClickedCheck23();
	afx_msg void OnBnClickedCheck24();
	afx_msg void OnBnClickedCheck15();
	afx_msg void OnBnClickedCheck16();
	afx_msg void OnBnClickedCheck18();
	afx_msg void OnBnClickedCheck19();
	afx_msg void OnBnClickedCheck11();
	afx_msg void OnBnClickedCheck12();
	afx_msg void OnBnClickedCheck13();
	afx_msg void OnBnClickedCheck14();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck5();
	afx_msg void OnBnClickedCheck6();
	afx_msg void OnBnClickedCheck7();
	afx_msg void OnBnClickedCheck10();
	
	
		void Sethotel(CHotel* p);
		private:
		CHotel* Daz;
public:
	afx_msg void OnBnClickedButton1();

	afx_msg void OnBnClickedOk();
};
