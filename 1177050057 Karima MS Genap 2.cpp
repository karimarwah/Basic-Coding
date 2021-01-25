#include<iostream>
using namespace std;
main()
{
	int h;
	int i;
	int j;
	int t;
	int cari;
	char b[13]={'a','a','b','b','a','a','b','a','b','a','b','a','b'};
	
	
		for(i=1; i<=13; i++)
			{
						for(j=1; j<=i; j++)
						{
							if(b[i]>b[j]){
          						t=b[i];
								b[i]=b[j];
								b[j]=t;
							}
						}
			}
					
	
			
		cout<<"\nHuruf Setelah Diurutkan Secara Ascending:";
		for(h=13;h>=1;h--)
		{
		cout<<" "<<b[h];
		}
}
//Karima Marwazia GENAP
