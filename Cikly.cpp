

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int j;
    setlocale(LC_ALL, "Russian");
    int N = 11;
    char character;
    cout << "Для выбора пункта 'а' введите цифру 1: "<<endl;
    cout << "Для выбора пункта 'б' введите цифру 2: " << endl;
    cout << "Для выбора пункта 'в' введите цифру 3: " << endl;
    cout << "Для выбора пункта 'г' введите цифру 4: " << endl;
    cout << "Для выбора пункта 'д' введите цифру 5: " << endl;
    cout << "Для выбора пункта 'е' введите цифру 6: " << endl;
    cout << "Для выбора пункта 'ж' введите цифру 7: " << endl;
    cout << "Для выбора пункта 'з' введите цифру 8: " << endl;
    cout << "Для выбора пункта 'и' введите цифру 9: " << endl;
    cout << "Для выбора пункта 'к' введите цифру 0: " << endl;
    cin >> character;
    switch (character)
    {
    case '1':
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i <= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '2':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i >= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '3':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j <= N - 1 && i >= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '4':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j >= N - 1 && i <= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '5':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j <= N - 1 && i <= j || i + j >= N - 1 && i >= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '6':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j <= N - 1 && i >= j || i + j >= N - 1 && i <= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '7':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j <= N - 1 && i >= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '8':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j >= N - 1 && i <= j)
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '9':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j >= N - 1 )
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    case '0':
        for (int i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i + j >= N - 1 )
                    cout << "**";
                else
                    cout << " ";
            }
            cout << endl;
        }
        break;
    default: // если введенный символ некорректен
        cout << "\nError!!! This operator isn't correct\n";
        break;
    }
    




    /*

        cout << "\n\n";
        cout << "Exercise 2, : \n\n";

        int n1 = 100;
        int n2 = 999;
        for (int b = 0; b < n2 - n1)
        {
            for (int i = 100; i < 1000)
            {
                int i1 = i % 10;
                int i2 = ((i - i1) / 10) % 10;
                int i3 = (i - i % 100) / 100;
                if (i1 == i2 || i1 == i3 || i2 = i1 || i2 = i3)
                {
                    b++;
                    cout << i;
                }

            }
            cout << "Number of integers is: ";
            cout << b;
        }

  */

    return 0;
}

