#include <iostream>
using namespace std;

class basic{

    public:
        int nisnG, nisnM;
        string namaG, namaM, mapel;
        float nilaiM;
    void guruin(){
        cout<<"Masukkan NISN guru: "<<endl; cin>>nisnG;
        cout<<"Masukkan Nama guru: "<<endl; cin>>namaG;
        cout<<"Masukkan Mapel guru: "<<endl; cin>>mapel;
    }
    void guruout(){
        cout<<"NISN: "<<nisnG<<endl;
        cout<<"Nama: "<<namaG<<endl;
        cout<<"Mapel: "<<mapel<<endl;
    }
    void muridin(){
        cout<<"Masukkan NISN murid: "<<endl; cin>>nisnM;
        cout<<"Masukkan Nama murid: "<<endl; cin>>namaM;
        cout<<"Masukkan Penilaian murid: "<<endl; cin>>nilaiM;
    }
    void muridout(){
        cout<<"NISN: "<<nisnM<<endl;
        cout<<"Nama: "<<namaM<<endl;
        cout<<"penilaian: "<<nilaiM<<endl;
    }   
};

int main(){
    int angka;
    cout<<"Masukkan angka [1] untuk guru atau [2] untuk siswa: "<<endl; cin>>angka;
    if(angka == 1){
        basic Erni;
        Erni.guruin();
        Erni.guruout();
    }
    else if(angka == 2){
        basic Erni;
        Erni.muridin();
        Erni.muridout();
    }
}