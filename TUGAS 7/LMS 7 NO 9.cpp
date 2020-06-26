#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int i,j,n;
    int Nilai[50];
    int tmp;

cout << "Banyak angka yang akan diurutkan: ";
cin >> n;
for(i=1; i<=n; i++){
    cout<<"Angka "<<i<<" = ";
    cin>>Nilai[i];
}

for(i=1; i<=n; i++){
 for(j=i; j<=n; j++){
 	if(Nilai[i] < Nilai[j]){
    tmp = Nilai[j];
    Nilai[j] = Nilai[i];
    Nilai[i] = tmp;
    }
}
}
cout << "Hasil Pengurutan data Secara Descending : \n";
for(i=1;i<=n;i++){
    cout<<Nilai[i]<<",";
}
}
