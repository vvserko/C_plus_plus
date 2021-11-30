
#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;


int func(int* Ar, int SIZE) {
    int sizeArr2 = 0;
    int a = 0;
    int* Arr2 = new int[sizeArr2];
    for (int i = 0; i < SIZE; i++) {
        if (Ar[i] < 0) {
            sizeArr2++;
            Arr2[a] = Ar[i];
            a++;            
        }
    }
    return Arr2[sizeArr2];
    //return Arr2;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int const SIZE=5;
    int Arr[SIZE];
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        Arr[i] =-5+rand() % (5+5+1);
        cout <<Arr[i]<< " ";
    }        
    cout << endl;
    
   int f=func(Arr, SIZE);

   cout << endl;
   
   for (int i = 0; i < SIZE; i++) {
       cout << f[i] << " ";
   }
   
   
    return 0;
}