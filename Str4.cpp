
#include <iostream>
#include <cstring>

using namespace std;
void f1(char* str)
{
    int i;
    size_t length_string = strlen(str);
    for (i = 0; i < length_string; i++) {

        if (str[i]==46) {
            str[i]=33;
        }
    }
    
}


int main()
{
    char str[100];
    cin >> str;
    cout << endl;
        
    f1(str);
    cout << str << endl;
}