// DazongTui.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "DazongTui.h"
#include "CHotel.h"

extern COleDateTime time2;

// DazongTui �Ի���

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


// DazongTui ��Ϣ�������
void DazongTui::sethotel(CHotel *p){

 Dazongtui=p;
}

void DazongTui::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
     
	int tuihour=time2.GetHour();
	int tuiday=time2.GetDayOfYear();

	string name=string(name_tui.GetBuffer());

	int tuifangshu=Dazongtui->DaZongTuiFang(name,tuihour,tuiday);
	double toto=Dazongtui->GetTopic();
	CString str;
	str.Format("��л���٣����Ѿ��ɹ���%d��ͷ�,�������ѣ�%.2fԪ",tuifangshu,toto);
    MessageBox(str);
   
	OnOK();
}
