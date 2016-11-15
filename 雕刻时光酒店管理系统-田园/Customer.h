#pragma once
#include "stdafx.h"
#include <string>
using namespace std;

class CCustomer
{  
   public:
	   string Name;//客户姓名
	   string Sex;//性别
	   string Workplace;//工作单位
       int  Age;//年龄
	   string ID;//身份证号
	   string City;//所在城市
       int Vip;//是否为VIP
	   string livID;//房间号
   public:

	 CCustomer(void);
	~CCustomer(void);
	void Initiall(void);
     string GetName(void);//获得客户姓名
	 string GetSex(void);//获得客户年龄
	 string GetWorkplace(void);//获取工作单位
     int GetAge(void);//获取年龄
	 string GetID(void);//获取身份证号
	 string GetCity(void);//获取所在城市
     int GetVip(void);//获取是否为VIP
	 void SetVip(int vip);//设置是否为VIP
	 void SetName(string name);//设置姓名
	 void SetSex (string sex);//设置性别
	 void SetAge(int age);//设置年龄
	 void SetID(string id);//设置身份证号
	 void SetWorkplace(string workplace);//设置工作单位
	 void SetCity(string city);//设置所在城市
	 string GetLivID(void);//获得房间号
	 void SetLivID(string id);//设置房间号
	 
};
