
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
cout << "\n\n";
cout << "Exercise 2, : \n\n";

int n1=100;
int n2=999;
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

return 0;
}
