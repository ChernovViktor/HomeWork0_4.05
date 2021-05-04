
#include <iostream>
#include <ctype.h>
#include <cstdlib>

using namespace std;

int Kolichestvo_simv(char str[])
{
	return (sizeof(str) / sizeof(str[0]));
}

void to_lower(char str[])
{
	int i = 0;
	char c;
	while (str[i])
	{
		c = str[i];
		c = tolower(c);
		str[i] = c;
		i++;
	}
	cout << str;
}
void to_upper(char str[])
{
	int i = 0;
	char c;
	while (str[i])
	{
		c = str[i];
		c = toupper(c);
		str[i] = c;
		i++;
	}
	cout << str;
}
bool is_int_number(char str[])
{
	double a = atof(str);
	if (a == int(a))
	{
		return true;
	}
	return false;
}
int to_int_number(char str[])
{
	return atoi(str);
}
/*
bool is_hex_number(char str[])
{

}
*/
int main()
{
	setlocale(LC_ALL, "ru");
	const int n = 256;
	char str[n]{};
	cout << "Введите строку: "; 
	cin.getline(str, n);
	system("cls");
	cout << str << endl;
	cout << "Выберите номер программы\n"
		<< "1) Изменить регистр на нижний\n"
		<< "2) Изменить регистр на верхний\n"
		<< "3) Узнать является ли строка int числом\n"
		<< "4) Переделать строку в int\n";
	int a = 0; cin >> a;
	switch (a)
	{
	 case 1:
	 {
		 to_lower(str);
		 break;
	 }
	 case 2:
	 {
		 to_upper(str);
		 break;
	 }
	 case 3:
	 {
		 is_int_number(str) ? cout << "Строка является int числом" : cout << "Строка не является int числом";
		 break;
	 }
	 case 4:
	 {
		 cout << "Строка перерабатывается в int число\n" << to_int_number(str);
		 break;
	 }
	}

}

