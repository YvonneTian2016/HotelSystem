// dialogDlg.h : 头文件
//
#include "SysLogin.h"
#include "CHotel.h"
#include <string>
#include<iostream>

#pragma once 
#include "afxwin.h"




// CdialogDlg 对话框
class CdialogDlg : public CDialog
{	
// 构造


public:
	CdialogDlg(CWnd* pParent = NULL);	// 标准构造函数
    SysLogin Login1;
// 对话框数据
	enum { IDD = IDD_DIALOG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheckbutton();
	afx_msg void OnBnClickedReverse();
	afx_msg void OnBnClickedFee();
	afx_msg void OnBnClickedCancle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	
	
   //  CListBox Current_Time;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRuZhuLv();
	afx_msg void OnYingYeE();
	afx_msg void OnFindName();
	afx_msg void OnFindRoom();
	afx_msg void OnService();
	afx_msg void OnBnClickedMap();
//	CString Current_Time3;
	
	CListBox Current_Time;
	CHotel sit;    
};
