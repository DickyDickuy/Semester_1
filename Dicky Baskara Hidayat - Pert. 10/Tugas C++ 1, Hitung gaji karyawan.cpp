#include <iostream>  
#include <string>    // Menggunakan library string untuk nama karyawan
#include <iomanip>   // Untuk format desimal pada output gaji
using namespace std;
//Dicky Baskara Hidayat
int main() {
    // Variabel
    string Karyawan;  
    int Absensi;      
    int Satu_Bulan = 30; 
    int Jam_Kerja = 8;  
    float Tarif_Perjam; 
    float Total_Gaji;   

    // Input data karyawan
    cout << "Masukkan nama karyawan: ";
    getline(cin, Karyawan);  
    
    cout << "Masukkan jumlah hari hadir: ";
    cin >> Absensi;  

    cout << "Masukkan tarif per jam: ";
    cin >> Tarif_Perjam;  

    // Mengecek apakah hari hadir valid
    if (Absensi > Satu_Bulan || Absensi < 0) {
        cout << "Jumlah hari hadir tidak valid!" << endl;
        return 1;  // Menghentikan program jika input tidak valid
    }

    // Menghitung total gaji
    Total_Gaji = Absensi * Jam_Kerja * Tarif_Perjam;

    // Output hasil perhitungan
    cout << "\n== Rincian Gaji Karyawan ==" << endl;
    cout << "Nama Karyawan: " << Karyawan << endl;
    cout << "Kehadiran: " << Absensi << " dari " << Satu_Bulan << " hari kerja" << endl;

    // Menampilkan status absensi (apakah karyawan hadir penuh atau tidak)
    if (Absensi == Satu_Bulan) {
        cout << "Status Absensi: Masuk penuh" << endl;
    } else {
        cout << "Status Absensi: Tidak masuk penuh" << endl;
    }


    cout << fixed << setprecision(2);// Menampilkan total gaji dengan dua angka desimal
    cout << "Total Gaji: Rp. " << Total_Gaji << endl;

	return 0;
}

