#include <iostream>
using namespace std;

int main()
{
    int i;
    const int size = 12; // размер массива
    int arr[size];// создание массива
    cout << "Enter the company's profit for the year by month."<<endl;
    for (i = 0; i < size; i++) {
        cout << i+1 <<" month: ";
        int t;
        cin >> t;
        arr[i] = t;
        cout << endl;
    }
    
    
    cout << "Enter search range:"<<endl;
    int d, dd;
    cin >> d;
    cout << endl;
    cin >> dd;

   
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = d; i <= dd;i++)
    {
        if (arr[i - 1] > max) {
            max = arr[i-1];
        }
        if (arr[i-1] < min) {
                min = arr[i-1];
        }
             
    }
    


    cout << "MIN=" << min << endl;
    cout << "MAX=" << max << endl;
    return 0;
}