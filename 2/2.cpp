#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout<< "Введите строку на английском языке"<< endl;
	string stroka;
	cin>> stroka;
	cout<< "Введите символ, который необходимо заменить"<< endl;
	string simvol;
	cin >> simvol;
	cout << "Введите символ, на который хотите заменить" << endl;
	string simvolz;
	cin >> simvolz;
	string::size_type index;
	while ((index = stroka.find(simvol)) != string::npos)
		stroka.replace(index, simvol.size(), simvolz);
	cout << stroka << endl;
	return 0;
}