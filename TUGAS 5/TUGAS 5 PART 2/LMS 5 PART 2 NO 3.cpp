#include <fstream>
using namespace std;
int main () {
ofstream mhsfile;
mhsfile.open ("datamhs.txt",ios::out);
mhsfile<<"Stambuk : 13020190058\nNama : Muhammad Ilham\nKelas : A1\n ";
mhsfile.close();
}
