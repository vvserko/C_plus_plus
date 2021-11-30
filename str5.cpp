
#include <iostream>
#include <cstring>

using namespace std;
int f1(char* str,char symb)
{
    int s = 0;//счетчик
    int i;
    size_t length_string = strlen(str);
    for (i = 0; i < length_string; i++) {

        if (str[i] == symb) {
            s++;
        }
    }
    return s;
}


int main()
{
    char str[100];
    cin >> str;
    cout << endl;
    cout<< "Enter the symbol, that you want to find: ";
    char symb;
    cin >> symb;
    int Rez = f1(str, symb);
    cout << "The quantity of symbols is: "<<Rez<<endl;    
}