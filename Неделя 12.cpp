#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//bool Visoc(int year)
//{
//    bool res = false;
//    if (year % 4 == 0)
//        res = true;
//    if (year % 100 == 0)
//        res = false;
//    if (year % 400 == 0)
//        res = true;
//    return res;
//}
//int Data(int d, int m, int y)
//{
//    int k = d;
//    switch (m - 1)
//    {
//    case 12: k += 31;
//    case 11: k += 30;
//    case 10: k += 31;
//    case  9: k += 30;
//    case  8: k += 31;
//    case  7: k += 31;
//    case  6: k += 30;
//    case  5: k += 31;
//    case  4: k += 30;
//    case  3: k += 31;
//    case  2: if (LeapYear(y)) k += 29; else k += 28;
//    case  1: k += 31;
//    }
//    k += (y - 1) * 365 + ((y - 1) / 4);
//    return k;
//}
//int Differ(int d1, int d2, int m1, int m2, int y1, int y2)
//{
//    int k = Date(d1, m1, y1) - Date(d2, m2, y2);
//    return k;
//}
//int** CreateArr(int n, int m) 
//{
//    int** arr = new int* [n];
//    for (int i = 0; i < n; i++)
//        arr[i] = new int[m];
//    return arr;
//}
//void DeleteArr(int** arr, int n) 
//{
//    for (int i = 0; i < n; i++)
//        delete[] arr[i];
//    delete[] arr;
//}
//void SetArr(int** arr, int n, int m, int a = 1, int b = 9) 
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            arr[i][j] = a + rand() % (b - a + 1);;
//}
//void ViewArr(int** arr, int n, int m) 
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//void SortArr(int** arr, int n, int m) 
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m - 1; j++)
//        {
//            int index = j;
//            int minElement = arr[i][j];
//            for (int p = j; p < m; p++)
//            {
//                if (minElement > arr[i][p])
//                {
//                    index = p;
//                    minElement = arr[i][p];
//                }
//            }
//            swap(arr[i][j], arr[i][index]);
//        }
//    }
//}
//int minArr(int** arr, int n) 
//{
//    int min = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (min > arr[i][i]) min = arr[i][i];
//    return min;
//}
//int maxArr(int** arr, int n) 
//{
//    int max = arr[0][0];
//    for (int i = 1; i < n; i++)
//        if (max < arr[i][i]) max = arr[i][i];
//    return max;
//}
//unsigned gcd(unsigned a, unsigned b)
//{
//    if (a == 0)
//        return b;
//    else if (b == 0)
//        return a;
//    else if (a > b)
//        return gcd(b, a % b);
//    else
//        return gcd(a, b % a);
//}
//int* m = new int[4];
//int* q = new int[4];
//static int sproba = 0;
//int* rand()
//{
//    for (int i = 0; i < 4; i++)
//        *(m + i) = rand() % 10;
//    return m;
//}
//int* dig(int n)
//{
//    for (int i = 3; i >= 0; i--)
//    {
//        *(q + i) = n % 10;
//        n /= 10;
//    }
//    return q;
//}
//void Count(int* x, int* y, int n, int* bull, int* cow)
//{
//    *bull = *cow = 0;
//    for (int i = 0; i < n; i++)
//        if (*(x + i) == *(y + i))
//            (*bull)++;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            if ((*(x + i) == *(y + j)) && (i != j))
//                (*cow)++;
//}
//void game(int* r, int* N)
//{
//    *N = sproba;
//    cout << "Введите число: ";
//    int number;
//    cin >> number;
//    int* b = dig(number);
//    int bull, cow;
//    Count(r, b, 4, &bull, &cow);
//    cout << "Быки= " << bull << ", коровы= " << cow << endl;
//    sproba++;
//    if (bull == 4) cout << "хорошо\n";
//    else
//        game(r, N);
//}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
    /*int d1, d2, m1, m2, y1, y2;
    cout << "Введите первый день: ";
    cin >> d2;
    cout << "Введите первый месяц: ";
    cin >> m2;
    cout << "Введите первый год: ";
    cin >> y2;
    cout << "Введите второй день: ";
    cin >> d1;
    cout << "Введите второй месяц: ";
    cin >> m1;
    cout << "Введите второй год: ";
    cin >> y1;
    cout << "Разность в днях между этими датами составляет " << Differ(d1, d2, m1, m2, y1, y2) << " дней.\n";*/
    /*int n = 4, m = n;
    int** arr = CreateArr(n, m);
    srand(time(0));
    SetArr(arr, n, m);
    cout << "Массив\n";
    ViewArr(arr, n, m);
    SortArr(arr, n, m);
    cout << "Sorted array:\n";
    ViewArr(arr, n, m);
    cout << "минимум: " << minArr(arr, n) << endl;
    cout << "максимум: " << maxArr(arr, n) << endl;
    DeleteArr(arr, n);*/
    /*unsigned a, b;
    gcd(a, b);*/
    /*int m = 0;
    srand(time(NULL));
    int* a = rand();
    game(a, &m);
    cout << "победа " << m << "\n";*/

}