
#include <iostream>
using namespace std;
void fn(int N1, int i) {

    if (i == N1)
        cout << " * ";
    else {
        cout << " * ";
        fn(N1, i + 1);
    }

}
int main() {
    int N1, N2;
    cout << "Enter N1=";
    cin >> N1;
    fn(N1, 1);
}