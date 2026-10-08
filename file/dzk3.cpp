#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Выберите задание (1 или 2): ";
    cin >> n;

    if (n == 1)
    {
        int pid;
        int pq;
        int did;
        int dq;
        double pp = 0;
        double dp = 0;

        cout << "Пиццы:\n";
        cout << "1 Сырная 6.75\n";
        cout << "2 Гавайская 8.95\n";
        cout << "3 BBQ Курица 14.5\n";
        cout << "4 Морская 10.25\n";
        cout << "Введите код пиццы: ";
        cin >> pid;
        cout << "Введите количество: ";
        cin >> pq;

        cout << "Напитки:\n";
        cout << "1 Пепси 1.79\n";
        cout << "2 Аквафина 2.5\n";
        cout << "3 Краш Апельсин 3.09\n";
        cout << "Введите код напитка: ";
        cin >> did;
        cout << "Введите количество: ";
        cin >> dq;

        switch (pid)
        {
        case 1:
            pp = 6.75;
            break;
        case 2:
            pp = 8.95;
            break;
        case 3:
            pp = 14.5;
            break;
        case 4:
            pp = 10.25;
            break;
        default:
            cout << "Такой пиццы нет\n";
            break;
        }

        switch (did)
        {
        case 1:
            dp = 1.79;
            break;
        case 2:
            dp = 2.5;
            break;
        case 3:
            dp = 3.09;
            break;
        default:
            cout << "Такого напитка нет\n";
            break;
        }

        double pizzaSum = (pq - pq / 5) * pp;
        double drinkSum = dq * dp;

        if (dp > 2 && dq > 3)
        {
            drinkSum = drinkSum * 0.85;
        }

        double total = pizzaSum + drinkSum;

        if (total > 50)
        {
            total = total * 0.8;
        }

        cout << "\n--- Чек ---\n";

        switch (pid)
        {
        case 1:
            cout << "Сырная";
            break;
        case 2:
            cout << "Гавайская";
            break;
        case 3:
            cout << "BBQ Курица";
            break;
        case 4:
            cout << "Морская";
            break;
        default:
            cout << "?";
            break;
        }
        cout << " - " << pq << " - " << pp << "\n";

        switch (did)
        {
        case 1:
            cout << "Пепси";
            break;
        case 2:
            cout << "Аквафина";
            break;
        case 3:
            cout << "Краш Апельсин";
            break;
        default:
            cout << "?";
            break;
        }
        cout << " - " << dq << " - " << dp << "\n";

        cout << "Итого к оплате: $" << total << "\n";
    }
    else if (n == 2)
    {
        double a;
        double b;
        double c;

        cout << "Продажи 1-го менеджера: ";
        cin >> a;
        cout << "Продажи 2-го менеджера: ";
        cin >> b;
        cout << "Продажи 3-го менеджера: ";
        cin >> c;

        double s1;
        double s2;
        double s3;

        if (a < 500)
        {
            s1 = 200 + a * 3 / 100;
        }
        else if (a <= 1000)
        {
            s1 = 200 + a * 5 / 100;
        }
        else
        {
            s1 = 200 + a * 8 / 100;
        }

        if (b < 500)
        {
            s2 = 200 + b * 3 / 100;
        }
        else if (b <= 1000)
        {
            s2 = 200 + b * 5 / 100;
        }
        else
        {
            s2 = 200 + b * 8 / 100;
        }

        if (c < 500)
        {
            s3 = 200 + c * 3 / 100;
        }
        else if (c <= 1000)
        {
            s3 = 200 + c * 5 / 100;
        }
        else
        {
            s3 = 200 + c * 8 / 100;
        }

        int best = 1;
        double mx = a;

        if (b > mx)
        {
            best = 2;
            mx = b;
        }

        if (c > mx)
        {
            best = 3;
            mx = c;
        }

        if (best == 1)
        {
            s1 = s1 + 200;
        }
        else if (best == 2)
        {
            s2 = s2 + 200;
        }
        else
        {
            s3 = s3 + 200;
        }

        cout << "Менеджер 1: " << s1 << "\n";
        cout << "Менеджер 2: " << s2 << "\n";
        cout << "Менеджер 3: " << s3 << "\n";
        cout << "Лучший: менеджер " << best << " (премия 200$)\n";
    }


    else
    {
        cout << "Нет такого задания\n";
    }

    return 0;
}