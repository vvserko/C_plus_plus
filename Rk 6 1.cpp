#include <iostream>
using namespace std;
int fn(int N1, int N2, int i) {

    if (i == N2)
        return i;
    else {
        return N1+fn(N1+1, N2, N1 + 1);
    }

}
int main() {
    int a, b;
    cout << "Enter A=";
    cin >> a;
    cout << "Enter B=";
    cin >> b;
    cout << "Summa A...B ="<<fn(a, b, 1);
}