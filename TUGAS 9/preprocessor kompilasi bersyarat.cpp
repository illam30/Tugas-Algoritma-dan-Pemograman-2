#include <iostream>
using namespace std;
#define ABCD 2
 
int main(){
 
#ifdef ABCD
	cout << "1: yes\n";
#else
    cout << "1: no\n";
#endif
 
#ifndef ABCD
    cout << "2: no1\n";
#elif ABCD == 2
    cout << "2: yes\n";
#else
    cout << "2: no2\n";
#endif
 
#if !defined(DCBA) && (ABCD < 2*4-3)
    cout << "3: yes\n";
#endif
}
