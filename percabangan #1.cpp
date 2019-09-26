#include<iostream>
using namespace std;
int main (){
	int x,y;
	int proses;
	cout<<"masukan nilai X: ";
	cin>>x;
	cout<<"Masukan nilai y :";
	cin>>y;
	cout<<"daftar daftar operator dengan nilainya :"<<endl;
	cout<<"6 = penjumlahan"<<endl;
	cout<<"7 = pembagian"<<endl;
	cout<<"8 = pengurangan"<<endl;
	cout<<"9 = perkalian"<<endl;
	cout<<"Masukan angka operator :"<<endl;
	cin>>proses;
	if (proses == 6) {
		proses=x+y;
		cout<<"Hasil penjumlahan : "<<proses<<endl;
		cout<<"program ini adalah kalkulator sederhana"<<endl;
		
	}else if (proses == 7){
		proses=x/y;
		cout<<"hasil pembagian : "<<proses<<endl;
		cout<<"program ini adalah kallkulator sederhana"<<endl;
		
	}else if (proses==8){
		proses=x-y;
		cout<<"hasil pengurangan : "<<proses<<endl;
		cout<<"program ini adalah kalkulator sederhana"<<endl;
			
	}else if (proses == 9){
		proses=x*y;
		cout<<"hasil perkalian : "<<proses<<endl;
		cout<<"program ini adalah kalkulator sederhana"<<endl;
	}else{
		cout<<"ANDA TIDAK MEMILIH "<<endl;
	}
	return 0;
}
