#include<bits/stdc++.h>
using namespace std;

#define ll long long
time_t now = time(0);
	int count = 1000;
   	tm *ltm = localtime(&now);

void peminjaman(int menu, string nama, ll id_orang, ll id_pinjam, int day, int month, int year, int jml)
{
	

	if (menu == 1)
	{
		
		cout << "PENGEMBALIAN \n";
		cout << "Nama: " << nama << "\n";
		cout << "ID: " << id_orang << "\n";
		cout << "ID Pinjam: " << id_pinjam << "\n";
		cout << "Tanggal Peminjaman: " << day << ", " << month << ", " << year << "\n";
		cout << "Tanggal Pengembalian: " << ltm->tm_mday << ":" << 1 + ltm->tm_mon<< ":" <<  1900 + ltm->tm_year<< "\t\t|\n";
		if ((day + 7) < (ltm->tm_mday ))
		{
			
			cout << "\nDENDA : Rp. " << (1000 * ((day + 7)   + 6) / 7);
			
		}
		else if(day == ltm->tm_mday ){
			cout <<"TERIMA KASIH TELAH MENGEMBALIKAN BUKU TEPAT WAKTU\n";

		} else
		{
			cout <<"TERIMA KASIH" << endl;
		}
	
		
	}
	else if(menu == 2)
	{
	
	
		cout << "Nama: " << nama << "\n";
		cout << "Nomor identitas: " << id_orang << "\n";
		cout << "Nomor ID Pinjam: " << id_pinjam << "\n";
		cout << "Tanggal Peminjaman : " << ltm->tm_mday << ":" <<  1 + ltm->tm_mon << ":" << 1900 + ltm->tm_year << "\t|\n";
		cout <<"KEMBALIKAN BUKU SEBELUM TANGGAL: " << day + 7 << ", " << month << ", " << year << endl; 
	
	}
}



int main()
{
		
	string nama, name;
	int hh,bb,tttt,pil,jml;
	ll id_peminjam,id_buku;
  	

	cout << "1. PENGEMBALIAN BUKU" << endl;
	cout << "2. PEMINJAMAN BUKU" <<endl;
	cout << "3. INFO BUKU HILANG" << endl;
	cin >> pil;
	if(pil == 1)
	{
		cout << "Nama peminjam\t: \n";
		cin >> nama;
		cout << "Nomor ID\t: " << endl;
		cin >> id_peminjam;
		cout <<"ID Peminjaman\t: " << endl;
		cin >> id_buku;
		cout << "Jumlah buku\t: " << endl;
		cin >> jml;
		cout << "Tanggal Peminjaman\t: " << endl;
		cin >> hh;
		cout << "Bulan\t\t: " << endl;
		cin >> bb;
		cout << "Tahun\t\t: " << endl;
		cin >> tttt;
		peminjaman(1,nama,id_peminjam,id_buku,hh,bb,tttt,jml);
		
	} else if(pil == 2)
	{
		cout << "Nama peminjam\t: " << endl;
		cin >> nama;
		cout << "Nomor ID\t: " << endl;
		cin >> id_peminjam;
		cout <<"ID Peminjaman\t: " << endl;
		cin >> id_buku;
		cout << "Jumlah buku\t: " << endl;
		cin >> jml;
		peminjaman(2,nama,id_peminjam, id_buku, bb,hh,tttt,jml);
		
		
	}
	else if(pil == 3)
	{
		cout << "Nama peminjam\t: " << endl;
		cin >> nama;
		cout << "Nomor ID\t: " << endl;
		cin >> id_peminjam;
		cout <<"ID Peminjaman\t: " << endl;
		cin >> id_buku;
		cout << "Jumlah buku\t: " << endl;
		cin >> jml;
		cout << "ANDA DIDENDA SEBESAR : Rp. " << jml * (rand() * 1000);
	}
	cout << "\n\nSearching nama peminjam : ";
	cin >> name;
	cout << "\n-------------------------------------\n";
	if (name == nama)
	{
		cout << "Nama : " << nama << endl;
		cout << "Nomor ID : " << id_peminjam;
	} else
	{
		cout << "\nTidak ditemukan" << endl;
	}
	
		
}
