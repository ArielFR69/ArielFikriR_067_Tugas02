#include <iostream>
#include <conio.h>
#include <math.h>

 using namespace std;


int main ()

{

float nilai_praktikum, nilai_teori, nilai_tugas, nilai_akhir;


    cout << " Program Penghitungan Rata-Rata Nilai Total" << endl;


    cout << " Silahkan Masukkan Nilai Praktikum : ";
    cin >> nilai_praktikum;

    cout << " Silahkan Masukkan Nilai Teori : ";
    cin >> nilai_teori;

    cout << " Silahkan Masukkan Nilai Tugas : ";
    cin >> nilai_tugas;

    cout << " Silahkan Masukkan Nilai Final Project: ";
    cin >> nilai_akhir;



    cout << " Total Nilai Rata-rata = "
        <<(nilai_praktikum * 0.4)+(nilai_teori * 0.4)+(nilai_tugas * 0.1)+(nilai_akhir * 0.1)/4.0<<endl;


getch ();


}
