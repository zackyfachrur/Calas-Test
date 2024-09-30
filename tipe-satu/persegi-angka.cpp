#include <iostream>

using namespace std;

int main() {
     int inputPersegi;
     cout << "-- PROGRAM C++ PERSEGI ANGKA --" << endl;
     cout << "Input Besar Persegi : ";
     cin >> inputPersegi;
     cout << endl;
     cout << "Hasil " << endl;
     for (int firstLine = 1; firstLine <= inputPersegi; firstLine++)
     {
          cout << "--";
     }
     for (int row = 1; row <= inputPersegi; row++)
     {
          cout << endl;
          for (int column = 1; column <= inputPersegi; column++)
          {
               cout << column << " ";
          }
     }
     cout << endl;
     for (int secondLine = 1; secondLine <= inputPersegi; secondLine++)
     {
          cout << "--";
     }
     cout << endl;
     system("pause");
     return 0;
}