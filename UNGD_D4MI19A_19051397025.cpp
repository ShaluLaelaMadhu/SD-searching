#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int data[100000];
int batas;

void hapusDanReset();
void tampilData()
{
	for (int x = 0; x < batas; x++)
	{
		std::cout << "Data Index Ke-" << x << ": " << data[x] << "\n";
	}
	hapusDanReset();
}

void searchData(int cari)
{
	unsigned short int benar = 0;
	for (int x = 0; x < batas; x++)
	{
		if (data[x] == cari)
		{
			std::cout << "Data Ditemukan Di Index Ke-" << x;
			benar++;
		}
	}

	if (benar == 0)
	{
		std::cout << "Data Tidak Ditemukan";
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
		unsigned short int pilihan, cari;
		std::cout << "Pencarian Angka";
		hapusDanReset();
		std::cout << "Apakah Anda Ingin Melanjutkan?\n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				std::cout << "Masukkan banyak Angka: ";
				std::cin >> batas;
				for (int x = 0; x < batas; x++)
				{
					std::cout << "Masukkan Angka Ke-" << x << " : ";
					std::cin >> data[x];
				}
				do
				{
					std::cout << "Pengoperasian Program \n1. Tampil Data\n2. Cari Data\n3. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							tampilData(); break;
						case 2:
							std::cout << "Masukkan Data Yang Akan Dicari: ";
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
