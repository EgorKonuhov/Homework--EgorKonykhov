#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
using namespace std;
//int* createArray(int* intArray, int arraySize)
//{
//    intArray = new int[arraySize];
//    return intArray;
//}
//void initializeArray(int* intArray, int arraySize)
//{
//    if (intArray == nullptr)
//    {
//        cout << "Ошибка" << endl;
//        return;
//    }
//    for (int i = 0; i < arraySize; i++)
//    {
//        intArray[i] = i + 1;
//    }
//}
//void printArray(int* intArray, int arraySize)
//{
//    if (intArray == nullptr)
//    {
//        cout << "Ошибка2" << endl;
//        return;
//    }
//    for (int i = 0; i < arraySize; i++)
//    {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//}
//void deleteArray(int* intArray)
//{
//    delete[] intArray;
//}
//int* addElementEnd(int* intArrayStart, int* intArrayFinish, int arrayStartSize)
//{
//    if (intArrayStart == nullptr || intArrayFinish == nullptr)
//    {
//        cout << "Ошибка3" << endl;
//    }
//    else
//    {
//        int userValue;
//        int** pIntArrayFinish = &intArrayFinish;
//   
//        intArrayFinish = createArray(*pIntArrayFinish, arrayStartSize + 1);
//        cout << "мы добавляем новый элемент в конец массивного" << endl <<
//            "Введи новый элемент: ";
//        cin >> userValue;
//
//        for (int i = 0; i < arrayStartSize; i++)
//        {
//            intArrayFinish[i] = intArrayStart[i];
//        }
//        intArrayFinish[arrayStartSize] = userValue;
//        cout << "Новый array: " << endl;
//        printArray(intArrayFinish, arrayStartSize + 1);
//    }
//    return intArrayFinish;
//}
//int* addElementByIndex(int* intArrayStart, int* intArrayFinish, int arrayStartSize)
//{
//    if (intArrayStart == nullptr || intArrayFinish == nullptr)
//    {
//        cout << "Ошибка4" << endl;
//    }
//    else
//    {
//        int userIndex;
//        int userValue;
//        int** pIntArrayFinish = &intArrayFinish;
//
//        intArrayFinish = createArray(*pIntArrayFinish, arrayStartSize + 1);
//        cout << "мы добавляем новый элемент по индексу" << endl <<
//            "Введи индекс нового элемента: ";
//        cin >> userIndex;
//  
//        if (userIndex < 0 || userIndex > arrayStartSize + 1)
//        {
//            cout << "Ошибка" << endl;
//        }
//        else
//        {
//            cout << "Введи новый элемент: ";
//            cin >> userValue;
//            intArrayFinish[userIndex] = userValue;
//            for (int i = 0; i < arrayStartSize; i++)
//            {
//                if (i >= userIndex)
//                {
//                    intArrayFinish[i + 1] = intArrayStart[i];
//                }
//                else
//                {
//                    intArrayFinish[i] = intArrayStart[i];
//                }
//            }
//            cout << "Новый array: " << endl;
//            printArray(intArrayFinish, arrayStartSize + 1);
//        }
//    }
//    return intArrayFinish;
//}
//void deleteElement(int* intArray, int arraySize)
//{
//    if (intArray == nullptr)
//    {
//        cout << "Ошибка5" << endl;
//        return;
//    }
//    
//    int* newArray = new int[arraySize - 1];
//    int userIndex;
//    cout << "мы удаляем один элемент по индексу" << endl <<
//        "Введи индекс элемента, который вы хотите удалить: ";
//    cin >> userIndex;
//  
//    if (userIndex < 0 || userIndex > arraySize)
//    {
//        cout << "Ошибка" << endl;
//    }
//    else
//    {
//        for (int i = 0; i < arraySize; i++)
//        {
//            if (i > userIndex)
//            {
//                newArray[i - 1] = intArray[i];
//            }
//            else
//            {
//                newArray[i] = intArray[i];
//            }
//
//        }
//        cout << "Новый array: " << endl;
//        printArray(newArray, arraySize - 1);
//    }
//    delete[] newArray;
//}
//int* delete_simple_numbers(int* arr, int& size)
//{
//    int tmpsize = 0;
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
//                tmpsize++;
//            }
//        }
//    }
//
//    int* tmppoint = new int[tmpsize];
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
//                *(tmppoint + count) = i;
//                count++;
//            }
//        }
//    }
//
//    int newsize = size - tmpsize;
//    int* newpoint = new int[newsize]; 
//    count = 0;
//    int count2 = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (*(tmppoint + count2) == *(arr + i)) 
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
//    delete[] arr, tmppoint;
//    size = newsize;
//    return newpoint;
//}
//void mas(int* q, int n)
//{
//    int x = 0, y = 0, z = 0;
//    int* a = new int[];
//    int* b = new int[];
//    int* c = new int[];
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
    setlocale(0, " Russian");
    srand(time(NULL));
    /*int arraySize = 10;
    int* simpleArray1;
    int** pArray1 = &simpleArray1;
    int* simpleArray2;
    int** pArray2 = &simpleArray2;
    int* simpleArray3;
    int** pArray3 = &simpleArray3;
    simpleArray1 = createArray(*pArray1, arraySize);
    initializeArray(simpleArray1, arraySize);
    cout << "Пуск array: " << endl;
    printArray(simpleArray1, arraySize);
    simpleArray2 = addElementEnd(*pArray1, *pArray2, arraySize);
    simpleArray3 = addElementByIndex(*pArray1, *pArray3, arraySize);
    deleteElement(simpleArray3, arraySize + 1);
    deleteArray(simpleArray1);
    deleteArray(simpleArray2);
    deleteArray(simpleArray3);*/
    /* int size = 10;
    int* point = new int[size];

    for (int i = 0; i < size; i++)
    {
        *(point + i) = rand() % 8 + 2;
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
    system("pause");
    return 0;*/
    /*int A[n];
    for (int i = 0; i < n; i++)
        A[i] = rand() % 41 - 20;
    cout << "Наш массив:\n";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    int* q = A;
    mas(q, n);*/
}