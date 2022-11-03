#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int a[size], i;
	int mx1 = 0; int mx2 = 0; int mx3 = 0;

    	cout << "Введите элементы целочисленного массива:" "\n" << endl;
	for (int i = 0; i < size; i++){
        cout << "a[" << i << "] = ";
		cin >> a[i];}

	for (int n = 0; n < size; n++) {
		if (a[n] > mx1)
			mx1 = a[n];
	}
	cout << "Первый максимальный элемент равен: " << mx1 << endl;

	for (int n = 0; n < size; n++) {
		if (a[n] > mx2 and a[n] < mx1)
			mx2 = a[n];
	}
	cout << "Второй максимальный элемент равен: " << mx2 << endl;

	for (int n = 0; n < size; n++) {
		if (a[n] > mx3 and a[n] < mx2)
			mx3 = a[n];
	}
	cout << "Третий максимальный элемент равен: " << mx3 << endl;






}
