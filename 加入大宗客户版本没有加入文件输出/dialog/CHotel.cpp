#include "stdafx.h"
#include "CRoom.h"
#include "Customer.h"
#include"CHotel.h"
#include<cstdlib>
#include<cstdio>
#include<fstream>


//构造函数，构造一个宾馆的类，初始化宾馆，设置22个房间，已入住房间为
CHotel::CHotel(void)
	{   
		//sitRec.open("hotrec.txt",ios::app);
		TotalNum=22;//总的房间数为22
		RegisterNum=0; //已登记的房间为0
		EmptyRoomNum=TotalNum;//空房间数为22
		ExGrand =2;//总统间2间
		Grand =4;//豪华间为4间
		DouNum=8;//标准双人间为8
		SinNum=8;//标准单人间为8
		topric=0.0;
	    ttopric=0.0;
		ExGrprice=1000;
		 Graprice=800;
		 stdprice=300;
		 putong=200;
		int count=0;
	    char str[20];

	    RoomArray=new CRoom[TotalNum];//定义一个房间数组，储存房间信息
	   
         int i;
		 for(i=0;i<ExGrand;i++)//0-1  201~202是总统套房
		 {
	 	      RoomArray[i].SetRoomClass("总统套房");
		      RoomArray[i].SetPrice(1000);
             sprintf(str,"%d",i+1);
			   //str=string(i+1);
		      RoomArray[i].SetRoomID(string("20")+string(str));//201~202
		      RoomArray[i].SetLivingDays(0);
			  RoomArray[i].SetEmptyRoom(1);
			  RoomArray[i].setprebook(0);
		 }

		 count=i+Grand;
		 for(;i<count;i++)//2-5//203到206是豪华房
		 {
			 RoomArray[i].SetRoomClass("豪华间");
			 RoomArray[i].SetPrice(800);
			 sprintf(str,"%d",i+1);
			 RoomArray[i].SetRoomID(string("20")+string(str));//203-206
			 RoomArray[i].SetLivingDays(0);
			  RoomArray[i].SetEmptyRoom(1);
			   RoomArray[i].setprebook(0);
		 }
		 count=i+SinNum-3;
		 for(;i<count;i++)//6-10 count=11  207到211是标准间
		 {
			 RoomArray[i].SetRoomClass("标准间");
			 RoomArray[i].SetPrice(300);
			 RoomArray[i].SetLivingDays(0);
			  RoomArray[i].SetEmptyRoom(1);
			   RoomArray[i].setprebook(0);
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
			  RoomArray[i].SetEmptyRoom(1);
			   RoomArray[i].setprebook(0);
		 }
		 count=i+DouNum;
		 for(;i<count;i++)//14-21 104到111是普通间
		 {
			 RoomArray[i].SetRoomClass("普通间");
			 RoomArray[i].SetPrice(100);
			  RoomArray[i].SetEmptyRoom(1);
			  RoomArray[i].SetLivingDays(0);
			   RoomArray[i].setprebook(0);
			 if(i<=19){
                 sprintf(str,"%d",i-10);
                 RoomArray[i].SetRoomID(string("10")+string(str));//101~103
			 }
			 else{
                 sprintf(str,"%d",i-20);
				
                 RoomArray[i].SetRoomID(string("11")+string(str));//101~103
			 }
		 }


    }//
