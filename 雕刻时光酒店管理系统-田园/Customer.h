#pragma once
#include "stdafx.h"
#include <string>
using namespace std;

class CCustomer
{  
   public:
	   string Name;//�ͻ�����
	   string Sex;//�Ա�
	   string Workplace;//������λ
       int  Age;//����
	   string ID;//���֤��
	   string City;//���ڳ���
       int Vip;//�Ƿ�ΪVIP
	   string livID;//�����
   public:

	 CCustomer(void);
	~CCustomer(void);
	void Initiall(void);
     string GetName(void);//��ÿͻ�����
	 string GetSex(void);//��ÿͻ�����
	 string GetWorkplace(void);//��ȡ������λ
     int GetAge(void);//��ȡ����
	 string GetID(void);//��ȡ���֤��
	 string GetCity(void);//��ȡ���ڳ���
     int GetVip(void);//��ȡ�Ƿ�ΪVIP
	 void SetVip(int vip);//�����Ƿ�ΪVIP
	 void SetName(string name);//��������
	 void SetSex (string sex);//�����Ա�
	 void SetAge(int age);//��������
	 void SetID(string id);//�������֤��
	 void SetWorkplace(string workplace);//���ù�����λ
	 void SetCity(string city);//�������ڳ���
	 string GetLivID(void);//��÷����
	 void SetLivID(string id);//���÷����
	 
};
