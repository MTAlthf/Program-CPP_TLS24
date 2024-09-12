#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Variabel
    float berat, tinggi, bmi;

    
    // input
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;
    // rumus
    bmi = berat/pow(tinggi, 2);

    // output
    if (bmi < 18.5) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda kekurangan berat badan";
    }
    else if (18.5 <= bmi && bmi <= 24.9) {
        cout << "BMI Anda: " << bmi << "\n" << "Berat badan Anda Ideal";
    }
    else if (25 <= bmi && bmi <= 29.9) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda kelebihan berat badan";
    }
    else if (30 <= bmi && bmi <= 34.9) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda mengalami obesitas tingkat 1";
    }
    else if (35 <= bmi && bmi <= 39.9) {
        cout << "BMI Anda: " << bmi << "\n" << " Anda mengalami obesitas tingkat 2";
    }
    else if (bmi >= 40) {
        cout << "BMI Anda: " << bmi << "\n" << "Anda mengalami obesitas tingkat 3";
    }
return 0;
    
}

