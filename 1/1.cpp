using namespace std;
#include <iostream>
#include <string>
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 1;
	char a[n] = { 'a' };
	const int l = 15;
	char b[l] = "KarinaVlasova";
	cout << "Символ - a\n";
	cout << "Строка - KarinaVlasova\n";
	int k = 0;
	for (int i = 0; b[i]; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i] == a[j])
				k++;
		}
	}
	if (k)
		cout << "Количество найденных символов: " << k << endl;
	else
		cout << "Данного символа не найдено!";
	cin.get();
	return 0;
}