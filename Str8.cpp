
#include <iostream>
#include <cstring>

using namespace std;
void f1(char* str)
{
    int letters = 0;
    int numerals = 0;
    int other = 0;
    size_t length_string = strlen(str);
    for (int i = 0; i < length_string; i++) {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
            letters++;
        }
        
        else if (str[i] >= 48 && str[i] <= 57) {
            numerals++;
        }
        else
            other++;
    }
    cout << "letters=" << letters << endl;
    cout << "numerals=" << numerals << endl;
    cout << "other=" << other << endl;
}


int main()
{
    char str[100] = "The symbol, that you want to find is 555";
    cout << str << endl;
    f1(str);    
}