#include <iostream>
using namespace std;
 
class NIM{
public:
	string cekData(){
	cout<<"2281046 : ";
	return "Ini berasal dari class NIM";
    }
};
 
class Nama : public NIM{
public:
	string cekData(){
	cout<<NIM::cekData()<<endl;
	cout<<"budi setiawan : ";
	return "Ini berasal dari class Nama";
    }
};
 
int main(){
Nama Tampilkandata;
cout<<Tampilkandata.cekData()<<endl;
 
return 0;
}