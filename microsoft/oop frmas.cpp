#include <iostream>
 
using namespace std;
 
// buat class Laptop
class mahasiswa {
  public:
  
    string nama;
    int Nim;
    int umur;
 
    
    string jurusan() {
      return "Teknik Informatika";
    }
 
    string aktif() {
      return "Mahasiswa aktif";
    }
};
 
int main()
{
  // buat objek dari class Laptop (instansiasi)
  mahasiswa mahasiswaData;
 
 
  mahasiswaData.nama = "framsjon piter";
  mahasiswaData.Nim = 2281049;
  mahasiswaData.umur = 21;
 
  
  cout << "Nama:"<<mahasiswaData.nama << endl;
  cout << "Nim:"<<mahasiswaData.Nim << endl;
  cout << "Umur:"<<mahasiswaData.umur << endl;
 
 
  cout << mahasiswaData.jurusan() << endl;
  cout << mahasiswaData.aktif() << endl;
 
  return 0;
}