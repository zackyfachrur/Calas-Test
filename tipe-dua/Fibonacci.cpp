#include <iostream>
using namespace std;

int main() {
    int inputNum, firstNum = 0, secondNum = 1, nextNum;

    cout << "## Program C++ Deret Fibonacci ##" << endl;
    cout << "=================================" << endl;
    cout << "Jumlah deret fibonacci yang diinginkan: ";
    cin >> inputNum;
    cout << firstNum << " " << secondNum << " ";
    for (int i = 2; i < inputNum; ++i) {
        nextNum = firstNum + secondNum;
        cout << nextNum << " ";
        firstNum = secondNum;
        secondNum = nextNum;
    }
    cout << endl;
    system("pause");
    return 0;
}
