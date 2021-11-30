
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    cout << "DZ3__Exercise 9. \n\n";

    cout << "Enter a number C: ";
    int numC;
    cin >> numC;
    cout << endl;
    int C1 = numC;
    int j = numC;
    int f = numC;
    int kolcifr = 1;
    int sum = 0;
    
    while ((C1 /= 10) > 0)
    {
        kolcifr++;
    }
    cout << "kolcifr=" << kolcifr<<endl;
    for (int i = 1; i <= kolcifr; i++)
    {
        int k = j % 10;
        j =j / 10;
        sum += k;
        
    }
    int SA = sum / kolcifr;
    cout << "sum:" << sum<<endl;
    cout << "SA=" << SA<<endl;
    
    int sum0 = 0;
    while (f > 0)
    {
        if (f % 10 == 0)
        {
            sum0++;
        }
         f /= 10;
    }
    cout << "Sum0=" << sum0 << endl;
    return 0;
}
