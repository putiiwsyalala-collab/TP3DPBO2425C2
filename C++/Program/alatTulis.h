#include "Barang.h"
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class alatTulis : public Barang {
private:
    string merek;
    string jenis;
    string warna;

public:
    // Constructor kosong
    alatTulis() {}

    // Constructor dengan parameter
    alatTulis(string kodeBarang, string nama, string jenis,
               string warna,string merek,  int harga, int stok)
        : Barang(kodeBarang, nama, harga, stok) {
        this->merek = merek;
        this->jenis = jenis;
        this->warna = warna;
    }


         
    // Getter & Setter Merek
    string getMerek() {
        return merek;
    }
    void setMerek(string merek) {
        this->merek = merek;
    }

    // Getter & Setter Jenis
    string getJenis() {
        return jenis;
    }
    void setJenis(string jenis) {
        this->jenis = jenis;
    }

    // Getter & Setter Warna
    string getWarna() {
        return warna;
    }
    void setWarna(string warna) {
        this->warna = warna;
    }


};
