#include <iostream>
#include <stdlib.h>
using namespace std;

struct Pegawai{
   char NIP[30];
   char nama[100];
   int golongan;
   int gaji;
};

Pegawai pegwai[20];

void banyakData(int &n){
   cout<<"Masukkan jumlah pegawai : ";
   cin>>n;
}
void inputPegawai(Pegawai pegwai[],int &n){
    for (int i=0;i<n;i++){
    	cout << "Masukkan data pegawai " << i+1 << endl;
        cout << "NIP        : "; cin >> pegwai[i].NIP;
    	cout << "Nama       : "; cin >> pegwai[i].nama;
    	cout << "Golongan   : "; cin >> pegwai[i].golongan;
    	cout << endl;
    	}
}

void sortingGol(Pegawai pegwai[], int &n){
    int i;
 	Pegawai temp;
 	for(i=1; i<n; i++){
        temp = pegwai[i];
        while(i>0 && pegwai[i-1].golongan>temp.golongan){
            pegwai[i]= pegwai[i-1];
            i = i-1;
        }
        pegwai[i]= temp;
    }
}

void sortingNIP(Pegawai pegwai[], int &n){
    int i;
 	Pegawai temp;
 	for(i=1; i<n; i++){
        temp = pegwai[i];
        while(i>0 && pegwai[i-1].NIP>temp.NIP){
            pegwai[i] = pegwai[i-1];
            i = i-1;
        }
        pegwai[i]= temp;
    }

}

void daftarGaji (Pegawai pegwai[], int &n){
    for (int i=0; i<n; i++){
   		if (pegwai[i].golongan == 1){
   		   pegwai[i].gaji=2000000;
  }
   else if (pegwai[i].golongan == 2){
   		pegwai[i].gaji=3000000;
  }
   else if (pegwai[i].golongan == 3){
   		pegwai[i].gaji=5000000;
  }
   else if (pegwai [i].golongan == 4){
   		pegwai[i].gaji=8000000;
  }
 }
}

int rataRata (Pegawai pegwai [], int &n, int& rataGaji){
 	int gajiTotal=0;
	for (int i=0 ; i<n ; i++){
 		 gajiTotal= gajiTotal+pegwai[i].gaji;
 }
rataGaji=gajiTotal/n;
return(rataGaji);
}

void outputPegawai (Pegawai pegwai[], int n, int rataGaji){
    sortingNIP(pegwai, n);
    daftarGaji(pegwai, n);
    for (int i=0; i<n;i++){
   		cout << "NIP    : " << pegwai[i].NIP << endl;
   		cout << "Nama   : " << pegwai[i].nama << endl;
   		cout << "Gaji   : " << pegwai[i].gaji << endl;
   		cout << endl;
  }
  
  rataRata(pegwai, n, rataGaji);
  cout << "Rata-rata Gaji Pegawai : " << rataGaji << endl;
  sortingGol(pegwai, n);
}

void gajiTerendah (Pegawai pegwai[],int n){
  cout<<"Pegawai dengan gaji tertinggi : "<<pegwai[n-1].nama<<endl;}
  
void gajiTerTinggi (Pegawai pegwai[], int n){
  cout<<"Pegawai dengan gaji terendah : "<<pegwai[0].nama<<endl;
}

int main(){
	
	int n, rataGaji;
 	banyakData(n);
 	inputPegawai(pegwai,n);
 	system("cls");
 	cout << "DAFTAR PEGAWAI\n";
    outputPegawai(pegwai, n, rataGaji);
    gajiTerendah (pegwai,n);
    gajiTerTinggi (pegwai,n);
  
}
