
#include <iostream>
using namespace std;
#include <time.h>


int main()
{
    
    const int size = 10; // размер массива
    int arr[size];// создание массива
    srand(time(0)); //инициализация генератора случайных чисел 
    for (int i = 0; i < size; i++) {
        arr[i] = -10 + rand() % (21);
        cout << arr[i]<<" ";
    }
    cout << endl;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int j = 0; j < size; j++) {
        if (arr[j] < min) {
            min = arr[j];
            if (arr[j] > max) {
                max = arr[j];
            }
        }
    }
    cout << "MIN=" << min<<endl;
    cout << "MAX=" << max << endl;
    
}
