#include<iostream>
using namespace std;
int main(){
	int t;
	cout<<"Masukan nilai temperatur air : ";cin>>t;
	if (t<= 0)
		cout<<"Benda tersebut berbentuk padat ";
	else if (t>0 && t<100)
		cout<<"Benda tersebut berbentuk cair";
	else 
		cout<<"Benda tersebut adalah berbentuk gas";
	
	return 0;
}
