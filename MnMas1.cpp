

#include <iostream>
using namespace std;

int main()
{
   //Создаем массив
    const int SIZE = 3;
    int num;
    cout << "Enter the first number: ";
    cin >> num;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j == 0 && i==0) {
                arr[j] = num;
                cout << arr[j] << " ";
            }
            arr[j] = num*2 ;
            num = arr[j];
            cout << arr[j]<< " ";
        }
        cout << endl;
    }


}


