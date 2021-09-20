#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()

{
    int a, t, sm, k;


    cout<<" Penghitungan Sisi Miring dan Keliling pada Segitiga Siku Siku\n "<< endl;


    cout<<" Masukkan Alas Segitiga (a) = ";
    cin>>a;
    cout<<" Masukkan Tinggi Segitiga (b) = ";
    cin>>t;
    cout<<endl;

    sm=sqrt((a*a)+(t*t));
    cout<<" \nSisi Miring Segitiga = "<< sm << endl;
    k=a+t+sm;
    cout<<" \nKeliling Segitiga = "<< k << endl;



return 0;

}
