#include <iostream>
#include <string>
using namespace std;

class pinguin{
	public:
		void warna(string warna);
		double beratdewasa;
		string ukuran;
		string nama;	
};

int main(){
	pinguin PinguinRoyal,PinguinEmperor,PinguinMadagascar;
	
	PinguinRoyal.nama = "Pinguin Royal";
	PinguinRoyal.ukuran = "KECIL";
	PinguinRoyal.beratdewasa = 30.7;
	PinguinEmperor.nama = "Pinguin Emperor";
	PinguinEmperor.ukuran = "BESAR";
	PinguinEmperor.beratdewasa = 64.6;
	PinguinMadagascar.nama = "Pinguin Madagascar";
	PinguinMadagascar.ukuran = "SEDANG";
	PinguinMadagascar.beratdewasa = 47.1;
	
}
