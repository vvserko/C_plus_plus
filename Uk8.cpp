#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int N = 5;
    int arr[N];
    int* pr = &arr[0];
    
    for (int i = 0; i < N; i++) {
        *(pr + i) = 10 + rand() % (50 - 10 + 1);
        cout << *(pr + i) << " ";
    }
    cout << endl;
    int sum=0;
    int* s = &sum;
    for (int i = 0; i < N; i++) {
        *s+=*(pr + i);
        
    }
    cout << "SUM=" << *s << " ";

    cout << endl;
    return 0;
}
