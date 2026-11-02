#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Введіть кількість чисел: ";
    cin >> n;

    int numbers[20];
    cout << "Введіть числа:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    double avg = sum / n;
    cout << "Середнє арифметичне: " << avg << endl;