#include<iostream>
#include<iomanip>

using namespace std;

#define ll long long
int gajibersih(float tunjangan, int gajipokok)
{
	int gajiBersih = (tunjangan + gajipokok);
	return gajiBersih;
}

void hitunggaji(int gajipokok)
{
	float tunjangan = 0.15 * gajipokok;
	float pajak = 0.1 * (tunjangan + gajipokok);
	cout<<"Pajak\t\t: "<< fixed<< setprecision(0)<< "Rp. "<<pajak<< endl;
	cout<<"Tunjangan\t: "<< fixed<< setprecision(0)<< "Rp. "<<tunjangan<<endl;
	cout<<"Gaji Bersih\t: "<< fixed<<setprecision(0)<< "Rp. "<<gajibersih(tunjangan,gajipokok) - pajak;
}

void gajitetap(int lembur, int golongan)
{
	ll gajitetap;
	lembur=lembur<=0 ? 0:lembur;
	switch(golongan){
	
		case 1:
			gajitetap = 500000 + (lembur * 5000);
			break;
		case 2:
			gajitetap = 300000 + (lembur * 3000);
			break;
		case 3:
			gajitetap = 250000 + (lembur * 2000);
			break;
		case 4:
			gajitetap = 100000 + (lembur * 1500);
			break;
		case 5:
			gajitetap = 50000 + (lembur * 1000);
			break;
		default:
			break;
	}
	cout << "\nGaji tetap\t: " <<"Rp. " <<  gajitetap;
			
}

int main()
{
	
	int n,totaljamkerja,jml = 0,i,j,simp;	
	cout << "Jumlah Pegawai  		: ";
	cin >> n;
	string pegawai[n][3], nama;
	int jam[n][2], gol[n];
	ll gaji[n];
	for (i = 0 ; i < n ; i++)
	{	
	cout<<"Pegawai ke  "<<i+1;
		cout<<endl;
		cout<<"Nama				: ";
		cin>>pegawai[i][0];
		cout<<"NIP				: ";
		cin>>pegawai[i][1];
		cout<<"Gaji				: ";
		cin>>gaji[i];
		cout<<"Golongan			: ";
		cin>>gol[i];
		cout<<"Jam kerja wajib			: ";
		cin>>jam[i][0];
		cout<<"Total jam kerja			: ";
		cin>>jam[i][1];
		cout<<endl;
			
	}
	cout << "\nDATA PEGAWAI "<<endl;
	for( i = 0 ; i < n ; i ++)
	{
		cout << "Pegawai ke "<<i+1<<endl;
		cout << "Nama				: " << pegawai[i][0] << endl; 
		cout << "NIP				: " << pegawai[i][1] << endl;
		cout << "Gaji				: " << gaji[i] << endl; 
		cout << "Golongan			: " << gol[i] << endl;
		cout << "Total  Jam Kerja: " << jam[i][1] << " jam" <<endl;
		totaljamkerja = jam[i][1] - jam[i][0];
		cout << "Jam kerja lembur: " << totaljamkerja<<" jam"<<endl;		
		hitunggaji(gaji[i]);
		gajitetap((jam[i][1] - jam[i][0]), gol[i]);
		cout<<endl<<endl;
	}
		
	
	for(i = 0; i<n; i++) {
   		for(j = i+1; j<n; j++)
   		{
      		if(gaji[j] < gaji[i]) {
        		simp = gaji[i];
         		gaji[i] = gaji[j];
        	 	gaji[j] = simp;
      		}
   		}
	}

cout <<"\nUrutan gaji \n";
for(i = 0; i<n; i++) {
   cout <<gaji[i]<<"\n";
   }
	cout << "\n\nmencari nama pegawai : ";
	cin >> nama;
	
	for(i = 0 ; i < n ; i ++)
	{
		
		
		if (nama == pegawai[i][0])
		{
			jml++;
			cout << "Nama		: " << pegawai[i][0] << endl; 
			cout << "NIP		: " << pegawai[i][1] << endl;
			cout << "Gaji		: " << gaji[i] << endl; 
			cout << "Golongan	: " << gol[i] << endl;
			continue;
		}
		
	}
	cout << "FOUND : " << jml;
	
	
	
}

