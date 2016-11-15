#pragma once
#include "stdafx.h"
#include"CRoom.h"
#include "Customer.h"
#include<iostream>
#include<fstream>
#include <string>

using namespace std;

class CHotel
{
private:

    int RegisterNum ;//已入住的房间
    int EmptyRoomNum;//无人入住的房间
    int TotalNum;//酒店拥有的房间总数
    int ExGrand ;//四种房间的数目
    int Grand ;
    int DouNum;
    int SinNum;
    CRoom * RoomArray;//房间数组
	long long Time;
	double topric;//每次结账的钱
    double ttopric;//总营业额
	int ExGrprice;//四种房间类型的价格
	int Graprice;
	int stdprice;
	int putong;
    ofstream sitRec;
   
    
    
public:                               //获取与设置各项信息的接口函数
    CHotel(void);
    ~CHotel(void);
	double GetTopic(void);
    double Getttopric();
    int GetTotalNum(void);
    void SetTotalNum(int);
    int GetSinNum(void);
    int GetRegisterNum(void);
    int GetEmptyRoomNum(void);
    int GetGrand(void);
    int GetExGrand(void );
    int GetDouNum(void);
   
	int xb_SearchBylivID(string livid);
    double GetRegRate(void);
    int SearchByName(string name);
    CCustomer *SearchByRoomID1(string id);

	CRoom* GetRoomArray();
	CRoom *GetRoom(int xb);
	void SetExGrprice(int pr);
	void SetGraprice(int pr );
	void Setstdprice(int pr);
	void Setputong(int pr);
    void setprice(void);
	int GetExGrprice(void);
	int GetGraprice(void);
	int Getstdprice(void);
	int Getputong(void);
	

   void FinalCheckIn(string name, int age, string wp, string idlicences, string sex,string city, int vipyes,string roomid,int Cindayth,int Cinhour);
   void FinalCheckOut(string id,int Coutdayth,int Chour);
   string ReCusNamSeByRoId(string RoId);

   string ReCusSexSeByRoId(string RoId);
   string ReCusCitSeByRoId(string RoId);
   string  ReCusWpSeByRoId(string RoId);
   string ReCusIdSeByRoId(string RoId);
   string ReCusVipSeByRoId(string RoId);
   int ReCusAgeSeByRoId(string RoId);
   string ReRoIdSeByName(string name);
   string ReRoClasSeByName(string name); 
 
   //预订，预订转入住等判断房间是否有效的功能函数
   int JudpreTobook(int hour,int day,string roomid);
   void    JudSucpreBook(string name, int age, string wp, string idlicences, string sex,string city,int vipyes,int hour,int day,string roomid );
   int   JudbookToRegister(string names,int days,int hours,string roomid);
   void SucToRegi(int hours ,int days,string roomid);
   int  DaZongTuiFang(string GroupName,int grouphour,int groupdayth);
   //输出文本信息
   void outdengji(int);
   void outtuifang(int);
   
}; 
