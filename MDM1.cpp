#include<iostream>
#include<time.h>
using namespace std;


void addColsInMatrix(int** A, int n, int m, int k)
{
    
    for (int i = 0; i < n; i++)
    {
        int j = m - 1;
        while (j> k-1)
        {            
            A[i][j] = A[i][j - 1];
            j--;
           if (j == k - 1) 
                A[i][j] = rand() % 10-1; 
        }        
    }  
     

}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "russian");

    int n = 0, m = 0;
    cout << "Введите количество строк\n  ";    cin >> n;
    cout << "Введите количество столбцов\n  "; cin >> m;
    cout << "\nМатрица размера " << n << "x" << m << "\n\n";

    
    int** A = new int* [n];
    for (int i = 0; i < n; i++) A[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 10-1;
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nМатрица с добавленными  случайными числами столбцоми после k-го столбцa:\n\n";
    int k;
    cout << "Введите номер столбца\n  ";    cin >> k;
    m++;
    addColsInMatrix(A, n, m,k);
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
    

    system("PAUSE >> VOID");
    return 0;
}

