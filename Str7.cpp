
#include <iostream>
#include <cstring>

using namespace std;
void f1(char* str)
{    
    size_t length_string = strlen(str);
    for (int i = 0; i < length_string; i++) {
        if (str[i] == 32) {
            str[i] = 9;
        }
    }    
}


int main()
{
    char str[100]="The symbol, that you want to find is 555";
    cout << str << endl;
    f1(str);
    cout << str << endl;
}