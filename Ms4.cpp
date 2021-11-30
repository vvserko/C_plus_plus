

#include <iostream>
using namespace std;


int main()
{
    int arr[10] = { -1, 4, -2, 1, 1, 5, 3, 10, 20, 15 };
    int arr1[5];
    int arr2[5];
    cout << "arr: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "arr1: ";
    for (int i = 0; i < 5; i++)
    {
        if (i < 5) {
            arr1[i] = arr[i];
            
        }
        cout << " " << arr1[i];
    }
    cout << endl;
    cout << "arr2: ";
    for (int j=0, i = 5; i < 10; i++,j++)
    {

        if (i<10)
        {
            arr2[j] = arr[i];
            
        }
        cout << " " << arr2[j];
    }
    cout << endl;
    system("pause");
    return 0;
}

