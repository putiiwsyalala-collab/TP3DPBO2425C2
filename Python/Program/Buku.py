from Barang import Barang
#class child dari class Barang
class Buku(Barang):
    def __init__(self, kodeBarang, nama, harga, stok, penulis, penerbit, tahunTerbit, genre):
        super().__init__(kodeBarang, nama, harga, stok)
        self.penulis = penulis
        self.penerbit = penerbit
        self.tahunTerbit = tahunTerbit
        self.genre = genre

    #getter dan setter
    def getPenulis(self): 
        return self.penulis
    def setPenulis(self, penulis): 
        self.penulis = penulis

    def getPenerbit(self): 
        return self.penerbit
    def setPenerbit(self, penerbit): 
        self.penerbit = penerbit

    def getTahun(self): 
        return self.tahunTerbit
    def setTahun(self, tahun):
         self.tahunTerbit = tahunTerbit

    def getGenre(self):
         return self.genre
    def setGenre(self, genre):
         self.genre = genre


    #print databuku
    def printBuku(self):
        return [
            self.get_KodeBarang(), self.get_Nama(), self.penulis, 
            self.penerbit, self.tahunTerbit, self.genre,
            f"Rp{self.get_Harga()}", self.get_Stok()
        ]



        