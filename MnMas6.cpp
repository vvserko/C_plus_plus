

#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    //Создаем массив
    srand(time(NULL));
    const int SIZE = 5;
    int arr1[SIZE][SIZE + SIZE];
    int arr2[SIZE][SIZE];
 
    for (int i = 0; i < SIZE; i++) {       
        for (int j = 0; j < SIZE+SIZE; j++) {
            arr1[i][j] = 1 + rand() % (50 - 0 + 1);
            cout << arr1[i][j] << "  ";            
        }
        
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE ; j++) {
            if (j != 0) {
                arr2[i][j] = arr1[i][j * 2 ] + arr1[i][j * 2+1];
            }
            else {
                arr2[i][j] = arr1[i][j ] + arr1[i][j +1];
            }
            cout << arr2[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
    system("pause");

}
