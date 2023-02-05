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

		if (monthNumber == 0)
		{
			cout << "До свидания!";
		}
		else
		{
			months month = static_cast<months> (monthNumber);

			switch (month)
			{
			case months::январь:cout << "Январь"; break;
			case months::февраль:cout << "Февраль"; break;
			case months::март:cout << "Март"; break;
			case months::апрель:cout << "Апрель"; break;
			case months::май:cout << "Май"; break;
			case months::июнь:cout << "Июнь"; break;
			case months::июль:cout << "Июль"; break;
			case months::август:cout << "Август"; break;
			case months::сентябрь:cout << "Сентябрь"; break;
			case months::октябрь:cout << "Октябрь"; break;
			case months::ноябрь:cout << "Ноябрь"; break;
			case months::декабрь:cout << "Декабрь"; break;
			default:
				cout << "Введён некорректный номер месяца!";  break;
			}
			cout << endl;
		}
	}
}