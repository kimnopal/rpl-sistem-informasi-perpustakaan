#ifndef PETUGAS_H
#define PETUGAS_H

class Petugas {

private:
	std::vector<Buku> buku;
	int ID2;
	int ID;
	string nama;
	int no_karyawan;

public:
	void inputData();

	void hapusData();

	void perbaruiData();

	void verifData();
};

#endif
