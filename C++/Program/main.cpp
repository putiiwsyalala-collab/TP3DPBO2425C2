#include <iostream>
#include <vector>
#include "tokoBuku.h"
#include <limits>



using namespace std;

int main(){
    //input nama toko & alamat
    string namatoko, alamattoko;
    cout << "Nama Toko : ";
    getline(cin, namatoko);
    cout << "Alamat : ";
    getline(cin, alamattoko);

    tokoBuku toko(namatoko, alamattoko);

    string pilihan;
    do{
        cout << "1.tambah buku" << endl;
        cout << "2.tambah alat tulis" << endl;
        cout << "3.show data" << endl;
        cout << "exit"  <<endl;
        cout << "pilih: ";
        cin >> pilihan;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');



        if(pilihan == "1"){
            //input buku
            string kode, Nama, Penulis, Penerbit, Genre;
            int tahun, Harga, Stok;

            cout << "Kode Buku: "; 
             getline(cin, kode);
            cout << "Nama Buku: ";
             getline(cin, Nama);
            cout << "Penulis: "; 
             getline(cin, Penulis);
            cout << "Penerbit: ";
             getline(cin, Penerbit);
            cout << "Tahun Terbit: ";
             cin >> tahun;
            cout << "Harga: ";
             cin >> Harga;
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Genre: ";
             getline(cin, Genre);
            cout << "Stok: "; 
            cin >> Stok;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //buang new line
          

            Buku b(kode, Nama, Harga, Stok, Penulis, Penerbit, tahun, Genre);
            toko.addBuku(b);
            cout << "Data buku berhasil ditambahkan!\n";


        }else if(pilihan == "2") {
            //input alat tulis
            string kode, nama, jenis, warna, merk;
            int harga, stok;

            cout << "Kode Alat Tulis: "; getline(cin, kode);
            cout << "Nama: "; getline(cin, nama);
            cout << "Jenis: "; getline(cin, jenis);
            cout << "Warna: "; getline(cin, warna);
            cout << "Merek :"; getline(cin, merk);
            cout << "Harga: "; cin >> harga;
            cout << "Stok: "; cin >> stok;
            cin.ignore();

            alatTulis a(kode, nama, jenis, warna, merk, harga,stok);
            toko.addAlatTulis(a);
            cout << "Alat tulis berhasil ditambahkan!\n";




            
            
 } else if (pilihan == "3") {
            toko.prinntData();
        } else if (pilihan == "exit") {
            cout << "Keluar dari program\n";
        } else {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != "exit");

    return 0;
}




