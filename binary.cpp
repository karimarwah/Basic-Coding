#include<iostream>
using namespace std;
main()
{
	int k,h,i,j,t;
	int b[100];
	int cari;
	
	cout<<"Jumlah Angka Yang Ingin Diurutkan : ";
	cin>>k;
	
	for(h=1;h<=k;h++)
	{
		cout<<"Bilangan:";
		cin>>b[h];	
	}
	
	for(i=0; i<k; i++)
			{
					for(j=1; j<k; j++)
					{
						if(b[j]>b[j+1])
						{
							t=b[j];
							b[j]=b[j+1];
							b[j+1]=t;
						}
					}
			}
	
		cout<<"\nBilanganSetelah Diurutkan:";
		for(h=1;h<=k;h++)
		{
		cout<<" "<<b[h];
		}
		h=i;
		cout<<"Angka yang ingin dicari : ";
		cin>>cari;
		
		for(i=0; i<=k; i++)
		{
			if(cari==b[i])
			{
				cout<<"Ada di indeks ke-"<<i-1<<endl;
			}
		}
}
