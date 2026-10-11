#include <iostream>
using namespace std;
int z1()
{
	int day;
	cout << "Введите номер дня недели(1-7):";
	cin >> day;
	switch (day) {
	case 1:
		cout << "понедельник";
		break;
	case 2:
		cout << "вторник";
		break;
	case 3:
		cout << "среда";
		break;
	case 4:
		cout << "четверг";
		break;
	case 5:
		cout << "пятница";
		break;
	case 6:
		cout << "суббота";
		break;
	case 7:
		cout << "воскресенье";
		break;

	default:
		cout << "некорретный номер дня!";
		break;
	}
	return 0;

}
int z2()
{
	int num1;
	cout << "Введите первое число для логической операции:";
	cin >> num1;
	int num2;
	cout << "Введите второе число для логической операции:";
	cin >> num2;
	char num3;
	cout << "Введите (+, -, * или /):";
	cin >> num3;

	switch (num3)
	{
	case 43:
		cout << "ответ:" << num1 + num2;
		break;
	case 45:
		cout << "ответ:" << num1 - num2;
		break;
	case 42:
		cout << "ответ:" << num1 * num2;
		break;
	case 47:
		cout << "ответ:" << num1 / num2;
		break;
	default:
		cout << "неправильный знак или число, а так же то что на ноль делить нельзя";
		break;
	}


	return 0;
}

int z3()

{
	enum Season { SUMMER, WINTER, SPING, AUTUMN };
	int s1;
	cout << "Выберите месяц где (summer это 0, winter это 1, spring 2, autumn это 3:\n";
	cin >> s1;
	switch (s1)
	{
	case 0:
		cout << "Лето средняя температура +25°C";
		break;
	case 1:
		cout << "Зима средняя температура 0 °C";
		break;
	case 2:
		cout << "Весна: средняя температура +8 °C";
		break;
	case 3:
		cout << "Осень: средняя температура +12 °C";
		break;
	default:
		cout << "неправильный выбор времени года";
		break;
	}
	return 0;
}
int z4()
{
	int menu;
	cout << "Выберите пункт: \n 1.Приветствие \n 2.Текущее время \n 3.Калькулятор \n 4.Выход \nВвод:\t";
	cin >> menu;
	switch (menu)
	{
	case 1:
		cout << "Здравствуй друг!";
		break;
	case 2:
		cout << "Текущее время:18:00";
		break;
	case 3:
		cout << "2+2=4";
		break;
	case 4:
		cout << "Досвидания!До следующей встречи.";
		break;
	default:
		cout << "неверный выбор действия";
	}

	return 0;

}
int z5()
{
	enum Bal { A, B, C, D, F };
	int bal;
	cout << "ВВедите балл(A(5),B(4),C(3),D(2),F(2)):\t";
	cin >> bal;
	switch (bal)
	{
	case A:
		cout << "A → «Отлично (5)» ";
		break;
	case B:
		cout << "B → «Хорошо (4)» ";
		break;
	case C:
		cout << "C → «Удовлетворительно (3)»";
		break;
	case D:
		cout << "D → «Слабо (2)»";
		break;
	case F:
		cout << "F → «Неудовлетворительно (2)» ";
		break;
	default:
		cout << "неверный выбор оценки";
	}
	return 0;
}
int z6()
{
	int hour;
	cout << "Введите час от 0 до 23:\t";
	cin >> hour;
	switch (hour) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "ночь";
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
		cout << "Утро";
		break;
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
		cout << "День";
		break;
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
		cout << "Вечер";
		break;
	default:
		cout << "неправильное время";
		break;
	}
	return 0;

}
int z7()
{
	enum Direction { UP, DOWN, LEFT, RIGHT };
	char cor;
	cout << "ВВЕДИТЕ WASD:";
	cin >> cor;
	Direction dir;

	switch (cor) {
	case 'w': dir = UP;    break;
	case 's': dir = DOWN;  break;
	case 'a': dir = LEFT;  break;
	case 'd': dir = RIGHT; break;
	default:
		cout << "Неизвестный символ";
		return 0;
	}

	switch (dir) {
	case UP:    cout << "(0, +1)";  break;
	case DOWN:  cout << "(0, -1)";  break;
	case LEFT:  cout << "(-1, 0)";  break;
	case RIGHT: cout << "(+1, 0)";  break;
	}

	return 0;
}
int z8()
{
		int h;
		cout << "Введите число от 1 до 10:\t";
		cin >> h;
		switch (h) {
		case 1:
			cout << "I";
			break;
		case 2:
			cout << "II";
			break;
		case 3:
			cout << "III";
			break;
		case 4:
			cout << "IV";
			break;
		case 5:
			cout << "V";
			break;
		case 6:
			cout << "VI";
			break;
		case 7:
			cout << "VII";
			break;
		case 8:
			cout << "VIII";
			break;
		case 9:
			cout << "IX";
			break;
		case 10:
			cout << "X";
			break;
		default:
			cout << "неправильное число 1-10";
			break;
		}
		return 0;
}
int z9()
{
	enum OrderStatus { NEW, PAID, SHIPPED, DELIVERED, CANCELLED };
	{
		int n;
		cin >> n;

		if (n < 0 || n > 4) {
			cout << "Некорректный ввод";
			return 0;
		}

		OrderStatus status = (OrderStatus)n;

		switch (status) {
		case NEW:       cout << "Заказ создан. Ожидается оплата."; break;
		case PAID:      cout << "Оплачен. Готовится к отправке."; break;
		case SHIPPED:   cout << "Отправлен. Ожидайте доставку."; break;
		case DELIVERED: cout << "Доставлен. Спасибо за покупку!"; break;
		case CANCELLED: cout << "Отменён. Обратитесь в поддержку."; break;
		default:        cout << "Некорректный ввод"; break;
		}

		return 0;
	}







}
int z10() 
{
	char ch;
	cin >> ch;

	// вручную приводим заглавные к строчным
	if (ch >= 'A' && ch <= 'Z') {
		ch = ch - 'A' + 'a';
	}

	switch (ch) {
	case 'r': cout << "Стоп";             break;
	case 'y': cout << "Приготовиться";    break;
	case 'g': cout << "Можно ехать";      break;
	default:  cout << "Неизвестный цвет"; break;
	}

	return 0;
}

