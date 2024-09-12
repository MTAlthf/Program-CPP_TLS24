#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float berat, tinggi, bmi;

    // Perulangan untuk memastikan input berat dan tinggi valid
    while (true) {
        cout << "Masukkan berat badan (kg): ";
        cin >> berat;
        cout << "Masukkan tinggi badan (m): ";
        cin >> tinggi;

        if (berat <= 0 || tinggi <= 0) {
            cout << "Input berat dan tinggi harus lebih dari 0. Silakan coba lagi." << endl;
            //break;
        } else {
            break; // Keluar dari perulangan jika input valid
        }
    }

    // Rumus BMI
    bmi = berat /pow(tinggi, 2);

    // Output berdasarkan nilai BMI
    if (bmi < 18.5) {
        cout << "BMI Anda: " << bmi << "\nAnda kekurangan berat badan";
    } else if (18.5 <= bmi && bmi <= 24.9) {
        cout << "BMI Anda: " << bmi << "\nBerat badan Anda Ideal";
    } else if (25 <= bmi && bmi <= 29.9) {
        cout << "BMI Anda: " << bmi << "\nAnda kelebihan berat badan";
    } else if (30 <= bmi && bmi <= 34.9) {
        cout << "BMI Anda: " << bmi << "\nAnda mengalami obesitas tingkat 1";
    } else if (35 <= bmi && bmi <= 39.9) {
        cout << "BMI Anda: " << bmi << "\nAnda mengalami obesitas tingkat 2";
    } else if (bmi >= 40) {
        cout << "BMI Anda: " << bmi << "\nAnda mengalami obesitas tingkat 3";
    }

    return 0;
}
