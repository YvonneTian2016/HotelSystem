// dialogDlg.h : ͷ�ļ�
//
#include "SysLogin.h"
#include "CHotel.h"
#include <string>
#include<iostream>

#pragma once 
#include "afxwin.h"




// CdialogDlg �Ի���
class CdialogDlg : public CDialog
{	
// ����


public:
	CdialogDlg(CWnd* pParent = NULL);	// ��׼���캯��
    SysLogin Login1;
// �Ի�������
	enum { IDD = IDD_DIALOG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
