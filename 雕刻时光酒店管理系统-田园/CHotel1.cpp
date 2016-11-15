#include "stdafx.h"
#include "CRoom.h"
#include "Customer.h"
#include"CHotel.h"
#include<cstdlib>
#include<cstdio>
#include<iostream>


//构造函数，构造一个宾馆的类，初始化宾馆，设置22个房间，已入住房间为
CHotel::CHotel(void)
	{   
		
		TotalNum=22;//总的房间数为22
		RegisterNum=0; //已登记的房间为0
		EmptyRoomNum=TotalNum;//空房间数为22
		ExGrand =2;//总统间2间
		Grand =4;//豪华间为4间
		DouNum=8;//标准双人间为8
		SinNum=8;//标准单人间为8
		int count=0;
	    char str[20];
	    RoomArray=new CRoom[TotalNum];//定义一个房间数组，储存房间信息
	   
         int i;
		 for(i=0;i<ExGrand;i++)//0-1  201~202是总统套房
		 {
	 	      RoomArray[i].SetRoomClass("豪华总统套房");
		      RoomArray[i].SetPrice(1000);
             sprintf(str,"%d",i+1);
			   //str=string(i+1);
		      RoomArray[i].SetRoomID(string("20")+string(str));//201~202
		      RoomArray[i].SetLivingDays(0);
		 }
		 count=i+Grand;
		 for(;i<count;i++)//2-5//203到206是豪华房
		 {
			 RoomArray[i].SetRoomClass("豪华房");
			 RoomArray[i].SetPrice(800);
			 sprintf(str,"%d",i+1);
			 RoomArray[i].SetRoomID(string("20")+string(str));//203-206
			 RoomArray[i].SetLivingDays(0);
		 }
		 count=i+SinNum-3;
		 for(;i<count;i++)//6-10 count=11  207到211是标准间
		 {
			 RoomArray[i].SetRoomClass("单人标准房");
			 RoomArray[i].SetPrice(300);
			 RoomArray[i].SetLivingDays(0);
			 if(i<=8){
			 	 sprintf(str,"%d",i+1);
				 RoomArray[i].SetRoomID(string("20")+string(str));//207-209
			 }
			 else{
			     sprintf(str,"%d",i+1);
				 RoomArray[i].SetRoomID(string("2")+string(str));//210~211
			 }
		 }
		 count=i+3;
		 for(;i<count;i++)//11-13 count=14  //101~103是标准间
		 {
			 RoomArray[i].SetRoomClass("普通间");
			 RoomArray[i].SetPrice(100);
			 sprintf(str,"%d",i-10);
			 RoomArray[i].SetRoomID(string("10")+string(str));//101~103
			 RoomArray[i].SetLivingDays(0);
		 }
		 count=i+DouNum;
		 for(;i<count;i++)//14-21 104到111是普通间
		 {
			 RoomArray[i].SetRoomClass("双人标准房");
			 RoomArray[i].SetPrice(100);
			 if(i<=19){
                 sprintf(str,"%d",i-10);
                 RoomArray[i].SetRoomID(string("10")+string(str));//101~103
			 }
			 else{
                sprintf(str,"%d",i-10);
				
                 RoomArray[i].SetRoomID(string("11")+string(str));//101~103
			 }
		 }


    }//
// 返回总的房间数
CHotel::~CHotel(){}
double CHotel::GetTopic(void){
	return topric;
}
int CHotel::GetTotalNum(void){
	return TotalNum;
}
//返回总的单人间的数

int CHotel::GetSinNum(void){
	return SinNum;
}

//返回已入住的房间数
int CHotel::GetRegisterNum(void){
	return RegisterNum;
}
//返回空房间数
int CHotel::GetEmptyRoomNum(void){
	return EmptyRoomNum;
}

//返回豪华房间数
int CHotel:: GetGrand(void){
	return Grand;
}
//返回总统房间数
int CHotel::GetExGrand(void ){
	return ExGrand;
}


//返回标准双人间数
int CHotel:: GetDouNum(void)
{
	return DouNum;
}
	//入住登记

  //入住率
double CHotel::GetRegRate(void)
{
    return  ((double)RegisterNum/(double)TotalNum);
}
//以房号查找所住的房间的下标，如果找到了，返回房间在数组中的下标，否则返回 -1
int CHotel::xb_SearchBylivID(string livid)
{
	int i;
	for(i=0;i<TotalNum;i++){

		if(RoomArray[i].GetRoomID()==livid)
			break;
	}
	if(i<TotalNum)
		return i;
	else 
		return -1;

}
//以姓名查找所住的房间的下标，如果找到了，返回房间在数组中的下标，否则返回 -1
int CHotel:: SearchByName(string name)
{
	int i;
	for(i=0;i<TotalNum;i++){
		
		if(RoomArray[i].GetCustomer1()->GetName()==name/*||RoomArray[i].GetCustomer2()->GetName()==name*/ )
		    break;
	 }
	if(i<TotalNum)
		return i;
	else 
		return -1;

}

