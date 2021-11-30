#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    int n1 = 55;
    cout << "Number 1=" << n1;
    cout << endl;
    int n2 = 63;
    cout << "Number 2=" << n2;
    cout << endl;
    int temp;
    int* pr1 = &n1;
    int* pr2 = &n2;
     temp= *pr1;
    *pr1 = *pr2;
    *pr2 = temp;

    cout << "Number 1=" << n1;
    cout << endl;
    cout << "Number 2=" << n2;
    cout << endl;
    return 0;
}