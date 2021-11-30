
#include <iostream>
#include <time.h>
using namespace std;


int main()
{

    //Создаем массив
    srand(time(NULL));
    const int SIZE = 3;
    int num;
    int arr[SIZE][SIZE];
    int sum2 = 0;

    for (int i = 0; i < SIZE; i++) {
        int sum = 0;
        for (int j = 0; j < SIZE; j++) {

            arr[i][j] = 1 + rand() % (9 - 1 + 1);
            cout << arr[i][j] << "  ";
            sum += arr[i][j];
            sum2 += arr[i][j];
        }
        cout << "|" << sum << endl;
        cout << endl;
    }

    for (int j = 0; j < SIZE; j++) {        
        cout << "---";        
    }
    cout << endl;

    int sum1 = 0;
    for (int j = 0; j < SIZE; j++) {
        for (int i =0; i < SIZE; i++) {                     
            
            sum1 += arr[i][j];
        }
        cout << sum1 <<" ";        
    }

    cout << "|";
    cout << sum1+sum2;
    


    return 0;
    system("pause");

}
