#pragma once
#include "stdafx.h"
#include <string>
using namespace std;

class CCustomer
{  
   public:
	   string Name;
	   string Sex;
	   string Workplace;
       int  Age;
	   string ID;
	   string City;
       int Vip;
	   string livID;
   public:

	 CCustomer(void);
	~CCustomer(void);
	void Initiall(void);
     string GetName(void);
	 string GetSex(void);
	 string GetWorkplace(void);
     int GetAge(void);
	 string GetID(void);
	 string GetCity(void);
     int GetVip(void);
	 void SetVip(int vip);
	 void SetName(string name);
	 void SetSex (string sex);
	 void SetAge(int age);
	 void SetID(string id);
	 void SetWorkplace(string workplace);
	 void SetCity(string city);
	 string GetLivID(void);
	 void SetLivID(string id);
	 
};
