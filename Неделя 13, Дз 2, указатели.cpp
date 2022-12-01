

#include <iostream>
#include <Windows.h>
using namespace std;
//void show_array(int arr[], const size_t& arr_size)
//{
//    int* arr_end = arr + arr_size;
//    cout << "{ ";
//    while (arr != arr_end)
//        cout << *arr++ << " ";
//    cout << "}\n";
//}
//void Init_Array(int* array, int size_array) {
//    for (int i = 0; i < size_array; i++)
//        *(array + i) = rand() % 100;
//}
//
//void Show_Array(int* array, int size_array) {
//    for (int i = 0; i < size_array; i++)
//        cout << "\t" << *(array + i);
//    cout << endl;
//}
//
//void Reverse_Array(int* array, int size_array) {
//    for (int i = 0; i < size_array / 2; i++) {
//        int temp = *(array + i);
//        *(array + i) = *(array + (size_array - i - 1));
//        *(array + (size_array - i - 1)) = temp;
//    }
//}
//void rep(int* arr1, int* arr2, int value) {
//    for (int i(0); i != value; i++) {
//        cout << arr1[i] << endl;
//        arr2[(value - 1) - i] = arr1[i];
//    }
//    cout << "***" << endl;
//    for (int i(0); i != value; i++) {
//        cout << arr2[i] << endl;
//    }
//}
int main()
{
    setlocale(0, "Russian");
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   /* const int size = 10;
    int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int arr2[size] = { 0, 0, 0, 0, 0,  0,  0,  0,  0,  0 };

    show_array(arr1, size);
    show_array(arr2, size);

    int* ptr_arr1 = arr1;
    int* ptr_arr2 = arr2;
    int* arr_end = ptr_arr1 + size;
    for (; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2)
        *ptr_arr2 = *ptr_arr1;

    show_array(arr1, size);
    show_array(arr2, size);

    system("PAUSE");
    return 0;*/
   

    /*const int Size_Array = 11;
    int Arr[Size_Array];

    Init_Array(Arr, Size_Array);
    Show_Array(Arr, Size_Array);
    Reverse_Array(Arr, Size_Array);
    Show_Array(Arr, Size_Array);

    cout << endl;
    system("pause");
    system("cls");
    return(0);*/
    /*int love = 5;
    int* arr1, * arr2;

    arr1 = new int[love];
    arr2 = new int[love];

    for (int i(0); i != love; i++) {
        arr1[i] = rand() % 10;
    }

    rep(arr1, arr2, love);

    system("pause");
    return 0;*/


}


