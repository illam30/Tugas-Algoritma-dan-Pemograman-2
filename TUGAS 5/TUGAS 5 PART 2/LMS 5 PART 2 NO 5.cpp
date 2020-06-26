#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string isi;
ifstream fileku("datatugas5.txt",ios::in);
    while (getline(fileku,isi)){
    cout<<isi<<"\n";
}
fileku.close();
}
