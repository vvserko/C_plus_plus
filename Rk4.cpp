
#include <iostream>
using namespace std;
int fn(int N1, int N2) {

    if (N2 == 0)
        return 1;
    else
        return N1 * fn(N1, N2 - 1);
   
}
int main() {
    int N1, N2;
    cout << "Enter N1=";
    cin >> N1;
    cout << "Enter N2=";
    cin >> N2;
    cout << "Pow(N1, N2)=" << fn(N1, N2);
}
