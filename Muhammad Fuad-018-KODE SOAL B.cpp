#include<iostream>
#include<fstream>

using namespace std;


struct Mahasiswa{
	string nama[100];
	long long int nim[100];
	int UAS[100];
	int UTS[100];
	int jumlah;
	
};

void inputdata(string nama,long long int nim,int UAS,int UTS){
	Mahasiswa m;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>m.jumlah;
	for (int i=0;i<m.jumlah;i++){
	cout<<"Mahasiswa Ke- "<<i+1<<endl;
	cout<<"==============="<<endl;
	cout<<"Masukkan Nama : ";
	cin>>m.nama[i];
	cout<<"Masukkan Nim : ";
	cin>>m.nim[i];
	cout<<"Masukkan Nilai UAS : ";
	cin>>m.UAS[i];
	cout<<"Masukkan Nilai UTS : ";
	cin>>m.UTS[i];
	cout<<"==============="<<endl;
	
	}
	
	
}
void ratarata(int UAS,int UTS){
	Mahasiswa m;
	cout<<"==================="<<endl;
		for(int i=0;i<m.jumlah;i++){
		 int rata=m.UAS[i]+m.UTS[i];
		cout<<"Mahasiswa Ke-"<<i+1<<endl;
		cout<<"Total Nilai "<<rata/2<<endl;
		}
	cout<<"==================="<<endl;
		
	}
	void lulus(int UAS,int UTS){
	Mahasiswa m;
	int rata;
	cout<<"==================="<<endl;
		for(int i=0;i<m.jumlah;i++){
		  rata=m.UAS[i]+m.UTS[i];
		cout<<"Mahasiswa Ke- "<<i+1<<endl;
		if(rata>=75){
			cout<<"Mahasiswa LULUS"<<endl;
		}
		else if(rata<75){
			cout<<"Mahasiswa TIDAK LULUS"<<endl;
		}
		}
	cout<<"==================="<<endl;
	
		
	}
	

int main(){
	string nama;
	long long int nim;
	int UAS;
	int UTS;
	int pilihan;
	char konfirmasi;
	
	
	do{
	cout<<"=====MENU====="<<endl;
	cout<<"1.Input Data"<<endl;
	cout<<"2.Keluar Program"<<endl;
	cout<<"=====----====="<<endl;;
	cout<<"Masukkan Pilihan : ";
	
	cin>>pilihan;
	if(pilihan==1){
		inputdata(nama,nim,UAS,UTS);
		ratarata(UAS,UTS);	
		lulus(UAS,UTS);
		}
		else if(pilihan==2){
		cout<<"Program Keluar"<<endl;
		break;	
			
		}	
		cout<<"Ingin Pilih Lain (Y/y)";
		cin>>konfirmasi;
	}while(konfirmasi=='y'|konfirmasi=='Y');
	
		return 0;
	}
