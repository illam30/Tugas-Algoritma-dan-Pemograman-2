#include <iostream>
using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b)) //Deklarasi Makro Function

int main(){
	int X,Y;
	
	cout<<"Masukkan 2 Angka Untuk Dibandingkan :\n";
	cin>>X;
	cin>>Y;
	
	printf("Angka Yang Lebih Besar Adalah = %d",MAX(X,Y));
}
