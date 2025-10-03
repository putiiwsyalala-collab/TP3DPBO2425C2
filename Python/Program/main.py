from tokoBuku import tokoBuku
from Buku import Buku
from alatTulis import alatTulis

# input toko
namaToko = input("nama toko: ")
alamatToko = input("alamat toko: ")
toko = tokoBuku(namaToko, alamatToko)

pilihan = ""   #inisialisasi
while pilihan.lower() != "exit":   # keluar kalau input exit
    print("\n=== MENU ===")
    print("1. Tambah Buku")
    print("2. Tambah Alat Tulis")
    print("3. Show Data")
    print("Ketik 'exit' untuk keluar")

    pilihan = input("Pilih menu: ")
    #percabanganm], jika pilih 1 maka akan input data satu persatu
    if pilihan == "1":
        print("\nInput Data Buku")
        kode = input("Kode Buku: ")
        nama = input("Nama Buku: ")
        harga = int(input("Harga: "))
        stok = int(input("Stok: "))
        penulis = input("Penulis: ")
        penerbit = input("Penerbit: ")
        tahun = input("Tahun Terbit: ")
        genre = input("Genre: ")
       
        #data disimpan
        buku = Buku(kode, nama, harga, stok, penulis, penerbit, tahun, genre)
        toko.addBuku(buku)
        print("Data Buku berhasil ditambahkan")
    
    #jika pilih 2 maka akan input data alat tulis
    elif pilihan == "2":
        print("\nInput Data Alat Tulis")
        kode = input("Kode: ")
        nama = input("Nama: ")
        harga = int(input("Harga: "))
        stok = int(input("Stok: "))
        merek = input("Merek: ")
        jenis = input("Jenis: ")
        warna = input("Warna: ")

        alat = alatTulis(kode, nama, harga, stok, merek, jenis, warna)
        toko.addAlatTulis(alat)
        print("Data Alat Tulis berhasil ditambahkan!")

    #jika pilih 3 maka akan menampilkan data ke dalam tabel
    elif pilihan == "3":
        toko.printData()
    
    #jika ketik exit maka program akan selesai dan keluar
    elif pilihan.lower() == "exit":
        print("Keluar dari program")

    #jika selain pilihan itu maka akan menampilkan pesan ini
    else:
        print("Pilihan tidak valid, coba lagi!")
