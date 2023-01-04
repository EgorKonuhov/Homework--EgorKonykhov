#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

using namespace std;
//void CreateArr(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        arr = new int[size];
//    }
//}
//void InitilArr(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = i + 1;
//    }
//}
//void ViewArr(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//void del(int arr[])
//{
//    delete[] arr;
//}
//int* addEl(int arrS[], int arrF[], int sizes)
//{
//    if (arrS == nullptr || arrF == nullptr)
//    {
//        int userValue;
//        int** parrF = &arrF;
//        arrF = CreateArr(*parrF, sizes + 1);
//        cin >> userValue;
//
//        for (int i = 0; i < sizes; i++)
//        {
//            arrF[i] = arrS[i];
//        }
//        arrF[sizes] = userValue;
//        ViewArr(arrS, sizes + 1);
//    }
//    return arrF;
//}
//int* addElInd(int* arrS, int* arrF, int sizes)
//{
//    if (arrS == nullptr || arrF == nullptr)
//    {
//        int userIndex;
//        int userValue;
//        int** parrF = &arrF;
//        arrF = CreateArr(*parrF, sizes + 1);
//        cin >> userIndex;
//        if (userIndex < 0 || userIndex > sizes + 1)
//        {
//            cout << "Enter new element: ";
//            cin >> userValue;
//            arrF[userIndex] = userValue;
//            for (int i = 0; i < sizes; i++)
//            {
//                if (i >= userIndex)
//                {
//                    arrF[i + 1] = arrS[i];
//                }
//                else
//                {
//                    arrF[i] = arrS[i];
//                }
//            }
//            cout << "New array: " << endl;
//            ViewArr(arrF, sizes + 1);
//        }
//    }
//    return arrF;
//}
//int* delete_simple_numbers(int* arr, int& size)
//{
//    int kolpros = 0; 
//    for (int i = 0; i < size; i++)
//    {
//        int tmp = *(arr + i);
//
//        for (int j = 2; j <= tmp; j++)
//        {
//            if (j != tmp && tmp % j == 0)
//                break;
//            if (j == tmp && tmp % j == 0)
//            {
//                kolpros++;
//            }
//        }
//    }
//
//    int* pkolpros = new int[kolpros];
//    int count = 0;
//
//    for (int i = 0; i < size; i++) 
//    {
//        int tmp = *(arr + i);
//        for (int j = 2; j <= tmp; j++)
//        {
//            if (j != tmp && tmp % j == 0)
//                break;
//            if (j == tmp && tmp % j == 0)
//            {
//                *(pkolpros + count) = i;
//                count++;
//            }
//        }
//    }
//
//    int newsize = size - kolpros;
//    int* newpoint = new int[newsize]; 
//    count = 0;
//    int count2 = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (*(pkolpros + count2) == *(arr + i)) 
//        {
//            count2++;
//            continue;
//        }
//        else
//        {
//            *(newpoint + count) = *(arr + i);
//            count++;
//        }
//    }
//
//    delete[] arr, pkolpros;
//    size = newsize;
//    return newpoint;
//}
//void mas(int* q, int n)
//{
//    int x = 0, y = 0, z = 0;
//    int* a = new int[x];
//    int* b = new int[y];
//    int* c = new int[z];
//    for (int i = 0; i < n; i++)
//    {
//        if (*(q + i) > 0)
//        {
//            *(a + x) = *(q + i);
//            x++;
//        }
//        if (*(q + i) < 0)
//        {
//            *(b + y) = *(q + i);
//            y++;
//        }
//        if (*(q + i) == 0)
//        {
//            *(c + z) = *(q + i);
//            z++;
//        }
//    }
//
//    if (x > 0) {
//        for (int i = 0; i < x; i++)
//            cout << *(a + i) << " ";
//        cout << endl;
//    }
//
//    if (y > 0) {
//        for (int i = 0; i < y; i++)
//            cout << *(b + i) << " ";
//        cout << endl;
//    }
//
//    if (z > 0) {
//        for (int i = 0; i < z; i++)
//            cout << *(c + i) << " ";
//        cout << endl;
//    }
//    delete[] c;
//    delete[] b;
//    delete[] a;
//}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
    /*int M;
    cin >> M;
    int N;
    cin >> N;
    int C = 0;
    int* arrA= new int[M];
    int* arrB = new int[N];
    for (int i = 0; i < M; i++)
    {
        arrA[i] = rand() % 10;
        cout << arrA[i];
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        arrB[i] = rand() % 10;
       cout << arrB[i];
    }
    cout << endl;
    int* arrC = new int[C];
    bool f;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arrA[i] != arrB[j])
                f = true;
            else
                f = false;
        }
        if (f == true)
        {
            arrC[C] = arrA[i]; C++;
        }
    }
    for (int i = 0; i < C; ++i)
    {
        cout << arrA[i];
    }*/
    /*int size = 10;
    int* point = new int[size];

    for (int i = 0; i < size; i++)
    {
        *(point + i) = rand() % 10;
        cout << *(point + i) << " ";
    }
    cout << endl;

    point = delete_simple_numbers(point, size);

    for (int i = 0; i < size; i++)
    {
        cout << point[i] << " ";
    }
    cout << endl;


    delete[] point;
    return 0;*/
    /*int N;
    int A[N];
    for (int i = 0; i < N; i++)
        A[i] = rand() % 41 - 20;
    cout << "массив:\n";
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;
    int* t = A;
    mas(t, N);*/
}
