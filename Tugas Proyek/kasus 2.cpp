#include <iostream>
using namespace std;

struct dataPerpus{
int id_buku[50],harga_buku[50];
string nama;
};

struct dataPerpus dt;

int main(){
  awal :
  int byk;
  int lama_peminjaman;
  char buku_hilang;
  cout<<"Banyak peminjaman buku : "; cin>>byk;
  cout<<"\nMasukkan Nama Peminjam : ";cin>>dt.nama;
  cout<<"\nINPUT DATA PEMINJAMAN BUKU"<<endl;
  cout<<"Buku yang tersedia : "<<endl;
   cout<<"| ID Buku| Nama Buku                      |\n";
   cout<<"-------------------------------------------\n";
   cout<<"| 1      | Desain Media Interaktif        |\n";
   cout<<"| 2      | Teknik Pengelahan Audio & Video|\n";
   cout<<"| 3      | Sistem Operasi                 |\n";
   cout<<"| 4      | Desain Grafis                  |\n";
  cout<<endl;
  
  for(int a=1; a<=byk; a++){
    cout<<"Buku ke- "<<a<<endl;;
    cout<<"ID Buku : "; cin>>dt.id_buku[a];
    	switch (dt.id_buku[a]){
    case 1 :
    dt.harga_buku[a]=190000;
    	
    break;
    case 2 :
    dt.harga_buku[a]=70000;
    
    break;
    case 3 :
    dt.harga_buku[a]=150000;
    
    break;
    case 4 :
    dt.harga_buku[a]=200000;
    
    break;
    default :
    	cout<<"ID buku yang anda masukkan tidak tersedia"<<endl;
    	cout<<"Silahkan masukkan kembali "<<endl;
    	goto awal;
    }
    cout<<endl;
    
    
  }
  

  cout<<"Lama Peminjaman (Hari): ";cin>>lama_peminjaman;
  int terlambat = lama_peminjaman- 5;
  int denda=0;
  if(lama_peminjaman>5){
    denda = terlambat *1000*byk;
  }
  
  cout<<"\nData Buku Yang dipinjam :";
 
  for(int a=1; a<=byk; a++){
    cout<<"\nData Buku ke "<<a;
    cout<<"\nID Buku\t: "<<dt.id_buku[a];      
    cout<<endl;
    cout<<"Buku hilang ?(y/t)             : ";cin>>buku_hilang;
if(buku_hilang=='y'){
	cout<<"Harga untuk mengganti buku yang hilang : Rp."<<dt.harga_buku[a]<<endl;
	system("exit");
}else buku_hilang=0;
  }
  cout<<"\nLama Peminjaman    : "<<lama_peminjaman<<" hari";
  cout<<"\nDenda              : Rp."<<denda;
  
  
  cout<<"\nIngin mengulang? (y/t)"<<endl;      
       char pilihan;
	   cin>>pilihan;
       if(pilihan=='y')
       goto awal;
       if(pilihan=='t')
       cout<<"Terima kasih";
  
}
