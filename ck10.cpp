#include <iostream>
using namespace std;


int main()
{
    cout << "\n\n";
    cout << "DZ3__Exercise 10. \n\n";

    cout << "Enter a cell size: ";
    int cs;
    cin >> cs;
    cout << endl;
    for (int f = 1; f <= 4; f++) {
        for (int k = 0; k < 4; k++){
            if (f % 2 == 0) {

                for (int m = 0; m < cs; m++) {
                    for (int i = 0; i < cs; i++) {
                        cout << "*";
                    }
                    for (int j = 0; j < cs; j++) {
                        cout << "-";
                    }

                }
                
                cout << endl;
            }
            else {
                for (int m = 0; m < cs; m++) {
                    for (int i = 0; i < cs; i++) {
                        cout << "-";
                    }
                    for (int j = 0; j < cs; j++) {
                        cout << "*";
                    }

                }
                cout << endl;
            }
        }

    }
}

