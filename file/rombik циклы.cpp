#include <iostream>
using namespace std;

int z1()
{
    
    cout << "Первый уровень сложности! Введите сумму этих чисел при умножении друг на друга 2*2 =";
    int h3;
    cin >> h3;
    switch (h3) {
    case(4):
        cout << "Молодец правильно! ";
        break;
    default:
        cout << "\nНеправильно ";
        int i = 1;
        cout << "Таблица умножения на 2: ";
        while (i <= 10)
        {
            cout << "\n" << i + i << endl;
            i++;
        }
        break;
    }
    cout << "\nВторой уровень сложности! Введите сумму этих чисел при умножении друг на друга 6*7 =";
    int h1;
    cin >> h1;
    switch (h1) {
    case(42):
        cout << "Молодец правильно! ";
        break;
    default:
        cout << "\nНеправильно ";
        int j = 2;
        cout << "Таблица умножения на 6: ";
        cout << "\n6\n";
        while (j <= 10)
        {
            cout << "\n" << 6 * j << endl;
            j++;
        }
        break;

    }
    cout << "\nТретий уровень сложности! Введите сумму этих чисел при умножении друг на друга 9*6 =";
    int h2;
    cin >> h2;
    switch (h2) {
    case(54):
        cout << "Молодец правильно! ";
        break;
    default:
        cout << "\nНеправильно ";
        int o = 2;
        cout << "Таблица умножения на 9: ";
        cout << "\n9\n";
        while (o <= 10)
        {
            cout << "\n" << 9 * o << endl;
            o++;
        }
        break;
    }
    return 0;
}
int z2() 
{
   
        int n;
        cout << "Введите максимальную ширину ромба: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n - i; j++) cout << " ";
            for (int j = 0; j < 2 * i - 1; j++) cout << "*";
            cout << "\n";
        }
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 0; j < n - i; j++) cout << " ";
            for (int j = 0; j < 2 * i - 1; j++) cout << "*";
            cout << "\n";
        }
        return 0;

}














































int main()
{
    setlocale(LC_ALL, "RU");
    z1();
    cout << "\n\n\n";
    z2();
    cout << "\n\n\n";
    return 0;
}
