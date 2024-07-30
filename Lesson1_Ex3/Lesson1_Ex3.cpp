#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed) {
    assert(speed > 0);
    return distance / speed;
}

int main() {
    setlocale(LC_CTYPE, "rus");

    float distance, speed;

    cout << "Введите расстояние: ";
    cin >> distance;
    cout << "Введите скорость: ";
    cin >> speed;

    float time = travelTime(distance, speed);
    cout << "Время в пути: " << time << " часов" << endl;
}