enum AccessLevel { GUEST, USER, MODERATOR, ADMIN };

int z11() 
{
	int n;
	cin >> n;

	if (n < 0 || n > 3) {
		cout << "Некорректный уровень доступа";
		return 0;
	}

	AccessLevel level = (AccessLevel)n;

	switch (level) {
	case GUEST:
		cout << "Гость: только просмотр\n";
		cout << "Права:\n";
		cout << " - просматривать каталог\n";
		cout << " - читать статьи\n";
		break;

	case USER:
		cout << "Пользователь: просмотр и редактирование своих данных\n";
		cout << "Права:\n";
		cout << " - редактировать профиль\n";
		cout << " - оставлять комментарии\n";
		cout << " - просматривать каталог\n";
		break;

	case MODERATOR:
		cout << "Модератор: удаление сообщений, блокировка\n";
		cout << "Права:\n";
		cout << " - удалять сообщения\n";
		cout << " - блокировать пользователей\n";
		cout << " - просматривать жалобы\n";
		break;

	case ADMIN:
		cout << "Администратор: полный доступ\n";
		cout << "Права:\n";
		cout << " - управлять пользователями\n";
		cout << " - изменять настройки системы\n";
		cout << " - назначать роли\n";
		break;

	default:
		cout << "Некорректный уровень доступа";
		break;
	}

	return 0;
}

int z12() 
{
	double meters;
	char code;
	cin >> meters >> code;

	switch (code) {
	case 'm': // мм
		cout << meters << " м = " << meters * 1000 << " мм";
		break;
	case 'c': // см
		cout << meters << " м = " << meters * 100 << " см";
		break;
	case 'd': // дм
		cout << meters << " м = " << meters * 10 << " дм";
		break;
	case 'k': // км
		cout << meters << " м = " << meters / 1000 << " км";
		break;
	case 'i': // дюймы
		cout << meters << " м = " << meters * 39.3701 << " in";
		break;
	case 'f': // футы
		cout << meters << " м = " << meters * 3.28084 << " ft";
		break;
	default:
		cout << "Неизвестный код единицы";
		break;
	}

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
	z11();
	cout << "\n\n\n";
	z12();
	cout << "\n\n\n";
	return 0;
}
