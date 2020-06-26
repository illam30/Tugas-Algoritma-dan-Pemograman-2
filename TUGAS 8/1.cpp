#include <iostream>
#include <string>
using namespace std;
int main()
{
   int myarray[10] = {21,43,23,54,75,13,5,8,25,10};  
    int key,loc;
    cout<<"Array :"<<endl;
    for(int i=0;i<10;i++){
        cout<<myarray[i]<<" ";
    }
    cout<<endl;
    cout<<"MASUKKAN ANGKA YANG INGIN DICARI : "; cin>>key;
    for (int i = 0; i< 10; i++)  
    {  
        if(myarray[i] == key)   
        {  
            loc = i+1;
            break;  
        }   
        else  
        loc = 0;  
    }   
    if(loc != 0)  
    {  
        cout<<"Ditemukan pada posisi index ke "<<loc<<" dalam array";  
    }  
    else 
    {  
        cout<<"Tidk ditemukan";  
    }  
   
}
 

