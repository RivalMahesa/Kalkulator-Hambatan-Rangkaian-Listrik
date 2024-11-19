#include <iostream>
using namespace std;

int main() {
    // masing-masing hambatan
    double R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0, R6 = 0, R7 = 0;
    double Rtotal = 0;

    // nilai masing-masing hambatan 
    cout << " R1 (ohm): ";
    cin >> R1;

    cout << " R2 (ohm): ";
    cin >> R2;

    cout << " R3 (ohm): ";
    cin >> R3;

    cout << " R4 (ohm): ";
    cin >> R4;

    cout << " R5 (ohm): ";
    cin >> R5;

    cout << " R6 (ohm): ";
    cin >> R6;

    cout << " R7 (ohm): ";
    cin >> R7;

    // Total
    Rtotal = R1 + R2 + R3 + R4 + R5 + R6 + R7;

    // Hasil
    cout << "Total resistansi dalam rangkaian seri adalah: " << Rtotal << " ohm" << endl;

    return 0;
}

