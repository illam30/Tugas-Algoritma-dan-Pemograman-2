//pragma
#include<stdio.h>
int display();

#pragma startup display
#pragma exit display

int main() {
   printf("\nMI Dalam Function Main");
   return 0;
}

int display() {
   printf("\nMI Dalam Function Display");
   return 0;
}	
