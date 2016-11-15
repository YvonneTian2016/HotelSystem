#include "stdafx.h"
#include "Customer.h"

CCustomer::CCustomer(void)
{
	
		Name="";
		Sex="";
		Workplace="";
		Age=0;
		ID="";
		City="";
		Vip=0;

}

CCustomer::~CCustomer(void)
{

}
 void CCustomer::Initiall(void){

	Name="";
	Sex="";
	Workplace="";
	Age = 0;
	ID="";
	City="";
	Vip=0;


}
void CCustomer:: SetName(string name){
	Name =name;
}

string CCustomer::GetName(void)
{
	return Name;
}
int CCustomer:: GetAge(void){
	return Age;
}

void CCustomer::SetAge(int age){
	Age=age;

}
void CCustomer::SetSex (string sex){
   Sex=sex;
}
string CCustomer::GetSex(void){
	return Sex;
}
void CCustomer::SetID(string id)
{
    ID=id;
}
string CCustomer::GetID(void)
{
	 return ID;
}
void CCustomer:: SetWorkplace(string workplace)
{
	Workplace=workplace;
}
string CCustomer:: GetWorkplace(void)
{
	return Workplace;
}
void CCustomer::SetCity(string city)
{
  City=city;
}
string CCustomer::GetCity(void)
{
	 return City;
}
int CCustomer:: GetVip(void)
{
	return Vip;
}
void CCustomer::SetVip(int vip){
	Vip=vip;
}

string CCustomer:: GetLivID(void){
    return livID;
}
void CCustomer::SetLivID(string id){
	livID=id;
}