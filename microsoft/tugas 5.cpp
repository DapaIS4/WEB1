#include<iostream.h>
using namespace std;

struct Siswa{
	int nim;
	string nama;
	int nilaimid;
	int nilaifinal;
};
int main(){
	int temp, min;
	string tempname;
	struct Siswa siswa[4];
	siswa[0].nim=372;
	siswa[0].nama="Asep";
	siswa[0].nilaimid=70;
	siswa[0].nilaifinal=80;
	
	siswa[1].nim=380;
	siswa[1].nama="Badu";
	siswa[1].nilaimid=80;
	siswa[1].nilaifinal=90;
	
	siswa[2].nim=673;
	siswa[2].nama="Cecep";
	siswa[2].nilaimid=90;
	siswa[2].nilaifinal=80;
	
	siswa[3].nim=581;
	siswa[3].nama="Dedi";
	siswa[3].nilaimid=70;
	siswa[3].nilaifinal=90;
	
	cout<<endl;
	
	cout<<"data sebelum diurutkan: "<<endl;
	
	cout<<"NIM\tNama\tNilaiMid\tNilaiFin"<<endl;
	for(int i = 0; i<4 ; i++){
		cout<<siswa[i].nim<<"\t"<<siswa[i].nama<<"\t"<<siswa[i].nilaimid<<"\t"<<siswa[i].nilaifinal<<endl;
	}
	cout<<"data sesudah diurutkan: "<<endl;
	
	for(int i = 0; i<4; i++){
		min = i;
		for(int j =0; j<4; j++){
			if(siswa[j].nim>siswa[j+1].nim){
				min = j;
			}
		}
		temp = siswa[i].nim;
		siswa[i].nim = siswa[min].nim;
		siswa[min].nim = temp;
		
		tempname = siswa[i].nama;
		siswa[i].nama = siswa[min].nama;
		siswa[min].nama = tempname;
		
		temp = siswa[i].nilaimid;
		siswa[i].nilaimid = siswa[min].nilaimid;
		siswa[min].nilaimid = temp;
		
		temp = siswa[i].nilaifinal;
		siswa[i].nilaifinal = siswa[min].nilaifinal;
		siswa[min].nilaifinal= temp;
	}
	cout<<"NIM\tNama\tNilaiMid\tNilaiFin"<<endl;
	for(int i = 0; i<4 ; i++){
		cout<<siswa[i].nim<<"\t"<<siswa[i].nama<<"\t"<<siswa[i].nilaimid<<"\t"<<siswa[i].nilaifinal<<endl;
	}
	
	return 0;
}