#include<iostream>
using namespace std;
main()
{
	int kar,tahun,hari,sms[100],bonus,jumlah,total;
	
	cout<<"======================================================="<<endl;
	cout<<"====================CEK BONUS=========================="<<endl;
	awal:
	cout<<"Lama pemakaian kartu=";
	cin>>tahun;
	
	if(tahun==1)
	{
		bonus=20;
	}
	else if(tahun==2)
	{
		bonus=35;
	}
		else if(tahun==3)
	{
		bonus=60;
	}
		else if(tahun>3)
	{
		bonus=100;
	}
		else
	{
		cout<<"berapa tahun?";
		goto awal;
	}
	
	cout<<"jumlah hari mengirim sms=";
	cin>>hari;
	
	for(kar=1;kar<=hari;kar++)
	{
		cout<<"hari ke-"<<kar<<"  ";
		cin>>sms[kar];
		jumlah+=sms[kar];
	}
	
	total=bonus-jumlah;
	cout<<"Total sms yg tersisa="<<total<<endl;
	
}
