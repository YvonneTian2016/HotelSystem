// welcome.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "welcome.h"


// welcome �Ի���

IMPLEMENT_DYNAMIC(welcome, CDialog)

welcome::welcome(CWnd* pParent /*=NULL*/)
	: CDialog(welcome::IDD, pParent)
{

}

welcome::~welcome()
{
}

void welcome::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(welcome, CDialog)
END_MESSAGE_MAP()


// welcome ��Ϣ�������
