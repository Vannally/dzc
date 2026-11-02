#include <iostream>
using namespace std;

int z1()
{

    int number;
    cout << "Введите любое число: ";
    cin >> number;
    cout << "число наоборот: ";
    for (; number > 0; number /=10) {
        int i = number % 10;
        cout << i;
    }

    return 0;
}
int z2()
{
    int num1;
    cout << "Введите любое число: ";
    cin >> num1;
    cout << "числа кратные числу:  " << num1 << " ";
    for (int j = 2; j < num1; j++) {
        if (num1 % j != 0) continue;
        cout << j << " ";
    }
    return 0;
}
int z3()
{
    int put;
    cout << "Введите кол-во дней которые ползет улитка: ";
    cin >> put;
    int total = 0;
    int dist = 15;
    for (int day = 1; day <= put; day++) 
    {
        total += dist;
        dist += 2;
    }
    cout << "Количество см которые проползла улитка за " << put << " дней: " << total;
    return 0;
}
int z4()
{
    int orelresult = 0;
    int coin;

    cout << "Введите 9 результатов орла(1) и решки(0):\n";

    for (int p = 1; p <= 9; p++) 
    {
        cout << "Бросок " << p << ": ";
        cin >> coin;
        while (coin != 0 && coin != 1) 
        {
            cout << "Ошибка:Введите орел(1) или решку(0): ";
            cin >> coin;
        }
        if (coin == 1)
        {
            orelresult++;
        }
    }
    cout << "\nКол-во орлов: " << orelresult;
    if (orelresult % 2 == 0) 
    {
        cout << " положительное решение  (четное число орлов)";
    }
    else 
    {
        cout << " отрицательное решение (нечётное число орлов)";
    }
    return 0;
}
int z5()
{
    int month, nedela;
    cout << "Введите номер месяца(1-12): ";
    cin >> month;
    cout << "Введите номер дня недели(1-7): ";
    cin >> nedela;
    int days;
    switch (month) {
    case 2: days = 28; break;
    case 4: case 6: case 9: case 11: days = 30; break;
    default: days = 31;
    }
    cout << "\n";
    switch (month) {
    case 1:  cout << "Январь\n"; break;
    case 2:  cout << "Февраль\n"; break;
    case 3:  cout << "Март\n"; break;
    case 4:  cout << "Апрель\n"; break;
    case 5:  cout << "Mай\n"; break;
    case 6:  cout << "Июнь\n"; break;
    case 7:  cout << "Июль\n"; break;
    case 8:  cout << "Aвгуст\n"; break;
    case 9:  cout << "Сентябрь\n"; break;
    case 10: cout << "Oктябрь\n"; break;
    case 11: cout << "Ноябрь\n"; break;
    case 12: cout << "Декабрь\n"; break;
    }
    cout << "\n";
    cout << "Пн Вн Ср Чт Пт Сб Вс\n\n";
    int cur = nedela, weekends = 0;
    for (int i = 1; i < nedela; i++) {
        cout << "   ";
    }
    for (int day = 1; day <= days; day++) {
        if (day < 10) cout << " " << day << " ";
        else           cout << day << " ";

        if (cur == 6 || cur == 7) weekends++;
        if (cur == 7) {
            cout << "\n";
            cur = 1;
        }
        else {
            cur++;
        }
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
    z3();
    cout << "\n\n\n";
    z4();
    cout << "\n\n\n";
    z5();
    cout << "\n\n\n";
    return 0;
}
