#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите длину массива : ";
	cin >> n;

	vector <int> a(n);
	cout << "Заполните массив : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];

	}
	
	if(n%2==0){
		cout << "Числа под нечетными номерами : ";
		for (int i = 1; i <= n - 1; i += 2) {
			cout << a[i] << " ";

		}
		cout << endl;
		cout << "Числа под четными номерами : ";
		for (int i = n - 2; i >= 0; i -= 2) {
			cout << a[i] << " ";

		}
	}

	else {
		cout << "Числа под нечетными номерами : ";
		for (int i = 1; i <= n - 1; i += 2) {
			cout << a[i] << " ";

		}
		cout << endl;
		cout << "Числа под четными номерами : ";
		for (int i = n - 1; i >= 0; i -= 2) {
			cout << a[i] << " ";

		}
	}
	


}