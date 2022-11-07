
#include <iostream>
using namespace std;
 
//int NUMBER(int number, int Num)
//{
//    int res = 1;
//    for (int i = 0; i < Num-1; i++)
//        return res *= number;
//}
//int sum(int a, int b) { 
//    int s = 0;
//    for (int i = a + 1; i < b; i++)
//        s += i;
//    return(s);
//}
//int dig(int a, int b)
//{
//    for (int i = a; i < b; i++)
//    {
//        int result = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if ((i % j) == 0)
//            {
//                result += j;
//            }
//        }
//        if (result == i && result)
//        {
//            return result;
//        }
//    }
//}
//int isHappy(unsigned int num)
//{
//    if (num < 100000 || num > 999999)
//        return -1;
//    return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
//}
/*int Lin (int a[], int size, int key){
   for(int i=0;i<size;i++)
       if(a[i] == key)
           return i;
   return -1;
}*/
/*int binsearch(int x, int v[], int n)
{
    int low, high, mid;
 
    low = 0;
    high = n;
    while(low <= high) {
        mid = (low + high) / 2; 
        if(x < v[mid])              
            high = mid - 1;
        else if(x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}*/
int main()
{ 
    setlocale(0, "Russian");
    /*cout << "Home task 5.1\n";
    int number, Num;
    cout << "Введите number: ";
    cin >> number;
    cout << "Введите Num: ";
    cin >> Num;
    cout << "Результат:" << NUMBER(number, Num) << endl;*/
    /*cout << "Home task 5.2\n";
    int a, b;
    cin >> a >> b;
    cout << (sum(a, b));*/
    /*cout << "Home task 5.3\n";
    int res = dig(0, 9000);
    cout << res << " \n";*/
    /*cout << "Home task 5.5";
    int res = isHappy(267456);
    if (res == 1)
        cout << "Счастливое" << endl;
    else if (res == 0)
        cout << "НЕ счастливое" << endl;*/
    /*cout << "Home task 5.1, массив";
 const int aSize=100;
   int a[aSize], Key, el;
   for(int x=0;x<aSize;x++)
           a[x]=2*x;
	cout<<"Введите слово:  ";
	cin>>Key;
	el=Lin(a, aSize, Key);
	if(el!=-1)
        cout<<"\nСлово было найдено в элементе "<<el<<'\n';*/
 /*cout << "Home task 5.2,массив";
	int i, ret, num, size = 6, a[6];
    for(i = 0; i < size; i++) {
        a[i] = i;
        printf("d", a[i]);
    }
    num = 1;
    if( (ret = binsearch(num, a, size)) < 0)
        printf("\nЧисло отсутствует в массиве\n", num);
    else
        printf("\nЧисло  находится в a[]\n", num, ret);
    return 0;
}*/

 
 

}
