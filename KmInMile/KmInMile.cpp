#include <iostream>
#include <cstdlib>

using namespace std;

double KmInMile(int k) {
    double mile;
    const double kmInMile = 1.609344;
    mile = k / kmInMile;
    return mile;

}

int main()
{
    system("chcp 1251 > nul");
    int km;
    cout << "Введите растояние в километрах: ";
    cin >> km;
    cout << "В " << km << " километрах " << KmInMile(km) << " миль." << endl;
    system("pause > nul");
    return 0;
}
