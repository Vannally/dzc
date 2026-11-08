#include <iostream>
using namespace std;

int z1()
{
    int A;
    cout << "Введите первое число диапозона: ";
    cin >> A;
    int B;
    cout << "ВВедите второе число диапозона: ";
    cin >> B;
    for (int i = A; i <= B; i++)
    {
        cout << i << ": ";
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int z2()
{
    for (int n = 2; n <= 1000; n++) {
        int d = 2;
        while (d * d <= n && n % d != 0)
            d++;
        if (d * d > n) cout << n << " ";
    }
    cout << endl;
    return 0;
}
 int z3()
{
    int size;
    cin >> size;
    int m = size / 2;
    for (int i = 0; i < size; i++) {
        int j = 0;
        while (j < size) {
            if (j == i || j == size - 1 - i || j == m || i == m) cout << "* ";
            else cout << "  ";
            j++;
        }
        cout << endl;
    }
    return 0;
}
 int z4()
 {
     int count = 0;
     for (int a = 0; a < 10; a++) {
         int b = 0;
         while (b < 10) {
             for (int c = 0; c < 10; c++)
                 if (a != b && a != c && b != c) {
                     cout << a << b << c << " ";
                     count++;
                 }
             b++;
         }
     }
     cout << "\nКомбинаций: " << count
         << ", время в худшем случае: " << count * 3 << " с" << endl;
     return 0;
 }
     int z5()
     {
         double total = 0;
         for (int i = 1; i <= 12; i++) {
             double sum = 0, x;
             int k = 1;
             while (k <= 3) {
                 cout << "Сотрудник " << i << ", месяц " << k << ": ";
                 cin >> x;
                 sum += x;
                 k++;
             }
             cout << "Сотрудник " << i << ": " << sum << endl;
             total += sum;
         }
         cout << "Всего за квартал: " << total << endl;
         return 0;
     }


    int main() 
    {
        z1();
        cout << "\n\n\n";
        z2();
        cout << "\n\n\n";
        z3();
        cout << "\n\n\n";
        z4();
        cout << "\n\n\n";
        z5();
        cout << "\n\n\n";
        return 0;
    }

