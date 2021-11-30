
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    cout << "DZ3__Exercise 7, : \n\n";

    cout << "Enter a number: ";
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i ==0 )
        {
            cout << i << " ";
        }
    }
    system("pause");
    return 0;
}
