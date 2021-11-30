#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    cout << "Enter number N1=";
    int num1;
    cin>> num1;
    char znak1= 43;
    char znak2 = 45;

    int* zn=&num1;
    
    if (*zn > 0)
        cout << "Znak=" << znak1 << " ";
    else
        cout << "Znak=" << znak2 << " ";
    cout << endl;
    return 0;
}