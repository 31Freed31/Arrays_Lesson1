#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    const int SIZE = 15;
    float arr[SIZE];

    cout << "Введите 15 дробных чисел: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Числа в порядке убывания: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
}