#ifndef BUKU_H
#define BUKU_H

class Buku {

private:
	Petugas petugas;
	std::vector<Penulis> penulis;
	Penerbit penerbit;
	std::vector<Peminjam> peminjam;
	int ID2;
	int ID;
public:
	std::vector<string> judul;
private:
	string ISBN;
	string tahun_terbit;
	int jumlah_halaman;
	int edisi;
};

#endif
