#include<iostream>
using namespace std;
main(){
	
	int x,a[100],t;
	
	cout<<"Bubble Sort"<<endl;
	cout<<"Masukan banyaknya bilangan : ";		cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"Masukan data ke-"<<i<<" : ";		cin>>a[i];
	}
	for(int j=0; j<x; j++){
		for(int k=1; k<x; k++){
			if(a[k]>a[k+1]){
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	cout<<endl<<"Data setelah diurutkan descending : ";
	for(int j=1; j<=x; j++){
		cout<<" "<<a[j];
	}
	cout<<endl<<"Data setelah diurutkan ascending : ";
	for(int j=x; j>=1; j--){
		cout<<" "<<a[j];
	}
}
