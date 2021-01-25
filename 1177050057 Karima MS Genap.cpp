#include<iostream>
using namespace std;

	int k,t,i,j,l,x,urutan,m,pilihan,cari;
	int angka[100];
	int key,pilih;
	
	int h,b[100],lanjutan,temp,loc,min;
	
float sorting()
{
		
		cout<<"Bilangan Sebelum Di Urutkan: ";
		for(h=1;h<=k;h++)
		{
				cout<<" "<<b[h];
		}		

		marwah:
		cout<<"\n1.Ascending"<<endl;
		cout<<"2.Descending"<<endl;
		cin>>pilihan;
		if(pilihan==1)
		{

	
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
		humam:
		cout<<"back to menu/Keluar?(1/0)";
		cin>>lanjutan;
	
		if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		
		else if(lanjutan<0||lanjutan>2)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto humam;
		}
	}
		
		
		
		else if(pilihan==2)
		{
			{

	
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
		for(h=1;h<=k;h--)
		{
		cout<<" "<<b[h];
		}
	}
		cout<<"back to menu/Keluar?(1/0)";
		cin>>lanjutan;
	
		if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		
		else if(lanjutan<0||lanjutan>2)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto humam;
		}
}
	}

float searching()
{
	int awal;
	int tengah;
	int akhir;
		awal=0;
		akhir=k-1;
		tengah=(awal+akhir)/2;	
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
		
		cout<<"\nAngka yang ingin dicari : ";
		cin>>cari;
		
			if (awal<=akhir)
		{
			awal=tengah-1;
			tengah=(awal+akhir)/2;
		}
		else if(awal==cari)
		{
			cout<<"Angka yang dicari terdapat dalam indeks ke-"<<tengah<<endl;
		}
		
		else
		{
			cout<<"Angka yang anda cari tadak ditemukan di array"<<endl;
		}
		
		uas:
		cout<<"back to menu/Keluar?(1/0)";
		cin>>lanjutan;
		if (lanjutan==0)
		{
			cout<<"========Terimakasih=========="<<endl;
		}
		else if(lanjutan<0||lanjutan>1)
		{
			cout<<"Masukan Pilihan Yang benar:))";
			goto uas;
		}
}
		

main()
{

	
	cout<<"===============PROGRAM UAS================"<<endl;
	cout<<"=================KARIMA==================="<<endl;
	
	cout<<"\n\nJumlah Angka Yang Ingin Diurutkan : ";
	cin>>k;
	for(h=1;h<=k;h++)
	{
		cout<<"Bilangan:";
		cin>>b[h];	
	}
	mima:
	cout<<"\n\n======MENU======="<<endl;
	cout<<"1.Searching"<<endl;
	cout<<"2.Sorting"<<endl;

	cout<<" Mau pilih yang mana?"<<endl;
	cin>>pilih;
	
	if(pilih==1)
	{
		searching();
	}
	else if (pilih==2)
	{
		sorting();
	}
	else if(pilihan<1||pilihan>2)
		{
			cout<<"Please Masukan angka Yang benar:(";
			goto mima;
		}
	}
	
	

		

