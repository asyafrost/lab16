#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int N;
	cin >> N;
	vector <int> a(N);
	int m = N - 1;
	cout << "Введите " << N << " элементов вашего массива : ";
	for (int z = 0; z <= N - 1; z++) {
		cin >> a[z];
	}
	for (int z = 0; z <= N - 1; z++) {
		if (z == N / 2 + 1)
		{
			break;
		}
		if (z < m) {
			cout << a[z] << endl << a[m] << endl;
			m--;
		}
		else if (z = m) {
			cout << a[z] << endl;
			m -= 2;
		}
		else {
			break;
		}
		
	}
	return 0;
}