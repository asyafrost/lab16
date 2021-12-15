#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива (N>2) : ";
	int A, B, N, q = 0;
	cin >> N;

	cout << "Ввести 2 первых элемента последовательности :";

	cin >> A >> B;
	q = A + B;
	vector <int> a(N);
	a[0] = A;
	a[1] = B;
	for (int z = 2; z <= N - 1; z++) {

		a[z] = q;
		q += a[z];
	}
	q = 1;
	for (auto now : a) {
		cout << q << ". " << now << endl;
		q++;
	}
}