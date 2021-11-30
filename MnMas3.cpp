#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    //Создаем массив
    srand(time(NULL));
    const int SIZE = 4;
    int num;
    int arr[SIZE][SIZE];
    int arr1[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            arr[i][j] = 1 + rand() % (9 - 1 + 1);
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }

    cout << "Enter the number of shifts: ";
    int N;
    cin >> N;
    cout << "1: Left" << endl;
    cout << "2: Right" << endl;
    cout << "3: Up" << endl;
    cout << "4: Down" << endl;
    int a;
    cin >> a;
    switch (a)
    {
     case 1:

        for (int i = 0; i < SIZE; i++)
        {
            int j;
            for (j = 0; j + N < SIZE; j++) {
                arr1[i][j] = arr[i][j + N];
                cout << arr1[i][j] << " ";
            }

            for (int k = 0; k < N; k++)
            {
                arr1[i][j] = arr[i][k];
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        break;
     case 2:

        for (int i = 0; i < SIZE; i++)
        {
            int j;
            for (j = 0; j + N < SIZE; j++) {
                arr1[i][j] = arr[i][j + N];
                cout << arr1[i][j] << " ";
            }

            for (int k = 0; k < N; k++)
            {
                arr1[i][j] = arr[i][k];
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        break;
      case 3:
        int i;
        while (N > SIZE) N -= SIZE;
        while (N > 0)
        {
            for (int j = 0; j <= SIZE - 1; j++)
            {
                int i;
                int temp;
                for (i = 0; i < SIZE - 1; i++) {
                    if (i == 0) {
                        temp = arr[0][j];
                    }
                    arr[i][j] = arr[i + 1][j];
                }
                arr[i][j] = temp;
            }
            N--;
        }
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    
    
            break;
     
     case 4: 
         while (N > SIZE) N -= SIZE;
         while (N > 0)
         {
             for (int j = 0; j <= SIZE-1; j++)
             {
                 int i;
                 int temp;
                 for (i = 0; i < SIZE-1; i++) {
                     if (i == 0) {
                         temp = arr[0][j];
                     }
                     arr[i][j] = arr[i + 1][j];
                 }
                 arr[i][j] = temp;
             }
             N--;
         }
         for (int i = 0; i < SIZE; i++)
         {
             for (int j = 0; j < SIZE; j++)
             {
                 cout << arr[i][j] << " ";
             }
             cout << endl;
         }

        break;
        default:
        break;
    }
             
    return 0;
    system("pause");

}


