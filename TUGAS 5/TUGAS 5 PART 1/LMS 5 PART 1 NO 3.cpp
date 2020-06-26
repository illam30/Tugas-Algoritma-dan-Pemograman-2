#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream myfile;
char sv_text;
myfile.open("test.txt");
    if(!myfile.fail())
       {
	   cout<<"Isi File : ";
       while (!myfile.eof())
       {
	   myfile.get(sv_text);
       cout<<sv_text;
    }
	myfile.close();
    }else{
    cout<<"File tidak ditemukan"<<endl;
    }
}
