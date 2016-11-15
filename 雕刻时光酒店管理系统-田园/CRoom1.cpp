#include "stdafx.h"
#include "Customer.h"
#include"CRoom.h"
#include<cstdio>
#include<cstdlib>

CRoom::CRoom(void){//构造函数，初始化Room对象


	/*Customer2=NULL;*/ 
    price=0;
    EmptyRoom=true;
    RoomClass="";
    TotalPrice=0;
    LivingDays=0;
}
CRoom::~CRoom(void){}

void CRoom::SetRoomID(string No)
{
    RoomID = No;
}

//     
void CRoom::SetRoomClass(string Style)
{
    RoomClass = Style;
}

void CRoom::SetPrice(int Price)
{
    price = Price;
}

void CRoom:: SetCustomer1(string name,int age,string id,string wp,string sex,string city,bool vip)
{
	
	Customer1.SetName(name);
	Customer1.SetSex (sex);
    Customer1. SetAge(age);
    Customer1. SetVip(vip);
	Customer1.SetID(id);
	Customer1. SetWorkplace(wp);
    Customer1. SetCity( city);
	
	

  

}
/*void CRoom:: SetCustomer2(CCustomer*cus22)
{
    Customer2=cus22;
}*/ 
void CRoom::SetEmptyRoom(bool empty)
{
    EmptyRoom = empty;
}
int CRoom::GetLivingDays(void)
{
    return LivingDays;
}

void CRoom::   SetLivingDays(int i) 
{
    LivingDays=i;
}

//      
CCustomer  *CRoom:: GetCustomer1(void)
{
    return &Customer1;
}
//      
/*CCustomer * CRoom:: GetCustomer2(void)
{
    return Customer2;
}*/ 

// 
bool CRoom::GetEmptyRoom(void)
{
    return EmptyRoom;
}

string CRoom:: GetRoomID(void)
{
    return RoomID ;
}


string CRoom:: GetRoomClass(void)
{
    return RoomClass;
}


int CRoom:: GetPrice(void)
{
    return price;
}
double CRoom::GetTotalPrice(bool vip)
{   LivingDays=OutDayth-InDayth;
	 if(OutHour>18)
	 { LivingDays++;
	   TotalPrice=LivingDays*price;
	 }
	 else if(OutHour>12){
       TotalPrice=LivingDays*price+price/2;
	 }
	 else
		 TotalPrice=LivingDays*price;
     
      if(vip)
        TotalPrice=TotalPrice*0.8;
    else
        TotalPrice=TotalPrice;
    return TotalPrice;
}
void CRoom:: ADDCalDays()
{
    LivingDays++;
}
int CRoom::GetInDayth(){
	return InDayth;
}
void CRoom::SetInDayth(int Indayth){
	InDayth = Indayth;
}
int CRoom::GetInhour(){
	return InHour;
}
void CRoom::SetInhour(int inhour){
	InHour=inhour;
}
int CRoom::GetOutDayth(){
	return OutDayth;
}
void CRoom::SetOutDayth(int outdayth){
	OutDayth=outdayth;
}
int CRoom::GetOuthour(){
	return OutHour;
}
void CRoom::SetOuthour(int outhour){
    OutHour=outhour;
}