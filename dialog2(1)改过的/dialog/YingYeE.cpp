// YingYeE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "YingYeE.h"


// YingYeE �Ի���

IMPLEMENT_DYNAMIC(YingYeE, CDialog)

YingYeE::YingYeE(CWnd* pParent /*=NULL*/)
	: CDialog(YingYeE::IDD, pParent)
{

}

YingYeE::~YingYeE()
{
}

void YingYeE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(YingYeE, CDialog)
END_MESSAGE_MAP()


// YingYeE ��Ϣ�������
void YingYeE::setHotel(CHotel * p)
{
	h=p;
}
