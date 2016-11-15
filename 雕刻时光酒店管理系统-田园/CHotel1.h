#pragma once
#include "stdafx.h"
#include"CRoom.h"
#include "Customer.h"

#include<iostream>
#include <string>

using namespace std;

class CHotel
{
private:

    int RegisterNum ;
    int EmptyRoomNum;
    int TotalNum;
    int ExGrand ;
    int Grand ;
    int DouNum;
    int SinNum;
    CRoom * RoomArray;
    long long Time;
	double topric;
   
    
    
public:
    CHotel(void);
    ~CHotel(void);
	double GetTopic(void);

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
  //  CCustomer  SearchByRoomID2(string id);     
   // void CalLivDays();
	CRoom* GetRoomArray();
	CRoom *GetRoom(int xb);
	//CCustomer CusCheckIn(string name, int age, string wp, string idlicences, string city, bool vipyes);
	
   void FinalCheckIn(string name, int age, string wp, string idlicences, string sex,string city, bool vipyes,string roomid,int Cindayth,int Cinhour);
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
	//int ReRoInTimeSeByName(string name);

}; 
