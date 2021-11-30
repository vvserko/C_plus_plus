

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
        int arr1[SIZE][SIZE];
        int sum = 0;
        
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {

                arr[i][j] = 1 + rand() % (9 - 1 + 1);
                cout << arr[i][j] << " ";

            }
            cout << endl;
        }
        int k = 0;
        int SA = 0;
        int min = arr[0][0];
        int max = arr[0][0];

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++,k++) {

                sum += arr[i][j];
                if (arr[i][j] > max) {
                    max = arr[i][j];
                }
                if (arr[i][j] < min){
                    min = arr[i][j];
                }
                

            }
            cout << endl;
        }
        cout << "sum=" << sum<<endl;
        cout << "SA=" << sum/k << endl;
        cout << "MIN=" << min << endl;
        cout << "MAX=" << max << endl;
     
        return 0;
        system("pause");

    }

