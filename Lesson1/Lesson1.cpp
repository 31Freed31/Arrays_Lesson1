#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    
    string name[] = {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB",
        "PetrovB", "SidorovC", "IvanovC", "PetrovC", "SidorovD"};

    cout << "Введите номер кватриры " << endl;
    int count;

    for (int i = 0; i < 10; i++)
    {
        cin >> count;

        if (count <= 0 || count > 10)
        {
            cout << "Такой квартиры нет " << endl;
        }
        else
        {
            cout << name[count - 1] << endl;
        }
    }
}
