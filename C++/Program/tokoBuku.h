#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Buku.h"
#include "alatTulis.h"



using namespace std;

class tokoBuku{
    private:
    string namaToko;
    string alamat;
    vector<Buku> daftarBuku;
    vector<alatTulis> daftarAlatTulis;


    public:
    tokoBuku(string nama, string alamat){
        this->namaToko = nama;
        this->alamat = alamat;
    }
    //tambah buku
    void addBuku(Buku b){
        daftarBuku.push_back(b);
    }

    //tambah alat tulis
    void addAlatTulis(alatTulis a){
        daftarAlatTulis.push_back(a);
    }

    //print semua data
    void prinntData(){
        cout << "==== " << namaToko << " ====" << endl;
        cout << alamat << endl << endl;

        //cetak buku

        cout << "Buku:\n" << endl;
        if(daftarBuku.empty()){
            cout << "Data buku belum ada\n";
        }else{


        for (auto &b : daftarBuku) {
            cout << "Kode         : " << b.getKodeBarang() << "\n";
            cout << "Nama         : " << b.getNama() << "\n";
            cout << "Penulis      : " << b.getPenulis() << "\n";
            cout << "Penerbit     : " << b.getPenerbit() << "\n";
            cout << "Tahun Terbit : " << b.getTahunTerbit() << "\n";
            cout << "Harga        : Rp " << b.getHarga() << "\n";
            cout << "Stok         : " << b.getStok() << "\n";
            cout << "Genre        : " << b. getGenre() << "\n";
            cout << "----------------------------------\n";
        }
    }



        //cetak alat tulis
        cout << "Alat Tulis:\n" << endl;
        if(daftarAlatTulis.empty()){
            cout << "Data alat tulis belum ada\n";
        }else{
        
        for (auto &a : daftarAlatTulis) {
            cout << "Kode      : " << a.getKodeBarang() << "\n";
            cout << "Nama      : " << a.getNama() << "\n";
            cout << "Jenis     : " << a.getJenis() << "\n";
            cout << "Warna     : " << a.getWarna() << "\n";
            cout << "Merek     :"  << a.getMerek() << "\n";
            cout << "Harga     : Rp " << a.getHarga() << "\n";
            cout << "Stok      : " << a.getStok() << "\n";
            cout << "----------------------------------\n";
        }      
            
    }
  }
};