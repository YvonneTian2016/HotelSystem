#include "stdafx.h"
#include "Customer.h"
#include"CRoom.h"
#include<cstdio>
#include<cstdlib>

CRoom::CRoom(void){//构造函数，初始化Room对象


	/*Customer2=NULL;*/ 
    price=0;
    EmptyRoom=1;
    RoomClass="";
    TotalPrice=0;
    LivingDays=0;
	prebook=0;
	a=0;b=0;
	c=0;

}
CRoom::~CRoom(void){}
void CRoom::seta(int A ){
	a=A;
}
void CRoom::setb(int B){
b=B;
}

void CRoom::setc(int C){
   c=C;
}
int CRoom::geta(void){
	return a;
}
int CRoom:: getb(void){
	return b;
}
int CRoom::getcc(void){
	return c;
}


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

void CRoom:: SetCustomer1(string name,int age,string id,string wp,string sex,string city,int vip)
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
void CRoom::SetEmptyRoom(int empty)
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
int CRoom::GetEmptyRoom(void)
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
double CRoom::GetTotalPrice(int vip,int xiaofei1,int xiaofei2,int xiaofei3)
{   LivingDays=OutDayth-InDayth;
   if(LivingDays==0)
	   TotalPrice=price/2;
   else if(OutHour>=18)
	 { LivingDays++;
	   TotalPrice=LivingDays*price;
	 }
	 else if(OutHour>=12){
       TotalPrice=LivingDays*price+price/2;
	 }
	 else
		 TotalPrice=LivingDays*price;
     
      if(vip)
        TotalPrice=(TotalPrice+xiaofei1*10+xiaofei2*15+xiaofei3*50)*0.8;
    else
        TotalPrice=(TotalPrice+xiaofei1*10+xiaofei2*15+xiaofei3*50);
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
int CRoom::Getprebook(){
	return prebook;
}
void CRoom::setprebook(int pb){
	prebook=pb;
}
void CRoom::Setbookhour(int bh){
	bookhour=bh;
}
int CRoom::Getbookhour(void){
	return bookhour;

}
int CRoom::Getbookday(void){
	return bookday;
}
void CRoom::Setbookday(int bd){
	bookday=bd;
}