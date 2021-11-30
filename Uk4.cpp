#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    srand(time(NULL));
    const int N = 2;
    int arr[N];
    int* pr = &arr[0];

    for (int i = 0; i < N; i++) {
        *(pr+i)= 10 + rand() % (50 - 10 + 1);
        cout << *(pr + i) << " ";
    }
    cout << endl;
    int max;
    if (*pr > * (pr + 1))
        max = *pr;
    else
        max = *(pr + 1);
    cout << "MAX="<<max << " ";
   
    cout << endl;
    return 0;
}