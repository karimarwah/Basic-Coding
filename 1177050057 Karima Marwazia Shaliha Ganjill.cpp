//SOAL!!!!
//ada 2 orang anak berumur 6 th bermain nama hari,anak pertama bernama anakku sedangkan yg kedua 
//anaknya.Annaku menyebutkan jumlah hari dan hari awal lau 
//anak keduanya menyebutkan harsi setelahnya hari awal sampai jumlah hari yang disebutkan s anakku
//input
//baris perama d isi jumlah hari N baris kedua oleh hari awal
//output
//setelah hari awal sampai hari akhir sebanyak jmlah hari yang diinputkan


#include <iostream>
using namespace std;
main()
{
    int hari;
    int k,h;
    
    string mulai;
    
    cout<<"\t\tPROGRAM"<<endl;
    cout<<"\t\tHARI-HARI"<<endl;
    cout<<"===============================\n\n"<<endl;
    cout<<"Anakku said"<<endl;
    cout<<"Jumlah hari=";
    cin>>hari;
    
    ima:
    cout<<"Anaknya said"<<endl;    
	cout<<"Hari awal=";
    cin>>mulai;

    if(mulai=="senin" || mulai=="Senin"||mulai=="SENIN")
	{
        k=1;
    }
    else if(mulai=="selasa" || mulai=="Selasa"||mulai=="SELASA")
	{
        k=2;
    }
    else if(mulai=="rabu" || mulai=="Rabu"||mulai=="RABU")
	{
        k=3;
    }
    else if(mulai=="kamis" || mulai=="Kamis"||mulai=="KAMIS")
	{
        k=4;
    }
    else if(mulai=="jumat" || mulai=="Jumat"||mulai=="JUMAT")
	{
        k=5;
    }
    else if(mulai=="sabtu" || mulai=="Sabtu"||mulai=="SABTU")
	{
        k=6;
    }
    else if(mulai=="minggu" || mulai=="Minggu"||mulai=="MINGGU")
	{
        k=7;
    }
    else
	{
		cout<<"Masukan Hari yang Benar!!!"<<endl;
        goto ima;
    }
    
    for(h=1;h<=hari;h++)
    {
    
        if(k==1)
		{
            cout<<"Selasa\n";
        }
        if(k==2)
		{
            cout<<"Rabu\n";
        }
        if(k==3)
		{
            cout<<"Kamis\n";
        }
        if(k==4)
		{
            cout<<"Jumat\n";
        }
        if(k==5)
		{
            cout<<"Sabtu\n";
        }
        if(k==6)
		{
            cout<<"Minggu\n";
        }
        if(k==7)
		{
            cout<<"Senin\n";
        }
        
        k++;
        if(k>7)
        {
        	k-=7;
   		}
    }    
}
