from tabulate import tabulate

class tokoBuku:
    def __init__(self, namaToko, alamat):
        self.namaToko = namaToko
        self.alamat = alamat
        #list daftar buku dan alattulis
        self.daftarBuku = []
        self.daftarAlatTulis = []

    def addBuku(self, buku):
        self.daftarBuku.append(buku)

    def addAlatTulis(self, alat):
        self.daftarAlatTulis.append(alat)

    def printData(self):
        print(f"\n=== {self.namaToko} ===")
        print(f"Alamat: {self.alamat}\n")

        # Cetak Buku
        if len(self.daftarBuku) > 0:
            tabelBuku = [b.printBuku() for b in self.daftarBuku]
            print("Daftar Buku:")
            print(tabulate(tabelBuku, headers=[
                "Kode", "Nama", "Penulis", "Penerbit", "Tahun", "Genre", "Harga", "Stok"
            ], tablefmt="grid"))
            #jika belum ada data akan menampikan pesan
        else:
            print("Belum ada data buku.\n")

        # Cetak Alat Tulis
        if len(self.daftarAlatTulis) > 0:
            tabelAlat = [a.printAlat() for a in self.daftarAlatTulis]
            print("\nDaftar Alat Tulis:")
            print(tabulate(tabelAlat, headers=[
                "Kode", "Nama", "Merek", "Jenis", "Warna", "Harga", "Stok"
            ], tablefmt="grid"))
        else:
            print("Belum ada data alat tulis.\n")
