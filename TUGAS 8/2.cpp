#include <iostream>
#include <string>
using namespace std;
int binarySearch(int myarray[], int awal, int akhir, int key)  
{  
    int mid;  
    if(akhir >= awal) {     
        mid = (awal + akhir)/2;  
        if(myarray[mid] == key)  
        {  
            return mid+1;  
        }  
        else if(myarray[mid] < key) {  
            return binarySearch(myarray,mid+1,akhir,key);  
        }  
        else {  
            return binarySearch(myarray,awal,mid-1,key);  
        }  
    }  
    return -1;   
}   
int main ()  
{  
    int myarray[10] = {5,8,10,13,21,23,25,43,54,75};  
    int key, location=-1;   
    cout<<"Urutan Array :"<<endl;
    for(int i=0;i<10;i++){
        cout<<myarray[i]<<" ";
    }
    cout<<endl;
    cout<<"masukkan kata kunci yang ingin dicari:"; cin>>key;  
    location = binarySearch(myarray, 0, 9, key);  
    if(location != -1)  {  
        cout<<"Kata kunci ditemukan pada index - "<<location; 
    }  
    else   {  
        cout<<"Tidak ditemukan";
    }  
}
