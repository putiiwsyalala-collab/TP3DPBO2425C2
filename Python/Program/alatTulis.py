from Barang import Barang


class alatTulis(Barang):
    def __init__(self, kodeBarang, nama, harga, stok, merek, jenis, warna):
        super().__init__(kodeBarang, nama, harga, stok)
        self.merek = merek
        self.jenis = jenis
        self.warna = warna

        #getter dan setter
    def getMerek(self):
            return self.merek
    def setMerek(self):
            self.merek = merek

    def getJenis(self):
             return self.jenis
    def setJenis(self, jenis): 
            self.jenis = jenis

        
    def getWarna(self):
             return self.warna
    def setWarna(self, warna):
             self.warna = warna

    #print data alat tulis(pakai tablate)
    def printAlat(self):
        return [
            self.get_KodeBarang(), self.get_Nama(), self.merek, self.jenis, self.warna,
            f"Rp{self.get_Harga()}", self.get_Stok()
        ]


        

