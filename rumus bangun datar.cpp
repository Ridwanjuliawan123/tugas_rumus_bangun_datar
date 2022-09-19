#include <iostream>
using namespace std;

int main()
{
	int jari2, sisi, alas, tinggi;
	int luas1, luas2, keliling1, keliling2, r2, volume1, volume2;
	float setengah, pi;
	setengah = 0.5;
	pi = 3.14;
	
	cout << "======================================================" << endl;
	
	cout << "NAMA  : Ridwan juliawan" << endl;
	cout << "KELAS : X RPL 2" << endl;
	
	cout << "======================================================" << endl;
	
	cout << "masukan nomor di bawah ini" << endl;
	cout << "jari-jari = ";
	cin >> jari2;
	cout << "sisi = ";
	cin >> sisi;
	cout << "alas = ";
	cin >> alas;
	cout << "tinggi = ";
	cin >> tinggi;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS LUAS LINGKARAN" << endl;
    luas1 = pi * jari2;
    luas2 = luas1 * jari2;
    cout << "L = pi * jari-jari * jari-jari " << endl;
    cout << "  = " << pi << " * " << jari2 << " * " << jari2 << endl;
    cout << "  = " << luas1 << " * " << jari2 <<endl;
	cout << "  = " << luas2 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS KELILING LINGKARAN" << endl;
	keliling1 = 2 * pi;
	keliling2 = keliling1 * jari2;
	cout << "k = 2 * pi * jari-jari" << endl;
	cout << "  = 2 * " << pi << " * " << jari2 << endl;
	cout << "  = " << keliling1 << " * " << jari2 << endl;
	cout << "  = " << keliling2 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS LUAS PERSEGI"	<< endl;
	luas1 = sisi * sisi;
	cout << "L = sisi * sisi" << endl;
	cout << "  = " << sisi << " * " << sisi <<  endl;
	cout << "  = " << luas1 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS KELILING PERSEGI" << endl;
	keliling1 = 4 * sisi;
	cout << "k = 4 * sisi" << endl;
	cout << "  = 4 * " << sisi << endl;
	cout << "  = " << keliling1 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS LUAS SEGITIGA" << endl;
	luas1 = setengah * alas;
	luas2 = luas1 * tinggi;
	cout << "L = setengah * alas * tinggi" << endl;
	cout << "  = " << setengah << " * " << alas << " * " << tinggi << endl;
	cout << "  = " << luas1 << " * " << tinggi << endl;
	cout << "  = " << luas2 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS KELILING SEGITIGA" << endl;
	keliling1 = sisi * sisi;
	keliling2 = keliling1 * sisi;
	cout << "k = sisi * sisi * sisi" << endl;
	cout << "  = " << sisi << " * " << sisi << " * " << sisi << endl;
	cout << "  = " << keliling1 << " * " << sisi << endl;
	cout << "  = " << keliling2 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "CONTOH RUMUS VOLUME TABUNG" << endl;
	r2 = jari2 * jari2;
	volume1 = r2 * tinggi;
	volume2 = pi * volume1;
	cout << "v = pi * r2 * tinggi" << endl;
	cout << "  = " << pi << " * " << r2 << " * " << tinggi << endl;
	cout << "  = " << pi << " * " << volume1 << endl;
	cout << "  = " << volume2 << endl;
	
	cout << "======================================================" << endl;
	
	cout << "SEKIAN DARI SAYA TERIMA KASIH" << endl;
} 