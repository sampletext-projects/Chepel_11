#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

string last_word(string& line)
{
	string last;
	int index = -1;
	for (int i = line.length() - 1; i >= 0; --i)
	{
		if (line[i] == ' ')
		{
			index = i + 1;
			break;
		}
	}
	for (int i = index; i < line.length(); ++i)
	{
		last += line[i];
	}
	return last;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Автор: Чепель Егор Максимович" << endl;
	cout << "Программа для поиска последнего слова в строке" << endl;

	string line;
	cout << "Введите строку: ";
	getline(cin, line);

	string last = last_word(line);
	cout << "Последнее слово: " << last << "\n";

	system("pause");

	return 0;
}
