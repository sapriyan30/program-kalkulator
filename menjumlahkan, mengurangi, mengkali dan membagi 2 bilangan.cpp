#include <iostream>
using namespace std;
void menu () {
    cout<<"Pilihan Sistem Operasi \n";
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pembagian\n";
}

float penjumlahan(float x, float y) {
    return x + y;
}
float pengurangan(float x, float y) {
    return x - y;
}
float perkalian(float x, float y) {
    return x * y;
}
float pembagian(float x, float y) {
    return x / y;
}
void pilih () {
    int pilihan;
    float x, y;
    cout<<"---------------------------------------------\n";
    cout<<"Masukkan Nilai Pertama : "; cin>>x;
    cout<<"Masukkan Nilai Kedua : "; cin>>y;
    cout<<"Masukkan Pilihan Operasi : "; cin>>pilihan;

    switch(pilihan) {
        case 1:
            cout<<"Hasil Penjumlahan = "<<penjumlahan(x, y);
            break;
        case 2:
            cout<<"Hasil pengurangan = "<<pengurangan(x, y);
            break;
        case 3:
            cout<<"Hasil perkalian = "<<perkalian(x, y);
            break;
        case 4 :
            cout<<"Hasil pembagian  = " <<pembagian(x, y);
            break;
        default :
            cout<<"Pilihan Anda Tidak Sesuai";
            break;
    }
}

int main() {
char ulang;

menu();
            do
            {
    pilih();
            cout<<"\n\nApakah Anda Ingin Mengulang Program : "<<endl;
            cout<<"Pilihan [Y/T] : "; cin>>ulang;
            }
            while(ulang=='y' || ulang=='Y');
            cout<<"Tidak mengulang Dan Terima Kasih"<<endl;
            cin.ignore();
    cin.get();

}
