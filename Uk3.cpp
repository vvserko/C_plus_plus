#include <iostream>
using namespace std;


int main()
{
    const int N = 5;
    int arr1[N] = {1,2,3,4,5 };
    int arr2[N] = {11,22,33,44,55};
    int* pr1 = arr1;
    int* pr2 = arr2;
    for (int i = 0; i < N; i++) {
        cout << *(pr2 + i)<< " ";
    }
    cout << endl;
    int* q1 = &arr1[N - 1];
    int* q2 = &arr2[N - 1];

    for (int i = 0; i < N ; i++) {
        
        *(pr2 + i) = *(q1 - i);
        cout << *(pr2 + i) << " ";
    }
    cout << endl;
    return 0;
}