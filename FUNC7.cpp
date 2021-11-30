
#include <iostream>
#include <time.h>

using namespace std;



int Func(int arr1[],int a) {
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr1[i];
    }
    int SA = sum / a;
    return SA;
}

int main()
{
    
    int const SIZE = 3;
    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100+10;
        cout << arr[i] << " ";
    }
    cout << endl;

    float rez1 = Func(arr,SIZE);
    cout << "SA: " << rez1;

}