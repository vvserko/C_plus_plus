#include <iostream>
#include <time.h>
using namespace std;

int min(int arr[100], int n, int& poz)
{
    int sum = 0;
    for (int i = n; i < n + 10; i++) 
        sum += arr[i];
    cout << "n: " << n; 
    cout <<"  sum: " << sum << endl;

    if (100-n == 10)
    {
        poz = n;
        return sum;
    }
    else
    {
        int s1 = min(arr, n + 1, poz);
        if (sum <= s1)
        {
            poz = n;
            return sum;
        }
        else return s1;
    }
}

int main()
{
    int arr[100];
    int poz;
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {   // (3)
        arr[i] = 0 + rand() % (9 - 1 + 1);
        cout << arr[i] << " ";
    }
    
    min(arr, 1, poz);
    cout << "Min: " << poz << endl;   
}
