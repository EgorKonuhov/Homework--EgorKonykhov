

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Домашнее задание 4.1\n";
   
    /*cout << "Домашнее задание номер 4.2\n";
    int k = 0;
    int i1, i2, i3;
    for (int i = 100; i <= 999; i++)
    {
        i1 = i / 100;
        i2 = i % 10;
        i3 = (i % 100) / 10;
        if (i1 == i2 || i2 == i3 || i3 == i1) k++;

    }
    cout << "Результат: " << k << "\n";*/
    /*cout << "Домашнее задание 4.3\n";
    int n1 = 0, n2 = 0, n3 = 0, summ = 0, a = 0;
    for (int i = 100; i <= 999; i++)
    {
        n1 = i / 100;
        n2 = (i / 10) % 10;
        n3 = i % 10;
        if (n1 != n2 && n2 != n3 && n1 != n3)
        {
            cout << i << endl;
        }
    }*/
   /* cout << "Домашнее задание 4.4\n";
    setlocale(0, "Russian");
    int i = 0, a = 0, k;

    cout << "Введите число: ";
    cin >> k;
    cout << endl;

    while (k > 0)
    {
        if (k % 10 != 3 && k % 10 != 6)
        {
            a *= 10;
            a += k % 10;
        }
        k /= 10;
    }

    cout << "Полученное число: ";

    while (a > 0)
    {
        cout << a % 10;
        a /= 10;
    }
    cout << endl << endl;*/
    /*cout << "Домашнее задание 4.5\n";
    cout << "Enter n:";
    int n;
    cin >> n;
    cout << "DIVISORS: " << endl;
    n = (n < 0) ? -n : n;

    for (int i = -n; i <= n; i++) {
        if (i == 0) continue;
        if (n % i == 0) {
            cout << i << ' ';
        }
    }
    cout << endl;*/
   /* cout << "Домашнее задание 4.6\n";
    int A, A1, sum = 0;
    cout << "Введите A=";
    cin >> A;
    if (A < 0)
        A = -A;
    A1 = A;
    while (A > 0)
    {
        sum += A % 10;
        A /= 10;
    }
    if (sum * sum * sum == A1 * A1)
        cout << "YES\n";
    else
        cout << "NO\n";*/
    /*cout << "Домашнее задание 4.7\n";
    int d;
    cout << "Введите число:";
    cin >> d;
    for (int i = 2; i < d; i++)
    {
        if (d % i != 0)
            continue;
        cout << i << "\n";
    }*/
   /* cout << "Домашнее задание 4.8\n";
    int n1;
    int n2;
    cout << "Введите 2 числа\n";
    cin >> n1 >> n2;
    int i;
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            cout << i << "\n";
    }*/
    /*cout << "Домашнее задание 4.9\n";
    int a;
    int n = 0;
    int sum = 0;
    int c = 0;
    cout << "Введите число:";
    cin >> a;

    while (a)
    {
        if (a % 10 == 0)
            c++;
        a /= 10;

        cout << "количество нулей" << c << "\n";

        for (n = 0; a > 0;)
        {
            sum += a % 10;
            a /= 10;
            n++;
        }
        cout << "количество цифр = " << n << " " << "\n" << "sum = " << sum << "\n" << "Среднее арифметическое= \n" << sum / n << "\n";
    }*/
   /* cout << "Домашнее задание 4.10\n";
    int h, a, w;
    cout << "Введите высоту шахматной доски:\n";
    cin >> h;
    cout << "Введите ширину шахматной доски:\n";
    cin >> w;
    cout << "Введите величину ячейки шахматной доски:\n";
    cin >> a;
    int i, jj, j, ii;
    for (i = 0; i < h; i++)
    {
        for (jj = 0; jj < a; jj++)
        {
            for (j = 0; j < w; j++)
            {
                for (ii = 0; ii < a; ii++)
                {
                    ((i + j) & 1) ? (cout << '-') : (cout << '*');
                }
            }
            cout << '\n';
        }
    }
    cout << "\n\n\n";
}*/
}