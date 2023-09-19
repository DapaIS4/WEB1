#include <iostream.h>
 
using namespace std;
 
class Laptop {
 
  private:
   string Nama;
   int Umur;
 
  public:
    void setnama(string var1) {
      Nama = var1;
    }
  
    void setumur(int var2) {
      if (var2 < 20) {
        Umur = var2;
      }
      else {
        Umur = 20;
      }
    }
 
    string getNama() {
      return "Bapak/Ibu " + Nama;
    }
 
    double getumur() {
      return Umur;
    }
};
 
int main()
{
  Laptop laptopAndi;
 
  laptopAndi.setnama("Dapa");
  laptopAndi.setumur(19);
 
  cout << laptopAndi.getNama() << endl;
  cout << laptopAndi.getumur() << endl;
 
  return 0;
}