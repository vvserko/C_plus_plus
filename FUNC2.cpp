
#include <iostream>
using namespace std;
int summaCH (int a, int b);


int main()
{
    
    int n1;
    cout << "Enter the first number: ";
    cin >> n1;
    int n2;
    cout << "Enter the second number: ";
    cin >> n2;
    int rez;
    rez= summaCH(n1, n2);
    cout << "Sum of numbers between Number 1 and Number 2 is: "<<rez;
    return 0;
}
int summaCH(int a, int b) {
    int sum = 0;
    for (int i = a+1; i < b; i++) {
        sum += i;
    }
    return sum;
}

