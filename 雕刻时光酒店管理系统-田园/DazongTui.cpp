// DazongTui.cpp : 实现文件
//

#include "stdafx.h"
#include "dialog.h"
#include "DazongTui.h"
#include "CHotel.h"

extern COleDateTime time2;

// DazongTui 对话框

IMPLEMENT_DYNAMIC(DazongTui, CDialog)

DazongTui::DazongTui(CWnd* pParent /*=NULL*/)
	: CDialog(DazongTui::IDD, pParent)
	, name_tui(_T(""))
{

}

DazongTui::~DazongTui()
{
}

void DazongTui::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name_tui);
}


BEGIN_MESSAGE_MAP(DazongTui, CDialog)
	ON_BN_CLICKED(IDOK, &DazongTui::OnBnClickedOk)
END_MESSAGE_MAP()


// DazongTui 消息处理程序
void DazongTui::sethotel(CHotel *p){

 Dazongtui=p;
}

void DazongTui::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
     
	int tuihour=time2.GetHour();
	int tuiday=time2.GetDayOfYear();

	string name=string(name_tui.GetBuffer());

	int tuifangshu=Dazongtui->DaZongTuiFang(name,tuihour,tuiday);
	double toto=Dazongtui->GetTopic();
	CString str;
	str.Format("感谢光临！您已经成功退%d间客房,共计消费：%.2f元",tuifangshu,toto);
    MessageBox(str);
   
	OnOK();
}
