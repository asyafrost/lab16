
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");
    int x, n, k;
    int a1, d, b;
    cout << "Введите номер задания:" << endl;
    cin >> x;

    switch(x)
    {
    case 1:
        cout << "Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . ." << endl;
        cout << "Введите число, большее 0:" << endl;
        cin >> n;
        int a[100];
        k = 1;
        for (int i = 0; i < n; i++)
        {
            a[i] = k;
            k += 2;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        break;
    case 2:
        cout << "Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . ." << endl;
        cout << "Введите число элементов в массиве большее 1, первый член и знаменатель" << endl;
        cin >> n;
        cin >> a1 >> d;
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = a1 * pow(d, i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        break;
    
    }

}