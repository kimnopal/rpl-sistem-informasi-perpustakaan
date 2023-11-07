#ifndef PEMINJAM_H
#define PEMINJAM_H

class Peminjam {

private:
	std::vector<Buku> buku;
	KartuAnggota kartu;
	int ID2;
	int ID;
	string nama;
	string alamat;

public:
	void Login();

	void Logout();

	void meminjamBuku();

	void mengembalikanBuku();

	string searchBuku();
};

#endif
