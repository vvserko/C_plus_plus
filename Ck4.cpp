#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n";
    cout << "DZ3__Exercise 4, : \n\n";
    int num;
    int num2 = 0;
    

    cout <<"Enter a number: ";
    cin >> num;
    cout << endl;

    while (num > 0)
    {
        if (num % 10 != 3 && num % 10 != 6)
        {
            num2 *= 10;
            num2 += num % 10;
        }
        num /= 10;
    }

    cout << "Received number: ";

    while (num2 > 0)
    {
        cout << num2 % 10;
        num2 /= 10;
    }
    cout << endl << endl;

    system("pause");
    return 0;
}