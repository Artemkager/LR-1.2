#include <iostream>
#include <string>
using namespace std;

void simvol(char a) {
	do {
		cout << "Введете символ" << endl;
		cin >> a;
	} while (!isalpha(a));
}

void stroka(string b, char a) {
	do {
		cout << "Введите строку" << endl;
	} while (getline(cin, b));
	for (int i = 0; i < b[i] != '\0'; i++) {
		if (b[i] == a) {
			cout << "Символ " << a << " стоит на - " << i + 1 << "месте";
		}
	}

}

int main()
{
	char a = '1';
	string(b);
	setlocale(LC_ALL, "RU");
	simvol(a);
	stroka(b, a);
	return 0;
	system("pause");
}
