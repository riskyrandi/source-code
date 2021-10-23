//Program Menghitung Berat Badan IDEAL

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Nama        : Risky Yuniar Afarandi
NIU         : 473450
Kelompok    : Bitonic
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

#include<iostream>
#define min 18.5

using namespace std;
const double maks = 24.9;

int main()
{
    int bb[20];
    string nama;
    int i,status,u,bmi,bmin,bmaks,t=0;
    float brtrata,tb;
    char olahraga;
    
    cout<<"Program Menghitung Berat Badan IDEAL \n";
    cout<<"Masukkan Berat Anda: \n";
    for(i=1;i<=2;i++)
    {
        cout<<"Berat Badan Orang ke- "<<i<<" = "; cin>>bb[i];
        cout<<"Masukkan Nama            : ";cin>>nama;
        cout<<"Masukkan Tinggi(meter)   : ";cin>>tb;
        cout<<"Masukkan Usia            : ";cin>>u;
        cout<<"__________________________________\n";
        cout<<"Jenis olahraga yang Anda lakukan :\n";
        cout<<"1.Futsal\n";
        cout<<"2.Jogging\n";
        cout<<"3.Gym\n";
        cout<<"4.Bersepeda\n";
        cout<<"5.Lain-lain\n";
        cout<<"__________________________________\n";
        cout<<"Masukkan kode jenis olahraga Anda: ";
        cin>>olahraga;
        bmi = bb[i]/(tb*tb);
        cout<<"\nBMI Anda adalah          : "<<bmi<<endl;
        cout<<endl;
        
    if (bmi<=18.5) {
        cout<<"Keterangan : Anda Kekurangan Berat Badan"<<endl;
    } else if (bmi >18.5 && bmi <=25){
        cout<<"Keterangan : Berat Badan Anda IDEAL"<<endl;
    } else if (bmi >25 && bmi <=30){
        cout<<"Keterangan : Anda Kelebihan Berat Badan"<<endl;
    } else {
        cout<<"Keterangan : Anda Obesitas"<<endl;
    }
    
    cout<<endl;
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"         PATOKAN MINIMAL & MAKSIMAL          "<<endl;
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"Tinggi Badan (meter)         = "<<tb<<endl;
    bmin = min*tb*tb;
    cout<<"Berat Badan Ideal minimal    = "<<bmin<<endl;
    bmaks = maks*tb*tb;
    cout<<"Berat Badan Ideal maksimal   = "<<bmaks<<endl;
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<endl;
    }
    do{
        cout<<"Terima kasih dan sehat selalu !!!"<<endl;
        t++;
    }while (t<2);
    return 0;
}