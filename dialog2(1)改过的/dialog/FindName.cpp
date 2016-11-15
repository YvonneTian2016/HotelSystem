// FindName.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "FindName.h"
#include "CHotel.h"


// FindName �Ի���

IMPLEMENT_DYNAMIC(FindName, CDialog)

FindName::FindName(CWnd* pParent /*=NULL*/)
	: CDialog(FindName::IDD, pParent)
	, m_name(_T(""))
	, m_result(_T(""))
{

}

FindName::~FindName()
{
}

void FindName::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_result);
}


BEGIN_MESSAGE_MAP(FindName, CDialog)
	ON_BN_CLICKED(IDOK, &FindName::OnBnClickedOk)
END_MESSAGE_MAP()


// FindName ��Ϣ�������
void FindName::setHotel(CHotel * p)
{
	sithotel=p;
}
void FindName::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	UpdateData(TRUE);
	//edited by ZZQ~~~��2010/06/09
// 	char* chr=new char[(m_name.GetLength())];
// 
// 	WideCharToMultiByte(CP_ACP,0,m_name.GetBuffer(),-1,chr,m_name.GetLength(),NULL,NULL);

	string sm_name=string(m_name.GetBuffer());

	

  
	//int i;

	//i=sithotel->ReRoClasSeByName(sm_name)
	string RoClass,Roid;
	RoClass=sithotel->ReRoClasSeByName(sm_name);
//    m_result.Format("\n���䣺%d\n������%s",i,str);
    Roid=sithotel->ReRoIdSeByName(sm_name);
	m_result.Format("��������%s \n����%s",RoClass.c_str(),Roid.c_str());
    //m_result.Format("\",Roid.c_str());
		UpdateData(FALSE);

	//OnOK();


}