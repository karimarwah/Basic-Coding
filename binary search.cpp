#include<iostream>
using namespace std;
main()
{
	int angka[10],key;
	int x,t,k;
	int i,j;
	
	cout<<"Masukan banyaknya bilangan : ";
	cin>>x;
	
	
	for(i=1; i<=x; i++)
	{
		cout<<"Masukan data ke-"<<i<<" : ";
		cin>>angka[i];
	}
	for(int j=0; j<x; j++){
		for(int k=1; k<x; k++)
		{
			if(angka[k]>angka[k+1]){
				t=angka[k];
				angka[k]=angka[k+1];
				angka[k+1]=t;
			}
		}
	}
	cout<<endl<<"Data setelah  : ";
	for(int j=1; j<=x; j++)
	{
		cout<<" "<<angka[j];
		
	}
	x=k;
	cout<<"\nMasukan Data yang dicari= ";
	cin>>key;
		for(i=0;i<x;i++)
	{
		if(key==angka[i])
		{
			cout<<"Indeks ke-"<<i<<endl;
		}
	}
	
}
