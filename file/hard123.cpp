#include <iostream>
#include <string>
using namespace std;
int z5() 
{
    char p[256];
    cin.getline(p, 256);

    int len = strlen(p);

    int okLen = (len >= 8 && len <= 12);

    int hasDigit = 0;
    int hasUp = 0;
    int hasLow = 0;

    for (int i = 0; i < len; i++) {
        if (p[i] >= '0' && p[i] <= '9') hasDigit = 1;
        if (p[i] >= 'A' && p[i] <= 'Z') hasUp = 1;
        if (p[i] >= 'a' && p[i] <= 'z') hasLow = 1;
    }

    if (okLen == 1 && hasDigit == 1 && hasUp == 1 && hasLow == 1)
        cout << "Пароль валиден" << endl;
    else
        cout << "Пароль невалиден" << endl;

    return 0;
}
int z4() 
{
    char letter;
    int row;
    cin >> letter >> row;

    int col = 0;
    switch (letter) {
    case 'a': col = 1; break;
    case 'b': col = 2; break;
    case 'c': col = 3; break;
    case 'd': col = 4; break;
    case 'e': col = 5; break;
    case 'f': col = 6; break;
    case 'g': col = 7; break;
    case 'h': col = 8; break;
    }

    if ((col + row) % 2 == 0)
        cout << "чёрная" << endl;
    else
        cout << "белая" << endl;

    int corner = 0;
    if ((col == 1 || col == 8) && (row == 1 || row == 8)) corner = 1;

    if (corner == 1)
        cout << "угловая" << endl;
    else if (col == 1 || col == 8 || row == 1 || row == 8)
        cout << "боковая" << endl;
    else
        cout << "центральная" << endl;

    return 0;
}

int z2() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int m1 = (a > b) ? a : b;
    int maxv = (m1 > c) ? m1 : c;

    int pa = (a > 0) ? a : 0;
    int pb = (b > 0) ? b : 0;
    int pc = (c > 0) ? c : 0;
    int sum = pa + pb + pc;

    int flag = (a > 0 && a == b && b == c) ? 1 : 0;

    cout << maxv << endl;
    cout << sum << endl;
    cout << flag << endl;
    return 0;
}
int z1() //3 задание
{
    int h1;
    cout << "ВВедите  целое число от 0 до 15: ";
    cin >> h1;
    switch (h1)
    {
    case(0):
        cout << "Нет прав";
        break;
    case(1):
        cout << "имеется право на исполнение";
        break;
    case(2):
        cout << "имеется право на запись";
        break;
    case(3):
        cout << "имеется право на запись и исполнение";
        break;
    case(4):
        cout << "имеется право на чтение";
        break;
    case(5):
        cout << "имеется право на чтение и исполнение";
        break;
    case(6):
        cout << "имеется право на чтение и запись";
        break;
    case(7):
        cout << "имеется право на чтение и исполнение и запись";
        break;
    case(8):
        cout << "имеется право на удаление ";
        break;
    case(9):
        cout << "имеется право на удаление и исполнение ";
        break;
    case(10):
        cout << "имеется право на удаление и запись";
        break;
    case(11):
        cout << "имеется право на удаление запись и исполнение";
        break;
    case(12):
        cout << "имеется право на удаление и чтение";
        break;
    case(13):
        cout << "имеется право на удаление чтение и исполнение";
        break;
    case(14):
        cout << "имеется право на удаление чтение исполение и запись";
        break;
    case(15):
        cout << "имеются все права";
        break;
    default:
        cout << "Введенно неправильное число";
    }

    return 0;
}
int z6() // 10 задание
{
    int num1;
    cout << "Введите потраченные минуты: ";
    cin >> num1;

    int num2;
    cout << "\nВведите потраченные гигабайты: ";
    cin >> num2;

    int num3;
    cout << "\nВведите отправленные смс: ";
    cin >> num3;

    int priceMin = 2;
    int priceGb = 5;
    int priceSms = 3;

    int tariffChoice;
    cout << "\nВыберите ваш тариф (1 - Тариф 1, 2 - Тариф 2, 3 - Тариф 3): ";
    cin >> tariffChoice;

    int basePrice = 0;
    int limitMin = 0, limitGb = 0, limitSms = 0;

    if (tariffChoice == 1)
    {
        // Тариф 1: 100 мин, 1 гб, 40 смс, 200 руб
        basePrice = 200;
        limitMin = 100;
        limitGb = 1;
        limitSms = 40;
        cout << "\nУ вас бюджетный тариф стоимость: " << basePrice << " руб.)\n";
    }
    else if (tariffChoice == 2)
    {
        // Тариф 2: 250 мин, 10 гб, 80 смс, 350 руб
        basePrice = 350;
        limitMin = 250;
        limitGb = 10;
        limitSms = 80;
        cout << "\nУ вас средний тариф стоимость: " << basePrice << " руб.)\n";
    }
    else if (tariffChoice == 3)
    {
        // Тариф 3: 1000 мин, 100 гб, 150 смс, 500 руб
        basePrice = 500;
        limitMin = 1000;
        limitGb = 100;
        limitSms = 150;
        cout << "\nУ вас дорогой тариф стоимость: " << basePrice << " руб.)\n";
    }
    else {
        cout << "Неверный выбор тарифа";
        return 0;
    }

    int extraMin = (num1 > limitMin) ? (num1 - limitMin) : 0;
    int extraGb = (num2 > limitGb) ? (num2 - limitGb) : 0;
    int extraSms = (num3 > limitSms) ? (num3 - limitSms) : 0;

    int extraCost = (extraMin * priceMin) + (extraGb * priceGb) + (extraSms * priceSms);
    int totalCost = basePrice + extraCost;

    cout << "Перерасход по услугам\n";
    cout << "Минуты сверх лимита (" << extraMin << "): " << extraMin * priceMin << " руб.\n";
    cout << "Гигабайты сверх лимита (" << extraGb << "): " << extraGb * priceGb << " руб.\n";
    cout << "СМС сверх лимита (" << extraSms << "): " << extraSms * priceSms << " руб.\n";
    cout << "К оплате с учетом перерасхода: " << totalCost << " руб.\n";

    return 0;
}
int z3() //задание 9
{
    int a1;
    cout << "Введите число";
    cin >> a1;
    cout << (a1 % 15 == 0 ? "FizzBuzz" : a1 % 3 == 0 ? "Fizz" : a1 % 5 == 0 ? "Buzz" : to_string(a1)) << '\n';
    return 0;
}
































int main()
{
    setlocale(LC_ALL, "Russian");
    z5();
    cout << "\n\n\n";
    z4();
    cout << "\n\n\n";
    z2();
    cout << "\n\n\n";
    z1();
    cout << "\n\n\n";
    z6();
    cout << "\n\n\n";
    z3();
    cout << "\n\n\n";
    return 0;
}