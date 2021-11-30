#include <iostream>
using namespace std;


int main()
{    
    const int N = 5;
    int arr[N] = { 1,2,3,4,5 };    
    int* pr=arr; 
    for (int i = 0; i < N; i++) {
        cout << *(pr+i);
    }
    cout << endl;
    int* q = &arr[N - 1];

    for (int i = 0; i < N/2; i++) {
        int temp=*(pr+i);
        *(pr + i) = *(q-i);
        *(q - i) = temp;        
    }
        
    for (int i = 0; i < N; i++) {
            cout << *(pr + i);
    }
    cout << endl;
    return 0;
}