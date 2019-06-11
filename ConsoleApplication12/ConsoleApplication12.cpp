#include "pch.h"

#include <iostream>

#include <string>

#include <ctime>

using namespace std;



struct event
{

	string name;

	string levelEvent;

	string codeEvent;



	int tm_mday;

	int tm_mon;

	int tm_year;



	int tm_min;

	int tm_hour;



	event(string name = "NULL", string levelEvent = "NULL", string codeEvent = "NULL", int tm_mday = 0, int tm_mon = 0, int tm_year = 0, int tm_hour = 0, int tm_min = 0)

	{

		this->name = name;

		this->levelEvent = levelEvent;

		this->codeEvent = codeEvent;

		this->tm_mday = tm_mday;

		this->tm_mday = tm_mday;

		this->tm_mon = tm_mon;

		this->tm_year = tm_year;

		this->tm_hour = tm_hour;

		this->tm_min = tm_min;

	}

};

event errors[5];



void show(bool many, int number)

{

	if (many)

		for (int i = 0; i < 5; i++)

		{

			cout << "\t№" << i + 1 << endl;

			cout << "Пройденное время: " << abs(difftime(errors[i].tm_mday, 8)) << "." << abs(difftime(errors[i].tm_mon, 6)) << "." << abs(difftime(errors[i].tm_year, 2019)) << endl;

			cout << "Приложение: " << errors[i].name << endl;

			cout << "Уровень события: " << errors[i].levelEvent << endl;

			cout << "Код собития: " << errors[i].codeEvent << endl;

			cout << "Дата события: " << errors[i].tm_mday << "." << errors[i].tm_mon << "." << errors[i].tm_year << endl;

			cout << "Время события: " << errors[i].tm_hour << ":" << errors[i].tm_min << endl << endl;

		}

	else

		cout << "\t№" << number + 1 << endl;

	cout << "Пройденное время: " << abs(difftime(errors[number].tm_mday, 8)) << "." << abs(difftime(errors[number].tm_mon, 6)) << "." << abs(difftime(errors[number].tm_year, 2019)) << endl;

	cout << "Приложение: " << errors[number].name << endl;

	cout << "Уровень события: " << errors[number].levelEvent << endl;

	cout << "Код собития: " << errors[number].codeEvent << endl;

	cout << "Дата события: " << errors[number].tm_mday << "." << errors[number].tm_mon << "." << errors[number].tm_year << endl;

	cout << "Время события: " << errors[number].tm_hour << ":" << errors[number].tm_min << endl << endl;

}



bool find(int fYear, bool finish)

{

	if (fYear > 2019 || fYear < 1990)

		finish = true;

	for (int i = 0; i < 5; i++)

		if (errors[i].tm_year == fYear)

			show(false, i);

	return finish;

}





int main()

{

	setlocale(LC_ALL, "ru");

	bool finish = false;

	int fYear;



	errors[0] = { "Youtube", "Error", "12&3", 13, 6, 2007, 16, 23 };

	errors[1] = { "Skype", "Warning", "104&7b", 25, 9, 2012, 10, 11 };

	errors[2] = { "Google Chrome", "Error: closed app", "00&4Qs", 3, 2, 2008, 20, 36 };

	errors[3] = { "Viber", "Warning", "b&56", 18, 2, 2019, 9, 24 };

	errors[4] = { "Need for Speed", "Warning", "Q&306", 23, 5, 2015, 18, 19 };



	show(true, 0);



	while (!finish)

	{

		cout << "Введите нужный вам год: ";

		cin >> fYear;

		finish = find(fYear, finish);

		if (finish)

		{

			cout << "Вы ввели некорректный год! Желаете еще раз?\n\t1 - да" << endl;

			cin >> fYear;

			if (fYear == 1)

				finish = false;

			else

				finish = true;

		}

		else

		{

			cout << "Желаете еще раз?\n\t1 - да" << endl;

			cin >> fYear;

			if (fYear == 1)

				finish = false;

			else

				finish = true;

		}

	}

}

