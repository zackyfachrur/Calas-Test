#include <iostream>

using namespace std;

int main() {
     int inputOperasi, inputFirst, inputSec, Output;

     cout << "## PROGRAM C++ KALKULATOR SEDERHANA ##" << endl;
     cout << "======================================" << endl;
     cout << endl;
     cout << "1. Penjumlahan" << endl;
     cout << "2. Pengurangan" << endl;
     cout << "3. Perkalian" << endl;
     cout << "4. Pembagian" << endl;
     cout << "5. Modulus" << endl;
     cout << endl;
     cout << "Input Pilihan Operasi : ";
     cin >> inputOperasi;
     if (inputOperasi == 1 || inputOperasi == 2 || inputOperasi == 3 || inputOperasi == 4 || inputOperasi == 5) {
          cout << "Angka Pertama : ";
          cin >> inputFirst;
          cout << "Angka Kedua : ";
          cin >> inputSec;
          if (inputOperasi == 1)
          {
               Output = inputFirst + inputSec;
               cout << "Hasil dari Penjumlahan : " << Output << endl;
          } else if (inputOperasi == 2) 
          {
               Output = inputFirst - inputSec;
               cout << "Hasil dari Pengurangan : " << Output << endl;
          } else if (inputOperasi == 3) 
          {
               Output = inputFirst * inputSec;
               cout << "Hasil dari Perkalian : " << Output << endl; 
          } else if (inputOperasi == 4) 
          {
               Output = inputFirst / inputSec;
               cout << "Hasil dari Pembagian : " << Output << endl; 
          } else if (inputOperasi == 5){
               if (inputSec != 0) {
                    Output = inputFirst % inputSec;
                    cout << "Hasil " << inputFirst << " Modulus " << inputSec << " Adalah : " << Output << endl;
               } else {
                    cout << "Pembagi tidak Boleh NOL (0)" << endl;
               } 
          }
          system("pause");
          return 0;
     } else {
          cout << "Pilihan tidak tersedia" << endl;
          system("pause");
          return 0;
     }
}