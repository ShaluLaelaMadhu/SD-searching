#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


char kalimat[1000000];

void hapusDanReset();
void tampilData()
{
	std::cout << kalimat;
	hapusDanReset();
}


void searchData(char cari)
{
	for (int x = 0; x < strlen(kalimat); x++)
	{
		if (cari == kalimat[x])
		{
			std::cout << "Huruf Ditemukan Di Indeks Ke-" << x;
			break;
		}
		else if (x == strlen(kalimat) && cari != kalimat[x])
		{
			std::cout << "Maaf Huruf Tidak Ditemukan";
			break;
		}
	}
	hapusDanReset();
}

void keluarProgram()
{
	std::cout << "Anda Keluar Program\n\n";
}

void salahMemasukkan()
{
	std::cout << "Anda Salah Memasukkan\n\n";
}

void hapusDanReset()
{
	std::cout << "\n\n";
}

int main()
{
	do
	{
		unsigned short int pilihan;
		char cari;
		std::cout << "Program Mencari Huruf";
		hapusDanReset();
		std::cout << "Apakah Anda Ingin Melanjutkan?\n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				std::cout << "Masukkan Nama: ";
				std::cin.ignore();
				std::cin.getline(kalimat, 100000);
				do
				{
					std::cout << "Pengoperasian Program \n1. Tampil Kalimat\n2. Cari Kalimat\n3. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							tampilData(); break;
						case 2:
							std::cout << "Masukkan Huruf Yang Akan Dicari: ";
							std::cin >> cari;
							searchData(cari); break;
						case 3:
							keluarProgram();
							return 0; break;
						default:
							salahMemasukkan();
							return 0; break;
					}
				}
				while (true); break;
			case 2:
				keluarProgram();
				return 0; break;
			default:
				salahMemasukkan();
				return 0; break;
		}

	}
	while (true);
}
