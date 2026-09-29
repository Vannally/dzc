
#include <iostream>

using namespace std;

int z1()
{
    cout << "Hello World!\n";
    return 0;
}

int z2()
{
    cout << "Введите первое число";
    int number1;
    cin >> number1;
    cout << "Введите второе число";
    int number2;
    cin >> number2;
    int number3 = (number1 + number2);
    cout << "сумма чисел равна:" << number3;
    return 0;


}

int z3()
{
    cout << "Введите первое число";
    int numbe1;
    cin >> numbe1;
    cout << "Введите второе число";
    int numbe2;
    cin >> numbe2;
    int numbe3 = (numbe1 + numbe2);
    int numbe4 = (numbe1 - numbe2);
    int numbe5 = (numbe1 * numbe2);
    int numbe6 = (numbe1 / numbe2);
    int numbe7 = (numbe1 % numbe2);
    cout << "сумма равна:" << numbe3;
    cout << "\nразность равна:" << numbe4;
    cout << "\n\nпроизведение равно:" << numbe5;
    cout << "\n\n\nцелая часть от деления равна: " << numbe6;
    cout << "\n\n\n\nостаток о деления равен:" << numbe7;
    return 0;


}
int z4()
{
    cout << "Введите длину:";
    int dlina;
    cin >> dlina;
    cout << "Введите Ширину";
    int hirina;
    cin >> hirina;
    int perimetr = (2 * (dlina + hirina));
    int ploshad = (dlina * hirina);
    cout << "периметр равен:" << perimetr;
    cout << "\nплощадь равна:" << ploshad;
    return 0;
}
int z5()
{
    cout << "Введите первое число";
    int numb1;
    cin >> numb1;
    cout << "Введите второе число";
    int numb2;
    cin >> numb2;
    cout << "Введите третье число";
    int numb3;
    cin >> numb3;
    int summ = ((numb1 + numb2 + numb3) / 3);
    cout << "Среднее арифметическое:" << summ;
    return 0;
}
int z6()
{
    int s;
    cin >> s;

    int hours = s / 3600;
    int minutes = (s % 3600) / 60;
    int seconds = s % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}

int z7() {
    const double K1 = 9;
    const double K2 = 5;

    double C;
    cin >> C;

    double F = C * K1 / K2 + 32;

    cout << F << endl;
    return 0;
}

int z8()
{
    const double PI = 3.14159;

    double r;
    cin >> r;

    double L = 2 * PI * r;
    double S = PI * r * r;

    cout << "Длина: " << L << endl;
    cout << "Площадь: " << S << endl;
    return 0;
}

int z9() {
    int n;
    cin >> n;

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    int sum = d1 + d2 + d3 + d4;
    int prod = d1 * d2 * d3 * d4;

    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << prod << endl;
    return 0;
}

int z10() {
    const double TAX = 0.13;

    double rate, hours, bonus;
    cin >> rate >> hours >> bonus;

    double accrued = rate * hours + bonus;
    double tax = accrued * TAX;
    double net = accrued - tax;

    cout << "Начислено: " << accrued << endl;
    cout << "Налог: " << tax << endl;
    cout << "На руки: " << net << endl;
    return 0;
}


int main()
{
    z1();
    cout << "\n\n";
    z2();
    cout << "\n\n";
    z3();
    cout << "\n\n";
    z4();
    cout << "\n\n";
    z5();
    cout << "\n\n";
    z6();
    cout << "\n\n";
    z7();
    cout << "\n\n";
    z8();
    cout << "\n\n";
    z9();
    cout << "\n\n";
    z10();
    cout << "\n\n";
    return 0;
}