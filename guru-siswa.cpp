#include <iostream>
using namespace std;

class siswa {
    public :
        int nisn;
        string nama;
        float nilai;
    void printBaru () {
        cout<<"Masukkan nama murid : "; cin>>nama;
        cout<<"Masukkan NISN murid : "; cin>>nisn;
        cout<<"Masukkan Nilai murid : "; cin>>nilai;
    }
    void printData () {
        cout<<"NISN : "<<nisn<<endl;
        cout<<"Nama : "<<nama<<endl;
        cout<<"Nilai : "<<nilai<<endl;
    }
};

class guru {
    public :
        int nisn;
        string nama;
        string pelajaran;
    void printGuru () {
        cout<<"Masukkan nama Guru : "; cin>>nama;
        cout<<"Masukkan NISN Guru : "; cin>>nisn;
        cout<<"Masukkan Mapel Guru : "; cin>>pelajaran;
    }
    void printDataGuru () {
        cout<<"Nama : "<<nama<<endl;
        cout<<"NISN : "<<nisn<<endl;
        cout<<"Guru Mata Pelajaran : "<<pelajaran<<endl;
    }
};
int main () {
    int angka;
    cout<<"Masukkan Angka 1 (murid) dan 2 (guru) : "; cin>>angka;
    if (angka == 1)
    {
        siswa testmurid;
        testmurid.printBaru();
        testmurid.printData();
    }
    else if (angka == 2)
    {
        guru testguru;
        testguru.printGuru();
        testguru.printDataGuru();
    }
    
}