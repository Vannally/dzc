#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Выберите задание (1-10): ";
    cin >> choice;

    if (choice == 1) {
        // Задание 1
        cout << "Введите целое число: ";
        int num;
        cin >> num;
        if (num % 2 == 0) {
            cout << "Число чётное\n";
        }
        else {
            cout << "Число нечётное\n";
        }
    }
    else if (choice == 2) {
        // Задание 2
        int a, b, c;
        cout << "Введите a: ";
        cin >> a;
        cout << "Введите b: ";
        cin >> b;
        cout << "Введите c: ";
        cin >> c;

        if (a >= b && a >= c) {
            cout << "Наибольшее: " << a << "\n";
        }
        else if (b >= a && b >= c) {
            cout << "Наибольшее: " << b << "\n";
        }
        else {
            cout << "Наибольшее: " << c << "\n";
        }
    }
    else if (choice == 3) {
        // Задание 3
        double num;
        cout << "Введите число: ";
        cin >> num;

        if (num > 0) {
            cout << "Число положительное\n";
        }
        else if (num < 0) {
            cout << "Число отрицательное\n";
        }
        else {
            cout << "Число равно нулю\n";
        }
    }
    else if (choice == 4) {
        // Задание 4
        int ball;
        cout << "Введите баллы (0-100): ";
        cin >> ball;

        if (ball >= 90 && ball <= 100) {
            cout << "Отлично\n";
        }
        else if (ball >= 75 && ball <= 89) {
            cout << "Хорошо\n";
        }
        else if (ball >= 60 && ball <= 74) {
            cout << "Удовлетворительно\n";
        }
        else if (ball >= 0 && ball <= 59) {
            cout << "Неудовлетворительно\n";
        }
        else {
            cout << "Ошибка: баллы должны быть от 0 до 100\n";
        }
    }
    else if (choice == 5) {
        // Задание 5
        int year;
        cout << "Введите год: ";
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "Год високосный\n";
        }
        else {
            cout << "Год не високосный\n";
        }
    }
    else if (choice == 6) {
        // Задание 6
        double a, b, c;
        cout << "Введите a: ";
        cin >> a;
        cout << "Введите b: ";
        cin >> b;
        cout << "Введите c: ";
        cin >> c;

        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    cout << "Бесконечно много корней\n";
                }
                else {
                    cout << "Корней нет\n";
                }
            }
            else {
                double x = -c / b;
                cout << "Один корень: " << x << "\n";
            }
        }
        else {
            double d = b * b - 4 * a * c;

            if (d > 0) {
                // Корень из d вручную 
                double root = d;
                int i;
                for (i = 0; i < 50; i++) {
                    root = (root + d / root) / 2;
                }

                double x1 = (-b + root) / (2 * a);
                double x2 = (-b - root) / (2 * a);
                cout << "Два корня: " << x1 << " и " << x2 << "\n";
            }
            else if (d == 0) {
                double x = -b / (2 * a);
                cout << "Один корень: " << x << "\n";
            }
            else {
                cout << "Корней нет\n";
            }
        }
    }
    else if (choice == 7) {
        // Задание 7
        double a, b, c;
        cout << "Введите сторону a: ";
        cin >> a;
        cout << "Введите сторону b: ";
        cin >> b;
        cout << "Введите сторону c: ";
        cin >> c;

        if (a + b > c && a + c > b && b + c > a) {
            cout << "Треугольник существует\n";

            if (a == b && b == c) {
                cout << "Тип: равносторонний\n";
            }
            else if (a == b || a == c || b == c) {
                cout << "Тип: равнобедренный\n";
            }
            else {
                cout << "Тип: разносторонний\n";
            }
        }
        else {
            cout << "Треугольник не существует\n";
        }
    }
    else if (choice == 8) {
        // Задание 8
        double a, b;
        char op;

        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Введите операцию (+, -, *, /): ";
        cin >> op;

        if (op == '+') {
            cout << "Результат: " << a + b << "\n";
        }
        else if (op == '-') {
            cout << "Результат: " << a - b << "\n";
        }
        else if (op == '*') {
            cout << "Результат: " << a * b << "\n";
        }
        else if (op == '/') {
            if (b == 0) {
                cout << "Ошибка: деление на ноль\n";
            }
            else {
                cout << "Результат: " << a / b << "\n";
            }
        }
        else {
            cout << "Ошибка: неизвестная операция\n";
        }
    }
    else if (choice == 9) {
        // Задание 9
        double summa, itog;
        cout << "Введите сумму покупки: ";
        cin >> summa;

        if (summa < 1000) {
            itog = summa;
        }
        else if (summa >= 1000 && summa < 5000) {
            itog = summa - summa * 0.05;
        }
        else if (summa >= 5000 && summa <= 10000) {
            itog = summa - summa * 0.10;
        }
        else {
            itog = summa - summa * 0.15;
        }

        cout << "Итоговая стоимость: " << itog << "\n";
    }
    else if (choice == 10) {
        // Задание 10
        int hour;
        cout << "Введите час (0-23): ";
        cin >> hour;

        if (hour < 0 || hour > 23) {
            cout << "Ошибка: час должен быть от 0 до 23\n";
        }
        else if (hour >= 6 && hour <= 11) {
            cout << "Доброе утро\n";
        }
        else if (hour >= 12 && hour <= 17) {
            cout << "Добрый день\n";
        }
        else if (hour >= 18 && hour <= 22) {
            cout << "Добрый вечер\n";
        }
        else {
            cout << "Доброй ночи\n";
        }
    }
    else {
        cout << "Ошибка: неверный номер задания\n";
    }

    return 0;
}