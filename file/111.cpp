#include <iostream>

using namespace std;

int main() 
{

    //Z1:
    int Z1;
    cin >> Z1;

    if (Z1 < 100000 || Z1 > 999999) {
        cout << "Ошибка" << endl;
    }
    else {
        int Z1a = Z1 / 100000;
        int Z1b = Z1 / 10000 % 10;
        int Z1c = Z1 / 1000 % 10;
        int Z1d = Z1 / 100 % 10;
        int Z1e = Z1 / 10 % 10;
        int Z1f = Z1 % 10;

        if (Z1a + Z1b + Z1c == Z1d + Z1e + Z1f) {
            cout << "Счастливое" << endl;
        }
        else {
            cout << "Не счастливое" << endl;
        }
    }

    //Z2:
    int Z2;
    cin >> Z2;

    if (Z2 < 1000 || Z2 > 9999) 
    {
        cout << "Ошибка" << endl;
    }
    else {
        int Z2a = Z2 / 1000;
        int Z2b = Z2 / 100 % 10;
        int Z2c = Z2 / 10 % 10;
        int Z2d = Z2 % 10;

        cout << Z2b << Z2a << Z2d << Z2c << endl;
    }

    //3:
    double Z3a, Z3b, Z3c, Z3d, Z3e, Z3f, Z3g;
    cin >> Z3a >> Z3b >> Z3c >> Z3d >> Z3e >> Z3f >> Z3g;

    double Z3m = Z3a;
    if (Z3b > Z3m) Z3m = Z3b;
    if (Z3c > Z3m) Z3m = Z3c;
    if (Z3d > Z3m) Z3m = Z3d;
    if (Z3e > Z3m) Z3m = Z3e;
    if (Z3f > Z3m) Z3m = Z3f;
    if (Z3g > Z3m) Z3m = Z3g;

    cout << Z3m << endl;

    //Z4:
    double Z4AB, Z4BC, Z4w, Z4t;
    cin >> Z4AB >> Z4BC >> Z4w >> Z4t;

    if (Z4w > 2000)
    {
        cout << "Невозможно" << endl;
    }
    else
    {
        double Z4c;

        if (Z4w <= 500) {
            Z4c = 1;
        }
        else if (Z4w <= 1000) {
            Z4c = 4;
        }
        else if (Z4w <= 1500) {
            Z4c = 7;
        }
        else {
            Z4c = 9;
        }

        double Z4fAB = Z4AB * Z4c;
        double Z4fBC = Z4BC * Z4c;

        if (Z4fAB > Z4t || Z4fBC > Z4t) 
        {
            cout << "Невозможно" << endl;
        }
        else {
            double Z4r = Z4fBC - (Z4t - Z4fAB);

            if (Z4r < 0) 
            {
                Z4r = 0;
            }

            cout << Z4r << endl;
        }
    }

    return 0;
}