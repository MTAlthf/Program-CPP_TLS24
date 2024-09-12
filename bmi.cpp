#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Variabel
    float berat, tinggi, bmi;

    
    // input
    while (true) {

            cout << "Masukkan berat badan (kg): ";
            cin >> berat;
            cout << "Masukkan tinggi badan (m): ";
            cin >> tinggi;

            if (berat <= 0 || tinggi <= 0) {
                cout << "Data tidak valid, silahkan coba lagi!\n\n"; //untuk mengulang input jika data tidak valid 
            }
            else {
                break;// untuk keluar dari loop input jika data sudah valid
            }

    }
    // rumus
    bmi = berat/pow(tinggi, 2);

    // output
    if (bmi < 18.5) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda kekurangan berat badan\n";
    }
    else if (18.5 <= bmi && bmi <= 24.9) {
        cout << "BMI Anda: " << bmi << "\n" << "Berat badan Anda Ideal\n";
    }
    else if (25 <= bmi && bmi <= 29.9) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda kelebihan berat badan\n";
    }
    else if (30 <= bmi && bmi <= 34.9) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda mengalami obesitas tingkat 1\n";
    }
    else if (35 <= bmi && bmi <= 39.9) {
        cout << "BMI Anda: " << bmi << "\n" << " Anda mengalami obesitas tingkat 2\n";
    }
    else if (bmi >= 40) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda mengalami obesitas tingkat 3\n";
    }
return 0;
    
}

