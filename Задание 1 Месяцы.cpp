#include <iostream>

using namespace std;

enum class months
{
	январь = 1,
	февраль,
	март,
	апрель,
	май,
	июнь,
	июль,
	август,
	сентябрь,
	октябрь,
	ноябрь,
	декабрь
};

int main()
{
	setlocale(LC_ALL, "rus");

	int monthNumber = -1;

	while (monthNumber != 0)
	{
		cout << "Введите номер месяца: ";
		cin >> monthNumber;
		months month = static_cast<months> (monthNumber);

		switch (static_cast<int>(month))
		{
		case 0:cout << "До свидания"; break;
		case 1:cout << "Январь"; break;
		case 2:cout << "Февраль"; break;
		case 3:cout << "Март"; break;
		case 4:cout << "Апрель"; break;
		case 5:cout << "Май"; break;
		case 6:cout << "Июнь"; break;
		case 7:cout << "Июль"; break;
		case 8:cout << "Август"; break;
		case 9:cout << "Сентябрь"; break;
		case 10:cout << "Октябрь"; break;
		case 11:cout << "Ноябрь"; break;
		case 12:cout << "Декабрь"; break;
		default:
			cout << "Введён некорректный номер месяца!";  break;
		}
		cout << endl;
	}
}