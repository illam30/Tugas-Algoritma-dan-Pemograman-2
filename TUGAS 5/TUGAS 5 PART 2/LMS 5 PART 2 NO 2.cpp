#include <fstream>
using namespace std;
int main () {
ofstream datamhs;
datamhs.open ("datamhs.txt", ios::out);
datamhs<<"Stambuk\nNama\nKelas\nIPK \n";
datamhs.close();
}
