#include<iostream>
#include<conio.h>
using namespace std; 
int main(){
int n,i,j,Imaks,maks,temp;
int L[20];
cout<<"Banyak angka yang ingin diurutkan : ";
cin>>n;
 for(i=0; i<n; i++){
  cout<<"angka ke "<<i<<" : ";
  cin>>L[i];
 }

for (i=n;i>=1;i--){
Imaks=0;
maks=L[0];
for (j=1;j<=i;j++){
if (L[j]<maks){
Imaks=j;
maks=L[j];
}
}
temp=L[i];
L[i]=maks;
L[Imaks]=temp;
}
cout<<"data terurut descending :"<<endl;
for (i=0;i<n;i++){
cout<<L[i]<<" ";
}
cout<<endl;
getch();
}