void CHotel::SetExGrprice(int pr){
	  ExGrprice=pr;
}
void CHotel::SetGraprice(int pr ){
     Graprice=pr;
}
void CHotel::Setstdprice(int pr){
	stdprice=pr;
}
void CHotel::Setputong(int pr){
	putong=pr;
}
int CHotel::GetExGrprice(void){
	return ExGrprice;
}
int CHotel::GetGraprice(void){
	return Graprice;
}
int CHotel::Getstdprice(void){
	 return stdprice;
}
int CHotel::Getputong(void){
	return putong;
}
void CHotel::setprice(void){
      
	int i;
	for (i=0;i<2;i++)
          RoomArray[i].SetPrice(ExGrprice);
      
	  for(i=2;i<6;i++)
		   RoomArray[i].SetPrice(Graprice);
	  for (i=6;i<14;i++)
	      RoomArray[i].SetPrice(stdprice);
	  for (i=14;i<22;i++)
		   RoomArray[i].SetPrice(putong);
}
// 返回总的房间数
CHotel::~CHotel(){
//sitRec.close();
}
double CHotel::GetTopic(void){
	return topric;

}
double CHotel::Getttopric(void){

	return ttopric;
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
 
void CHotel::FinalCheckIn(string name, int age, string wp, string idlicences,string sex, string city, int vipyes,string roomid,int Cindayth,int Cinhour)
{   int xb= xb_SearchBylivID(roomid);
    RoomArray[xb].SetCustomer1( name,age, idlicences, wp,sex,city, vipyes);
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
        // sitRec<<name;
}

void CHotel::FinalCheckOut(string id,int Coutdayth,int Chour){
   int xb=xb_SearchBylivID(id);
   int yesvip;
   int a=RoomArray[xb].geta();
   int b=RoomArray[xb].getb();
   int c=RoomArray[xb].getcc();
   yesvip=(RoomArray[xb].GetCustomer1()->GetVip()) ;
   RoomArray[xb].SetOutDayth(Coutdayth)  ;
   RoomArray[xb].SetOuthour(Chour);
   topric= RoomArray[xb].GetTotalPrice(yesvip,a,b,c);
   ttopric=topric+ ttopric;

   RoomArray[xb].GetCustomer1()->Initiall();
   RoomArray[xb].SetEmptyRoom(1);
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
	int vipYY;
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
	return idlic;
 

	

}
string CHotel::ReRoClasSeByName(string name){
	string RoClass;

	RoClass=GetRoom(SearchByName(name))->GetRoomClass();
	
		return RoClass;
	
	

}
int CHotel::JudpreTobook(int hour,int day,string roomid){//看是否能够预约，调用JudSucpreBook函数
  //   if((name==GetRoom(xb_SearchBylivID(roomid))->GetCustomer1()->GetName())&&
	CRoom* p=GetRoom(xb_SearchBylivID(roomid));
	int qq=0;
	int zz=0;
	
    if(p->GetEmptyRoom()&&!p->Getprebook())
	   return 1;
	else if(p->Getprebook())
	{  if((day-p->Getbookday()==0)&&(hour-p->Getbookhour()>=0))
	      qq=1;

    	if((day-p->Getbookday()==1)&&(hour-(p->Getbookhour())<=0))
		  zz=1;
	   if((!qq&&zz||zz&&!qq))//chekin
	   {  p->setprebook(0);
	      
            return 2;
	   }
		else
			return 0;
	}
   else//不能预约
	   return 0;


}
void    CHotel::JudSucpreBook(string name, int age, string wp, string idlicences, string sex,string city, bool vipyes,int hour,int day,string roomid ){
  CRoom* p=GetRoom(xb_SearchBylivID(roomid));
 
  p->SetCustomer1(name,age,idlicences,wp,sex,city,vipyes);
  p->setprebook(1);
  p->Setbookday(day);
  p->Setbookhour(hour);     

}
int   CHotel::JudbookToRegister(string names,int days,int hours,string roomid)
{
     CRoom *p;
	 p=GetRoom(xb_SearchBylivID(roomid));
    int pp=0,qq=0,zz=0;
	
	
	if (p->Getprebook()&&(names==p->GetCustomer1()->GetName()))
		pp=1;

     if(p->Getprebook()&&(days-(p->Getbookday())==0)&&(hours-(p->Getbookhour())>=0))
		qq=1;
	 if(p->Getprebook()&&(days-(p->Getbookday())==1)&&(hours-(p->Getbookhour())<=0))
		zz=1;
	
    
	if(((p->GetEmptyRoom())&&p->Getprebook())&&pp&&(qq||zz))//如果预约时间有效，直接转入住，调用Suc
        return 1;
	else if(((p->GetEmptyRoom()) &&(!p->Getprebook()))||((p->GetEmptyRoom())&&(p->Getprebook())&&(!zz&&!qq)))
	{return 2;
	
	}
	else
	{return 0; }  
			 
}			 
			  
			 
			 
		//当房间本身为空时，调用checkin函数//else if(p->GetEmptyRoom()&&(!p->Getprebook())&&((!zz&&qq)||(zz&&!qq)))	
	
	 



void CHotel::SucToRegi(int hours ,int days,string roomid){
    CRoom * p=GetRoom(xb_SearchBylivID(roomid));
	p->setprebook(0);
	p->SetEmptyRoom(false);
	p->SetInDayth(days);
	p->SetInhour(hours);

}
/*void CHotel::DaZongRuZhu(string GroupName,int grouphour,int groupdayth){
	int i;
	for(i=0;i<TotalNum;i++)
	{
		if (tuandui[i])
		{
            RoomArray[i].SetCustomer1(GroupName,0,"","","","",1);
			RoomArray[i].SetEmptyRoom(0);
			RoomArray[i].seta(0);
            RoomArray[i].setb(0);
			RoomArray[i].setc(0);
			RoomArray[i].SetInDayth(groupdayth);
			RoomArray[i].SetInhour(grouphour);
			RegisterNum++;
			EmptyRoomNum--;
		}

	}

}*/ 
int CHotel:: DaZongTuiFang(string GroupName,int grouphour,int groupdayth){
	int fangjianshu=0,a,b,c;
	topric=0;
	for (int i=0;i<TotalNum;i++)
	{  
       if (RoomArray[i].GetCustomer1()->GetName()==GroupName)
       {   
		    a=RoomArray[i].geta();
		    b=RoomArray[i].getb();
		    c=RoomArray[i].getcc();
		    RoomArray[i].SetOutDayth(groupdayth)  ;
		    RoomArray[i].SetOuthour(grouphour);
		    topric=topric+ RoomArray[i].GetTotalPrice(1,a,b,c);
		    RoomArray[i].GetCustomer1()->Initiall();
		    RoomArray[i].SetEmptyRoom(1);
			fangjianshu++;
			RegisterNum--;
			EmptyRoomNum++;
       }
  
	}
	
	ttopric=ttopric+topric;
	return fangjianshu;



}