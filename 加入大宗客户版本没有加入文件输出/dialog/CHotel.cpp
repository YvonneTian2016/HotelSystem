#include "stdafx.h"
#include "CRoom.h"
#include "Customer.h"
#include"CHotel.h"
#include<cstdlib>
#include<cstdio>
#include<fstream>


//���캯��������һ�����ݵ��࣬��ʼ�����ݣ�����22�����䣬����ס����Ϊ
CHotel::CHotel(void)
	{   
		//sitRec.open("hotrec.txt",ios::app);
		TotalNum=22;//�ܵķ�����Ϊ22
		RegisterNum=0; //�ѵǼǵķ���Ϊ0
		EmptyRoomNum=TotalNum;//�շ�����Ϊ22
		ExGrand =2;//��ͳ��2��
		Grand =4;//������Ϊ4��
		DouNum=8;//��׼˫�˼�Ϊ8
		SinNum=8;//��׼���˼�Ϊ8
		topric=0.0;
	    ttopric=0.0;
		ExGrprice=1000;
		 Graprice=800;
		 stdprice=300;
		 putong=200;
		int count=0;
	    char str[20];

	    RoomArray=new CRoom[TotalNum];//����һ���������飬���淿����Ϣ
	   
         int i;
		 for(i=0;i<ExGrand;i++)//0-1  201~202����ͳ�׷�
		 {
	 	      RoomArray[i].SetRoomClass("��ͳ�׷�");
		      RoomArray[i].SetPrice(1000);
             sprintf(str,"%d",i+1);
			   //str=string(i+1);
		      RoomArray[i].SetRoomID(string("20")+string(str));//201~202
		      RoomArray[i].SetLivingDays(0);
			  RoomArray[i].SetEmptyRoom(1);
			  RoomArray[i].setprebook(0);
		 }

		 count=i+Grand;
		 for(;i<count;i++)//2-5//203��206�Ǻ�����
		 {
			 RoomArray[i].SetRoomClass("������");
			 RoomArray[i].SetPrice(800);
			 sprintf(str,"%d",i+1);
			 RoomArray[i].SetRoomID(string("20")+string(str));//203-206
			 RoomArray[i].SetLivingDays(0);
			  RoomArray[i].SetEmptyRoom(1);
			   RoomArray[i].setprebook(0);
		 }
		 count=i+SinNum-3;
		 for(;i<count;i++)//6-10 count=11  207��211�Ǳ�׼��
		 {
			 RoomArray[i].SetRoomClass("��׼��");
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
		 for(;i<count;i++)//11-13 count=14  //101~103�Ǳ�׼��
		 {
			 RoomArray[i].SetRoomClass("��ͨ��");
			 RoomArray[i].SetPrice(100);
			 sprintf(str,"%d",i-10);
			 RoomArray[i].SetRoomID(string("10")+string(str));//101~103
			 RoomArray[i].SetLivingDays(0);
			  RoomArray[i].SetEmptyRoom(1);
			   RoomArray[i].setprebook(0);
		 }
		 count=i+DouNum;
		 for(;i<count;i++)//14-21 104��111����ͨ��
		 {
			 RoomArray[i].SetRoomClass("��ͨ��");
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
// �����ܵķ�����
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
//�����ܵĵ��˼����

int CHotel::GetSinNum(void){
	return SinNum;
}

//��������ס�ķ�����
int CHotel::GetRegisterNum(void){
	return RegisterNum;
}
//���ؿշ�����
int CHotel::GetEmptyRoomNum(void){
	return EmptyRoomNum;
}

//���غ���������
int CHotel:: GetGrand(void){
	return Grand;
}
//������ͳ������
int CHotel::GetExGrand(void ){
	return ExGrand;
}


//���ر�׼˫�˼���
int CHotel:: GetDouNum(void)
{
	return DouNum;
}
	//��ס�Ǽ�

  //��ס��
double CHotel::GetRegRate(void)
{
    return  ((double)RegisterNum/(double)TotalNum);
}
//�Է��Ų�����ס�ķ�����±꣬����ҵ��ˣ����ط����������е��±꣬���򷵻� -1
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
//������������ס�ķ�����±꣬����ҵ��ˣ����ط����������е��±꣬���򷵻� -1
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

//���ݷ���Ų��ҹ˿�1�����ص�һ���˿�����
CCustomer * CHotel::SearchByRoomID1(string id){
    int i;
	for(i=0;i<TotalNum;i++){

		if(RoomArray[i].GetRoomID()==id)
			break;

	}
	return RoomArray[i].GetCustomer1();

}
//���ݷ���Ų��ҹ˿�2�����صڶ����˿�����

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
		return"��";
	else
		return"��";

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
int CHotel::JudpreTobook(int hour,int day,string roomid){//���Ƿ��ܹ�ԤԼ������JudSucpreBook����
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
   else//����ԤԼ
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
	
    
	if(((p->GetEmptyRoom())&&p->Getprebook())&&pp&&(qq||zz))//���ԤԼʱ����Ч��ֱ��ת��ס������Suc
        return 1;
	else if(((p->GetEmptyRoom()) &&(!p->Getprebook()))||((p->GetEmptyRoom())&&(p->Getprebook())&&(!zz&&!qq)))
	{return 2;
	
	}
	else
	{return 0; }  
			 
}			 
			  
			 
			 
		//�����䱾��Ϊ��ʱ������checkin����//else if(p->GetEmptyRoom()&&(!p->Getprebook())&&((!zz&&qq)||(zz&&!qq)))	
	
	 



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