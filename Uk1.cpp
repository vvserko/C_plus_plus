#include <iostream>
#include <time.h>
using namespace std;



int main()
{
    int arr1[5] = { 1,2,3,4,5 };
    int arr2[5];
   
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
        cout << arr2[i];
    }
    cout << endl;
    int* a1;
    a1 = arr1;
    int* a2;
    a2 = a1;
    for (int i = 0; i < 5; i++) {
        cout << *(a2++);
    }
}