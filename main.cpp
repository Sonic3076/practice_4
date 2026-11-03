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

      int minVal = numbers[0];

    int maxVal = numbers[0];

    for (int i = 1; i < n; i++) {

        if (numbers[i] < minVal) minVal = numbers[i];
        if (numbers[i] > maxVal) maxVal = numbers[i];

    }
    cout << "2. Мінімум:  " << minVal << ", Максимум: " << maxVal << endl;
