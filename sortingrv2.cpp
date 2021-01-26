#include<iostream>
using namespace std;
main()
{
	int k,t,i,j,l,urutan,m,pilihan;
	int h,b[100],lanjutan,temp,loc,min;
	cout<<"Jumlah Angka Yang Ingin Diurutkan : ";
	cin>>k;
	
	for(h=1;h<=k;h++)
	{
		cout<<"Bilangan:";
		cin>>b[h];	
	}
	
		cout<<"Bilangan Sebelum Di Urutkan: ";
		for(h=1;h<=k;h++)
		{
				cout<<" "<<b[h];
		}		
	ima:
	cout<<"\nPilih Pengurutan:"<<endl;
	cout<<"1.Insertion Sort"<<endl;
	cout<<"2.Bubble Sort"<<endl;
	cout<<"3.Selection Sort"<<endl;
	cout<<"Pilihan: ";
	cin>>urutan;
	
	if(urutan==1)
	{
		icham:
		cout<<"1.Ascending"<<endl;
		cout<<"2.Descending"<<endl;
		cin>>pilihan;
		
		if(pilihan==1)
		{
				for(int i=1; i<=k; i++)
			{
						for(int j=1; j<=i; j++){
							if(b[i]>b[j]){
          						t=b[i];
								b[i]=b[j];
								b[j]=t;
							}
						}
					}
					
	
			
		cout<<"\nBilanganSetelah Diurutkan:";
		for(h=k;h>=1;h--)
		{
		cout<<" "<<b[h];
		}
		
		humam:
		cout<<"Lanjut/Keluar?(1/0)";
		cin>>lanjutan;
		if(lanjutan==1)
		{
			goto ima;
		}
		else if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		else if(lanjutan<0||lanjutan>1)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto humam;
		}
	
		}
		else if(pilihan==2)
		{
		
			for(int i=1; i<=k; i++)
			{
						for(int j=1; j<=i; j++){
							if(b[i]>b[j]){
          						t=b[i];
								b[i]=b[j];
								b[j]=t;
							}
						}
					}
					
	
			
		cout<<"\nBilanganSetelah Diurutkan:";
		for(h=1;h<=k;h++)
		{
		cout<<" "<<b[h];
		}
		
		aa:
		cout<<"Lanjut/Keluar?(1/0)";
		cin>>lanjutan;
		if(lanjutan==1)
		{
			goto ima;
		}
		else if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		else if(lanjutan<0||lanjutan>1)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto aa;
		}
	}
}
	
	else if(urutan==2)
	{
		marwah:
		cout<<"1.Ascending"<<endl;
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
		
		cout<<"Lanjut/Keluar?(1/0)";
		cin>>lanjutan;
		if(lanjutan==1)
		{
			goto ima;
		}
		else if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		else if(lanjutan<0||lanjutan>1)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto humam;
		}
		
		}
		
		else if(pilihan==2)
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
		for(h=k;h>=1;h--)
		{
		cout<<" "<<b[h];
		}
		
		cout<<"Lanjut/Keluar?(1/0)";
		cin>>lanjutan;
		if(lanjutan==1)
		{
			goto ima;
		}
		else if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		else if(lanjutan<0||lanjutan>1)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto humam;
		}
		}
			
		else if(pilihan<1||pilihan>2)
		{
			cout<<"Please Masukan angka Yang benar:(";
			goto marwah;
		}
	}
	
	else if(urutan==3)
	{
		for(i>0;i=k-1;i--)
   		{
   			min=b[i];
        	loc=i;
       		 for(j=i-1;j>=0;j--)
        	{
           		 if(b[j]>b[loc])
            	{
            		min=b[j];
                	loc=j;
           		 }
        	}
 
        temp=b[i];
        b[i]=b[loc];
        b[loc]=temp;

		}
		
	
		cout<<"\nBilanganSetelah Diurutkan:";
		
		for(h=0;h<k;h++)
		{
		cout<<" "<<b[h];
		}
		
		cout<<"Lanjut/Keluar?(1/0)";
		cin>>lanjutan;
		if(lanjutan==1)
		{
			goto ima;
		}
		else if(lanjutan==0)
		{
			cout<<"Terimakasih"<<endl;
			
		}
		else if(lanjutan<0||lanjutan>1)
		{
			cout<<"Masukan pilihan yang benar:)";
			goto humam;
		}
	}
	
	else if(urutan<=0||urutan>=4)
	{
		cout<<"Masukan Bilangan Yang Benar!!!";
		goto ima;
	}
	
}
		

