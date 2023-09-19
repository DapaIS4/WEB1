#include <iostream>
using namespace std;
 
class Data1{
protected:
    string namalengkap,tanggallahir,tempatlahir;
	int nomorindukmahasiswa;
    int usia;
public:
Data1(int nim, string naleng, int us, string tgl, string tmpt){
	nomorindukmahasiswa=nim;
	naleng=namalengkap=naleng;
    usia=us;
    tanggallahir=tgl;
    tempatlahir=tmpt;
    }
};
 
class Data2 : public Data1{
public:
Data2(int nim, string naleng, int us, string tgl, string tmpt): Data1(nim, naleng, us, tgl, tmpt) { }
void lihatdata(){
cout<<"NIM : "<<nomorindukmahasiswa<<", Nama Lengkap : "<<namalengkap<<", Usia : "<<usia<<", Tanggal Lahir : "<<tanggallahir<<", Tempat Lahir : "<<tempatlahir<<endl;
}
};
 
int main(){
Data2 datagibrael(2281046,"beni situngkir blala",19,"15 September 2004","Solo");
Data2 databudi(2281067,"Budi Cahya",18,"21 Juli 2004","Jakarta");

datagibrael.lihatdata();
databudi.lihatdata();

return 0;
}