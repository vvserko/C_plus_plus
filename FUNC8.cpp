
#include <iostream>
#include <time.h>

using namespace std;



void Func(int arr1[], int a) {
    int plus = 0;
    int minus = 0;
    int nul = 0;
    for (int i = 0; i < a; i++) {
        if (arr1[i] < 0) {
            minus++;
        }
        else if (arr1[i] > 0) {
            plus++;
        }
        else {
            nul++;
        }
    }
    cout <<"minus="<< minus<<endl;
    cout << "plus=" << plus << endl;
    cout << "nul=" << nul << endl;
}

int main()
{

    int const SIZE = 12;
    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -100 + rand() %(100+100+1);
        cout << arr[i] << " ";
    }
    cout << endl;

    Func(arr, SIZE);
    

}
