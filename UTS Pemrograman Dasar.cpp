#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama;
    int golongan, jam_kerja, upah, lembur, gaji;
    // Masukkan nama karyawan
    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    // Masukkan golongan kerja
    cout << "Masukkan golongan kerja (1, 2, atau 3): ";
    cin >> golongan;
    // Masukkan jam kerja
    cout << "Masukkan jam kerja per minggu: ";
    cin >> jam_kerja;
    // Validasi input
    if (golongan < 1 || golongan > 3) {
        cout << "Golongan kerja tidak valid" << endl;
        return 0;
    }
    if (jam_kerja < 0) {
        cout << "Jam kerja tidak valid" << endl;
        return 0;
    }
    // Hitung upah per jam berdasarkan golongan
    switch (golongan) {
    case 1:
        upah = 25000;
        break;
    case 2:
        upah = 35000;
        break;
    case 3:
        upah = 50000;
        break;
    }
    // Hitung uang lembur jika jam kerja lebih dari 48 jam
    if (jam_kerja > 48) {
        lembur = (jam_kerja - 48) * 10000;
    }
    else {
        lembur = 0;
    }
    // Hitung gaji per minggu
    gaji = (upah * jam_kerja) + lembur;
    // Cetak gaji karyawan
    cout << "Nama karyawan: " << nama << endl;
    cout << "Golongan kerja: " << golongan << endl;
    cout << "Jam kerja per minggu: " << jam_kerja << endl;
    cout << "Gaji per minggu: Rp " << gaji << endl;
    return 0;
}