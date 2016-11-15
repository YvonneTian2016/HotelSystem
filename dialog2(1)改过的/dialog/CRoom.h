#pragma once
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include "Customer.h"

using namespace std;

class CRoom
{
private:
     //定义一系列变量，房间的标准价格
     int price;
     string RoomClass;//房间的类型
     string RoomID;//房间号
	 CCustomer Customer1;//客人1
	/* CCustomer*Customer2;//客人2*/ 
     bool EmptyRoom;//判断是否为空房
     int LivingDays;//已住天数
     double TotalPrice;//总的费用
	 int InDayth;
     int InHour;
	 int OutDayth;
	 int OutHour;

public:
     CRoom(void) ;
     ~CRoom(void);
    void SetRoomID(string No);//设置房间号
	string GetRoomID(void);//获得房号
    void SetRoomClass(string Style);//设置房间类型
    string GetRoomClass(void);//获得房间类型
    void SetPrice(int Price);//设置房间标准价格
    int GetPrice(void);//获取标准价格
	void SetCustomer1(string name,int age,string id,string wp,string sex,string city,bool vip);//设置房间的客人1
    CCustomer *GetCustomer1(void);//获取客人1
  //  void SetCustomer2(CCustomer cus22);//设置房间的客人2
    void SetEmptyRoom(bool);//设置空房间数bool GetEmptyRoom(void);//获得是否已住信息
	bool GetEmptyRoom(void);
   int GetLivingDays(void);//获得入住时间
    void SetLivingDays(int i) ;//设置入住时间

   // CCustomer  GetCustomer2(void);//获取客人2
   double GetTotalPrice(bool);//根据是否是vip 用户计算总的消费金额
  // void SetTotalPrice(double pri);
    void ADDCalDays();
	int GetInDayth();
    void SetInDayth(int Indayth);
	int GetInhour();
	void SetInhour(int inhour);
	int GetOutDayth();
	void SetOutDayth(int outdayth);
	int GetOuthour();
	void SetOuthour(int outhour);
    

};
