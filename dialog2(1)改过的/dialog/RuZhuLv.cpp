// RuZhuLv.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dialog.h"
#include "RuZhuLv.h"


// RuZhuLv �Ի���

IMPLEMENT_DYNAMIC(RuZhuLv, CDialog)

RuZhuLv::RuZhuLv(CWnd* pParent /*=NULL*/)
	: CDialog(RuZhuLv::IDD, pParent)
{

}

RuZhuLv::~RuZhuLv()
{
}

void RuZhuLv::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(RuZhuLv, CDialog)
END_MESSAGE_MAP()


// RuZhuLv ��Ϣ�������
void RuZhuLv::setHotel(CHotel * p)
{
	h=p;
}