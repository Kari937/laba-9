#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "");
	const int N = 14;
	char vowel[N] = { 'A', 'a', 'E', 'e', 'I', 'i', 'J', 'j', 'O', 'o', 'U', 'u', 'Y', 'y' };
	string str;
	int k;
	cout << "Введите строку из латинских букв):" << endl;
	getline(cin, str);
	k = 0;
	for (int i = 0; str[i]; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (str[i] == vowel[j])
				k++;
		}
	}
	if (k)
		cout << "Количество гласных символов: " << k << endl;
	else
		cout << "Гласных символов не найдено" << endl;
	cin.get();
	return 0;
}