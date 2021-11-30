#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    cout << "DZ3__Exercise 8. \n\n";

    cout << "Enter a number A: ";
    int numA;
    cin >> numA;
    cout << endl;
    cout << "Enter a number B: ";
    int numB;
    cin >> numB;
    cout << endl;
    int max;
    if (numA > numB)
    {
        max = numA;
    }
    else
    {
        max = numB;
    }
    for (int i = 1; i <=max; i++)
    {
        if (numA % i == 0 && numB % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
