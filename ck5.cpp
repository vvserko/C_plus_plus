#include <iostream>
using namespace std;

int main()
{
   
    cout << "Enter A:";
    int A;
    cin >> A;
    int B = 0;
    int i = 1;
    while (i <= A )
    {
        if (A % i  == 0)
        {
            if (sqrt(i) == (int)sqrt(A))
            {
                if (A / pow(sqrt(i), 1 / 3) != (int)sqrt(i))
                    cout<< sqrt(i);
            }

        }
        i++;
    }

    return 0;
}