# class parent
class Barang:
    def __init__(self, kodeBarang, nama, harga, stok):
        self.kodeBarang = kodeBarang
        self.nama = nama
        self.harga = harga
        self.stok = stok
    

 #setter dan getter
    def get_KodeBarang(self):
            return self.kodeBarang

    def set_KodeBarang(self, kodeBarang):
            self.kodeBarang = kodeBarang

    def get_Nama(self):
            return self.nama

    def set_Nama(self, nama):
            self.nama = nama

    def get_Harga(self):
            return self.harga

    def set_Harga(self, harga):
            self.harga = harga

    def get_Stok(self):
            return self.stok

    def set_Stok(self, stok):
            self.stok = stok