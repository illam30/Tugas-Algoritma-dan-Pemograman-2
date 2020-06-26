#include <fstream>
using namespace std;
int main () {
ofstream fileku;
fileku.open ("coba.txt", ios::app);
fileku<<"Saya Belajar Membuat File";
fileku.close();
}
