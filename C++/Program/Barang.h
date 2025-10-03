#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Barang{
    private:
   string kodeBarang;
   string nama;
   int harga;
   int stok;

    public:
   Barang(){


   }

   //contruktor dengan parameter

   Barang(string kodeBarang, string nama, int harga, int stok){
    this->kodeBarang = kodeBarang;
    this->nama = nama;
    this->harga = harga;
    this->stok = stok;
   }

   //getter dan setter

   string getKodeBarang(){
    return kodeBarang;
   }
   void setKodeBarang(string kodeBarang){
    this->kodeBarang = kodeBarang;
   }

    string getNama(){
    return nama;
   }
   void setNama(string nama){
    this->nama = nama;
   }

    int getHarga(){
    return harga;
   }
   void setHarga(int harga){
    this->harga = harga;
   }

    int getStok(){
    return stok;
   }
   void setStok(int stok){
    this->stok = stok;
   }

   




};