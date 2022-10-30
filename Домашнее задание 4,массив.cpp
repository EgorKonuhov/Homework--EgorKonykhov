

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    /*cout << "Домашнее задание 4.1, массив";
    srand(time(NULL));
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand();
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;*/
    /*cout << "Домашнее задание 4.2, массив\n";
    int r1;
    int r2;
    int imax;
    int imin;
    const int n = 12;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Месяц " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "Введите начало месяца и конец:\n";
    cin >> r1 >> r2;

    imax = imin = r1 - 1;
    for (int i = r1; i < r2; i++)
    {
        if (a[i] > a[imax]) imax = i;
        if (a[i] < a[imin]) imin = i;
    }

    cout << "Максимальная прибыль: месяц" << imax + 1 << "\n";
    cout << "Максимальная прибыль: месяц " << imin + 1 << "\n";*/
    /*cout << "Домашнее задание 4.4,массив\n";
    srand(time(NULL));
    int a[10] = {};
    int b[5] = {};
    int c[5] = {};
    for (int i = 0, q = 0; i < 10; i++)
    {
        a[i] = rand() % (20 - (-20) + 1) + (-20);
        cout << a[i] << endl;
        if (a[i] % 2 == 0)
        {
            cout << "" << endl;
            b[q] = a[i];

        }
        else
            (a[i] % 2 == 0);
            cout << endl;
    }*/
   /* cout << "Домашнее задание 4.5,массив\n";
    const int size = 10;
    int arr[size];
    int z1[size];
    int z2[size];
    cout << "Введите случайные числа для первого массива:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr1[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "Введите случайные числа для второго массива:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr2[" << i << "] = ";
        cin >> z1[i];
    }
    cout << "\nThe third array with the sum of two arrays:\n";
    for (int i = 0; i < size; i++)
    {
        z2[i] = arr[i] + z1[i];
        cout << "arr3[" << i << "] = ";
        cout << z2[i] << "\n";
    }*/
}

