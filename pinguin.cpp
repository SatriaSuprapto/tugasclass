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
	
	cout << (PinguinRoyal.nama) << " memiliki ukuran tubuh yang " << (PinguinRoyal.ukuran) << " dengan berat " << (PinguinRoyal.beratdewasa) << " kg" <<endl;
	cout << (PinguinEmperor.nama) << " memiliki ukuran tubuh yang " << (PinguinEmperor.ukuran) << " dengan berat " << (PinguinEmperor.beratdewasa) << " kg" <<endl;
	cout << (PinguinMadagascar.nama) << " memiliki ukuran tubuh yang " << (PinguinMadagascar.ukuran) << " dengan berat " << (PinguinMadagascar.beratdewasa) << " kg" <<endl;
	
	PinguinRoyal.warna("Putih");
	
}

void pinguin::warna(string warna){
	cout  << endl << "Warna Bulu Pinguin Royal adalah " << warna << endl;
}
