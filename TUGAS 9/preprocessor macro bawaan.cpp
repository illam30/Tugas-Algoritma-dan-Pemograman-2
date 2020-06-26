#include <iostream>
using namespace std;

int main()
{
  cout << "Ini Adalah Baris Ke  " << __LINE__;
  cout << " Dari File " << __FILE__ << ".\n";
  cout << "Proses Kompilasi Dimulai Pada " << __DATE__;
  cout << " Di Waktu " << __TIME__ << ".\n";
  cout << "Nilai Yang Diberikan Compiler Dari __cplusplus Adalah" << __cplusplus;
  return 0;
}
