
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    cout << "DZ3__Exercise 2__3, : \n\n";

    int n1 = 100;
    int n2 = 999;
          
    int b=0;
    int c = 0;
        for (int i = n1; i <= n2; i++)
        {
            int i1 = i % 10;
            int i2 = ((i - i1) / 10) % 10;
            int i3 = (i - i % 100) / 100;
            if (i1 == i2 || i1 == i3 || i2 == i3)
                b+=1;
                // cout << i << "  ";
                 if (i1 != i2 && i1 != i3 && i2 != i3)
                     c += 1;
        }
    cout << "\n Number of integers that have two same numbers: " << b;
    cout << "\n Number of integers that have all different numbers: " << c;
    return 0;
}