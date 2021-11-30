

#include <iostream>
using namespace std;
int main()
{
    
        int A;
        int n = 1;
        cout << "Enter A: ";
        cin >> A;
        int A1 = A;
        int sum = 0;
        int C = pow(A, 2);
        while ((A1 /= 10) > 0)
        {
            n++;
        }
        while (n >= 0)
        {
            int i1 = A% 10;
            A = A / 10;
            sum += i1;
            n -= 1;
        }
        
        if (pow(sum, 3) == C)
        {
            cout << "Cube amount digits of the number is A * A: " << A * A << endl;
        }
        else
            cout << "Cube amount digits of the number is not A * A: " << A * A << endl;
             
      
 
     
     return 0;
 }
