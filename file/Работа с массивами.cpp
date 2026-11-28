
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;
void z1()//В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы.
{
    {
        const int N = 10;
        int arr[N];

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(1, 100);

        for (int i = 0; i < N; ++i)
            arr[i] = dist(gen);

        for (int x : arr)
            cout << x << " ";
        cout << "\n";
        auto [mn, mx] = minmax_element(arr, arr + N);
        cout << "минимальный = " << *mn << ", максимальный = " << *mx << "\n";

    }
}

void z2()//В одномерном массиве, заполненном случайными числами
//в заданном пользователем диапазоне, найти сумму элементов,
//значения которых меньше указанного пользователем.
{
    const int n = 10;      //размер массива
    cout << "Введите диапазон a: ";
    int a;
    cin >> a;
    cout << "Введите диапазон b: ";
    int b;
    cin >> b;
    int limit;
    cout << "Введите число, меньше которого суммировать: ";
    cin >> limit;
    int r[n];
    srand(time(0));
    for (int i = 0; i < n; ++i)
        r[i] = a + rand() % (b - a + 1);
    cout << "Массив: ";
    for (int i = 0; i < n; ++i)
        cout << r[i] << ' ';
    cout << '\n';
    int sum = 0;
    for (int i = 0; i < n; ++i)
        if (r[i] < limit)
            sum += r[i];
    cout << "сумма = " << sum << '\n';
}
void z3() /*
Пользователь вводит прибыль фирмы за год (12 месяцев).
Затем пользователь вводит диапазон (например, 3 и 6 — поиск
между 3-м и 6-м месяцем). Необходимо определить месяц,
в котором прибыль была максимальна и месяц, в котором
прибыль была минимальна с учетом выбранного диапазона.
*/
{
        const int n = 12;
        int profit[n];
        cout << "Введите прибыль за 12 месяцев:\n";
        for (int i = 0; i < n; ++i) 
        {
            cout << i + 1 << "-й месяц: ";
            cin >> profit[i];
        }
        cout << "Введите 1 диапазон месяцев: ";
        int from;
        cin >> from;
        cout << "Введите 2 диапазон месяцев: ";
        int to;
        cin >> to;
        if (from > to) swap(from, to);
        if (from < 1) from = 1;
        if (to > 12) to = 12;
        int maxIdx = from - 1;
        int minIdx = from - 1;
        for (int i = from - 1; i <= to - 1; ++i)
        {
            if (profit[i] > profit[maxIdx]) maxIdx = i;
            if (profit[i] < profit[minIdx]) minIdx = i;
        }
        cout << "Максимальная прибыль: " << profit[maxIdx]
            << " (месяц " << maxIdx + 1 << ")\n";
        cout << "Минимальная прибыль: " << profit[minIdx]
            << " (месяц " << minIdx + 1 << ")\n";

}
void  z4()/*
В одномерном массиве, состоящем из N вещественных
чисел вычислить:
■ Сумму отрицательных элементов.
■ Произведение элементов, находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и последним отрицательными элементами.
*/
{
    int N;
    cout << "Введите количество элементов N: ";
    cin >> N;
    double a[100];
    cout << "Введите " << N << " вещественных чисел:\n";
    for (int i = 0; i < N; ++i)
        cin >> a[i];
    double s1 = 0;
    for (int i = 0; i < N; ++i)
        if (a[i] < 0) s1 += a[i];
    cout << "1) Сумма отрицательных элементов = " << s1 << '\n';
    int imin = 0, imax = 0;
    for (int i = 1; i < N; ++i) 
    {
        if (a[i] < a[imin]) imin = i;
        if (a[i] > a[imax]) imax = i;
    }
    int l = min(imin, imax);
    int r = max(imin, imax);
    double p2 = 1;
    for (int i = l + 1; i < r; ++i) p2 *= a[i];
    cout << "2) Произведение элементов между min и max = " << p2 << '\n';
    double p3 = 1;
    for (int i = 1; i < N; i += 2) p3 *= a[i];
    cout << "3) Произведение элементов с чётными номерами = " << p3 << '\n';
    int first = -1, last = -1;
    for (int i = 0; i < N; ++i)
        if (a[i] < 0) {
            if (first == -1) first = i;
            last = i;
        }
    double s4 = 0;
    for (int i = first + 1; i < last; ++i) s4 += a[i];
    cout << "4) Сумма элементов между первым и последним отрицательными = " << s4 << '\n';
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
    return 0;
}


