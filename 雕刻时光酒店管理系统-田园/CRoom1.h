#pragma once
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include "Customer.h"

using namespace std;

class CRoom
{
private:
     //����һϵ�б���������ı�׼�۸�
     int price;
     string RoomClass;//���������
     string RoomID;//�����
	 CCustomer Customer1;//����1
	/* CCustomer*Customer2;//����2*/ 
     bool EmptyRoom;//�ж��Ƿ�Ϊ�շ�
     int LivingDays;//��ס����
     double TotalPrice;//�ܵķ���
	 int InDayth;
     int InHour;
	 int OutDayth;
	 int OutHour;

public:
     CRoom(void) ;
     ~CRoom(void);
    void SetRoomID(string No);//���÷����
	string GetRoomID(void);//��÷���
    void SetRoomClass(string Style);//���÷�������
    string GetRoomClass(void);//��÷�������
    void SetPrice(int Price);//���÷����׼�۸�
    int GetPrice(void);//��ȡ��׼�۸�
	void SetCustomer1(string name,int age,string id,string wp,string sex,string city,bool vip);//���÷���Ŀ���1
    CCustomer *GetCustomer1(void);//��ȡ����1
  //  void SetCustomer2(CCustomer cus22);//���÷���Ŀ���2
    void SetEmptyRoom(bool);//���ÿշ�����bool GetEmptyRoom(void);//����Ƿ���ס��Ϣ
	bool GetEmptyRoom(void);
   int GetLivingDays(void);//�����סʱ��
    void SetLivingDays(int i) ;//������סʱ��

   // CCustomer  GetCustomer2(void);//��ȡ����2
   double GetTotalPrice(bool);//�����Ƿ���vip �û������ܵ����ѽ��
  // void SetTotalPrice(double pri);
    void ADDCalDays();
	int GetInDayth();
    void SetInDayth(int Indayth);
	int GetInhour();
	void SetInhour(int inhour);
	int GetOutDayth();
	void SetOutDayth(int outdayth);
	int GetOuthour();
	void SetOuthour(int outhour);
    

};
