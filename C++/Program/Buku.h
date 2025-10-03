#include "Barang.h"
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


class Buku : public Barang{
    private:
    string penulis;
    string penerbit;
    int tahunTerbit;
    string genre;

public:
    Buku(){

    }
    //contructor dengan parameter
    Buku(string kodeBarang, string nama, int harga, int stok,string penulis,string penerbit,
    int tahunTerbit, string genre): Barang(kodeBarang, nama, harga, stok){

        this->penulis= penulis;
        this->penerbit = penerbit;
        this->tahunTerbit = tahunTerbit;
        this->genre = genre;


    }

    //getter dan setter
    
       string getPenulis() {
        return penulis;
    }
    void setPenulis(string penulis) {
        this->penulis = penulis;
    }

    string getPenerbit() {
        return penerbit;
    }
    void setPenerbit(string penerbit) {
        this->penerbit = penerbit;
    }

    int getTahunTerbit() {
        return tahunTerbit;
    }
    void setTahunTerbit(int tahunTerbit) {
        this->tahunTerbit = tahunTerbit;
    }
    string getGenre() {
        return genre;
    }
    void setGenre(string genre) {
        this->genre = genre;
    }





};