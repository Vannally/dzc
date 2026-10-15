#include <iostream>
using namespace std;
int z1()
{
    int svetofor;
    cout << "Введите цвет(1.red 2.green 3.yellow: )";
    cin >> svetofor;
    switch (svetofor)
    {
    case 1:
        cout << "СТОЯТЬ";
        break;
    case 3:
        cout << "ПРИГОТОВИТСЯ";
        break;
    case 2:
        cout << "ПОЕХАЛИ";
        break;
    default:
        cout << "Неверный цвет";
        break;
    }
    return 0;
}
int z2() 
{
    char login;
    cout << "ВВедите логин:";
    cin >> login;
    int password;
    cout << "Введите пароль:";
    if (login != 'a' && login != 'A') {
        cout << "Кто вы такой?";
    }
    else;
    {
        int password;
        cout << "Введите пароль:";
        cin >> password;
        if (password != 12345) {
            cout << "Неправильный пароль";


        }
        else {
            cout << "Добро пожаловать";
        }
    }
    return 0;
}

int z3() 
{
    int levelday;
    cout << "Введите ваш уровень дня: ";
    cin >> levelday;
    switch (levelday)
    {
    case(1):
    case(2):
    case(3):
        cout << "Держись, всё наладится ";
        break;
    case(4):
    case(5):
    case(6):
        cout << "Нормальный день ";
        break;
    case(7):
    case(8):
    case(9):
    case(10):
        cout << "Отличный день!";
        break;
    default:
        cout << "Такого варианта нет";
        break;
    }
    return 0;
}

int z4() 
{
   enum num {A,X,Y,Z};
   int number;
   cout << "Введите букву для перевода из доступных(A,X,Y,Z): ";
   cin >> number;
   switch (number)
   {
   case(A):
       cout << "d";
       break;
   case(X):
       cout << "a";
           break;
   case(Y):
       cout << "b";
       break;
   case (Z):
       cout << "c";
       break;
   default:
       cout << "Введена не та буква";
       break;
   }
   return 0;
}
int z5()
{
  char em;
  cout << "Выбери камень ножницы бумагу где камень(k), Ножницы(n),Бумага(b): ";
  cin >> em;
  switch (em) 
  {
  case 'k':
          cout << "Ура победа";
          break;
  case 'n':
          cout << "Ничья";
          break;
  case 'b':
          cout << "проигрыш";
          break;
  default:
      cout << "неверный предмет";
      break;
  }
  return 0;




}
int z6() {
    int current, target;
    cout << "Введите текущий и нужный этаж: ";
    cin >> current >> target;

    if (current < 1 || current > 9 || target < 1 || target > 9) {
        cout << "Неверный этаж";
    }
    else if (current == target) {
        cout << "Вы уже здесь";
    }
    else if (target > current) {
        cout << "Едем вверх";
    }
    else {
        cout << "Едем вниз";
    }

    return 0;
}



int z7() {
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "Цифра";
    }
    else {
        switch (ch) {
        case '+': case '-': case '*': case '/':
            cout << "Оператор"; break;
        case '(': case ')': case '[': case ']': case '{': case '}':
            cout << "Скобка"; break;
        default:
            cout << "Неизвестный символ";
        }
    }
    return 0;
}

int z8() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
        cout << "Ход возможен";
    else
        cout << "Ход невозможен";

    return 0;
}
int z9() {
    int n;
    cin >> n;

    switch (n) {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    case 10: cout << "X"; break;
    }
    return 0;
}
int z10() {
    int n;
    cin >> n;

    int d1 = n / 100000 % 10;
    int d2 = n / 10000 % 10;
    int d3 = n / 1000 % 10;
    int d4 = n / 100 % 10;
    int d5 = n / 10 % 10;
    int d6 = n % 10;

    int sum1 = d1 + d2 + d3;
    int sum2 = d4 + d5 + d6;

    bool even1 = (sum1 % 2 == 0);
    bool even2 = (sum2 % 2 == 0);

    if (even1 != even2)
        cout << "Счастливый";
    else
        cout << "Обычный";

    return 0;
}




int main() {
    setlocale(LC_ALL, "Ru");
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
    z6();
    cout << "\n\n\n";
    z7();
    cout << "\n\n\n";
    z8();
    cout << "\n\n\n";
    z9();
    cout << "\n\n\n";
    z10();
    cout << "\n\n\n";
    return 0;
}