//根据房间号查找顾客1，返回第一个顾客类型
CCustomer * CHotel::SearchByRoomID1(string id){
    int i;
	for(i=0;i<TotalNum;i++){

		if(RoomArray[i].GetRoomID()==id)
			break;

	}
	return RoomArray[i].GetCustomer1();

}
//根据房间号查找顾客2，返回第二个顾客类型

/*CCustomer * CHotel::SearchByRoomID2(string id){

    int i;
	for(i=0;i<TotalNum;i++){

		if(RoomArray[i].GetRoomID()==id)
			break;

	}
	return RoomArray[i].GetCustomer2();


}*/ 
/*void CHotel::CalLivDays()
{
	for(int i=0;i<TotalNum;i++){
		if(RoomArray[i].GetEmptyRoom()==true)
           RoomArray[i].ADDCalDays(); 
     
	}
} */ 
CRoom* CHotel::GetRoomArray(){
	return RoomArray;

}
CRoom* CHotel::GetRoom(int xb){
	return &RoomArray[xb];
}


/*CCustomer CHotel::CusCheckIn(int xb){
     
      RoomArray[xb].SetCustomer1()
	
   

}*/ 
void CHotel::FinalCheckIn(string name, int age, string wp, string idlicences,string sex, string city, bool vipyes,string roomid,int Cindayth,int Cinhour)
{   int xb= xb_SearchBylivID(roomid);
    RoomArray[xb].SetCustomer1( name, age, idlicences, wp,sex,  city, vipyes);
    /* if (cus2!=NULL)
    {
		RoomArray[xb].SetCustomer1(cus2);
	 }*/
	 RoomArray[xb].SetInDayth(Cindayth);
     RoomArray[xb].SetInhour(Cinhour);
	 RoomArray[xb].SetEmptyRoom(false);
	 RoomArray[xb].SetLivingDays(0);
	 RegisterNum++;
	 EmptyRoomNum--;
}

void CHotel::FinalCheckOut(string id,int Coutdayth,int Chour){
   int xb=xb_SearchBylivID(id);
   bool yesvip;
   
   yesvip=(RoomArray[xb].GetCustomer1()->GetVip()) ;
   RoomArray[xb].SetOutDayth(Coutdayth)  ;
   RoomArray[xb].SetOuthour(Chour);
   topric= RoomArray[xb].GetTotalPrice(yesvip);

 
   RoomArray[xb].GetCustomer1()->Initiall();
   RoomArray[xb].SetEmptyRoom(true);
   //RoomArray[xb].SetLivingDays(0);

 
   RegisterNum--;
   EmptyRoomNum++;
 
  
}
string CHotel::ReCusNamSeByRoId(string RoId){
	string str;
	str=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetName();
	return str;
}
string CHotel:: ReCusSexSeByRoId(string RoId){
	string str;
	str=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetSex();
	return str;
}
string CHotel::ReCusCitSeByRoId(string RoId){
	string str;
	str=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetCity();
	return str;
}
string CHotel:: ReCusWpSeByRoId(string RoId){
	string str;
	str=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetWorkplace();
	return str;
}
string CHotel::ReCusIdSeByRoId(string RoId){
	string str;
	str=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetID();
	return str;
}
string CHotel::ReCusVipSeByRoId(string RoId){
	bool vipYY;
	vipYY=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetVip();
	if(vipYY)
		return"是";
	else
		return"否";

}
int CHotel::ReCusAgeSeByRoId(string RoId){
	int age;
	age=GetRoom(xb_SearchBylivID(RoId))->GetCustomer1()->GetAge();
	return age;
}
string CHotel::ReRoIdSeByName(string name){
    string idlic;
	
	   idlic=GetRoom(SearchByName(name))->GetRoomID();
   if(SearchByName(name)!=-1)
	   return idlic;
   else 
	   return "没有此人";

	

}
string CHotel::ReRoClasSeByName(string name){
	string RoClass;

	RoClass=GetRoom(SearchByName(name))->GetRoomClass();
	if(SearchByName(name)!=-1)
		return RoClass;
	else 
		return "";
	

}
//int CHotel::ReRoInTimeSeByName(string name);