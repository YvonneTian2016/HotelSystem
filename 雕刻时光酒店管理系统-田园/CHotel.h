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

    int RegisterNum ;//����ס�ķ���
    int EmptyRoomNum;//������ס�ķ���
    int TotalNum;//�Ƶ�ӵ�еķ�������
    int ExGrand ;//���ַ������Ŀ
    int Grand ;
    int DouNum;
    int SinNum;
    CRoom * RoomArray;//��������
	long long Time;
	double topric;//ÿ�ν��˵�Ǯ
    double ttopric;//��Ӫҵ��
	int ExGrprice;//���ַ������͵ļ۸�
	int Graprice;
	int stdprice;
	int putong;
    ofstream sitRec;
   
    
    
public:                               //��ȡ�����ø�����Ϣ�Ľӿں���
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
 
   //Ԥ����Ԥ��ת��ס���жϷ����Ƿ���Ч�Ĺ��ܺ���
   int JudpreTobook(int hour,int day,string roomid);
   void    JudSucpreBook(string name, int age, string wp, string idlicences, string sex,string city,int vipyes,int hour,int day,string roomid );
   int   JudbookToRegister(string names,int days,int hours,string roomid);
   void SucToRegi(int hours ,int days,string roomid);
   int  DaZongTuiFang(string GroupName,int grouphour,int groupdayth);
   //����ı���Ϣ
   void outdengji(int);
   void outtuifang(int);
   
}; 
