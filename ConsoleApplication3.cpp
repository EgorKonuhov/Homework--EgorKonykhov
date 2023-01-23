#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <iomanip>
using namespace std;
//void addStolb(int** pD, int p, int pC, int pI) {
//    for (int i = 0; i < p; i++) {
//        auto newRow = new int[pC + 1];
//        int currentCol = 0;
//        for (int j = 0; j < pC; j++) {
//            if (j == pI) {
//                newRow[currentCol] = 0;
//                currentCol++;
//            }
//            newRow[currentCol] = pD[i][j];
//            currentCol++;
//        }
//        delete[] pD[i];
//        pD[i] = newRow;
//    }
//}
//void DelStolb(int** pD, int p, int pC, int pI) {
//    for (int i = 0; i < p; i++) {
//        auto newRow = new int[pC - 1];
//        int currentCol = 0;
//        for (int j = 0; j < pC; j++) {
//            if (j != pI) {
//                newRow[currentCol] = pD[i][j];
//                currentCol++;
//            }
//        }
//        delete[] pD[i];
//        pD[i] = newRow;
//    }
//}
//void transpose(int matrix[5][5])
//{
//    int t;
//    for (int i = 0; i < 5; ++i)
//    {
//        for (int j = i; j < 5; ++j)
//        {
//            t = matrix[i][j];
//            matrix[i][j] = matrix[j][i];
//            matrix[j][i] = t;
//        }
//    }
//}
//void found_st(char** bd, char* s, int r)
//{
//    int i = 0;
//    char* p = 0;
//
//    for (i = 0; i < r; i++)
//        p = strstr(bd[i], s);
//    cout << p;
//}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
    int size = 4;
    int r = 5;
    int c = 5;
    int** array = new int* [r];
    /*for (int i = 0; i < r; i++) {
        array[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            array[i][j] = i * c + j;
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << size << array[i][j];
        }
        cout << endl;
    }

    addStolb(array, r, c, 1);
    c++;
    addStolb(array, r, c, 3);
    c++;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << size << array[i][j];
        }
        cout << endl;;
    }

    for (int i = 0; i < r; i++) {
        delete[] array[i];
    }
    delete[] array;

    cin.get();*/

    /*for (int i = 0; i < r; i++) {
        array[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            array[i][j] = i * c + j;
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << size << array[i][j];
        }
        cout << endl;
    }

    DelStolb(array, r, c, 3);
    c--;
    DelStolb (array, r, c, 1);
    c--;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << size << array[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++) {
        delete[] array[i];
    }
    delete[] array;

    cin.get();*/
    /*int m[5][5] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    transpose(m);
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
            cout << size << m[i][j];
        cout << '\n';
    }

    return 0;*/
    /*char stud[][20] = { "336493 Sydorov.T.I","765432 Petrov.M.E","234567 Ivanov.N.A" };
    int r = 3, len = 20;

    char** bd = new char* [r];
    for (int i = 0; i < r; i++)
        bd[i] = new char[len];

    strcpy(bd[0], "336493 Sydorov.T.I ");
    strcpy(bd[1], "765432 Petrov.M.E");
    strcpy(bd[2], "234567 Ivanov.N.A ");

    char* serth = new char[25];
    cout << "Enter tex to found: ";
    found_st(bd, serth, r);

    delete[]bd;
    return 0;*/
}
