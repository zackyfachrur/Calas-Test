#include <iostream>

using namespace std;

void MenghitungGaji(string Nama, int Upah, int JamKerja) {
     int BonusLembur, GajiKaryawan;
     Upah = Upah;
          if (JamKerja >= 48) 
          {
               BonusLembur = (JamKerja - 48) * 4000;
               GajiKaryawan = Upah + BonusLembur;
          } else 
          {
               GajiKaryawan = Upah * JamKerja;
          }
     cout << Nama << " Menerima Upah Rp." << GajiKaryawan << " Per Minggu" << endl;
};

int main () {
     int Upah, BonusLembur, JamKerja;
     string Nama, Golongan;
     cout << "+---Program Menghitung Gaji Karyawan---+" << endl;
     cout << "Nama Karyawan : ";
     cin >> Nama;
     cout << "Golongan : ";
     cin >> Golongan;
     cout << "Jumlah Jam Kerja : ";
     cin >> JamKerja;
     if (Golongan == "A" || "a")
     {
          MenghitungGaji(Nama ,5000, JamKerja);
     } else if (Golongan == "B" || "b")
     {
          MenghitungGaji(Nama ,7000, JamKerja);
     } else if (Golongan == "C" || "c")
     {
          MenghitungGaji(Nama ,8000, JamKerja);
     } else if (Golongan == "D" || "d")
     {
          MenghitungGaji(Nama ,10000, JamKerja);
     } else {
          cout << "Golongan tidak ada :(" << endl;
     }
     system("pause");
     return 0;
}