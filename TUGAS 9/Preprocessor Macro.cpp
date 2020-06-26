#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14 //Deklarasi Makro

int main(){
	int r,hasil;
	
	cout<<"Masukkan Radius : ";
	cin>>r;
	
	hasil = PI * pow(r, 2);
	printf("Luas Lingkaran = %d",hasil);
}
