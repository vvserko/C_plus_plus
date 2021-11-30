
#include <iostream>
#include <cstring>

using namespace std;

void f(char* str, char num)
{
    int j=0;
    int i=0;
    size_t length_string = strlen(str);
    while (str[i] != '\0') {
        if (str[i] != num) {
            str[j] = str[i];
            j++;
            i++;
        }
        else{
            str[j] = str[i + 1];
            i++;
            
        }
    }
    str[j] = '\0';
}


void del_symb(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main()
{
    char str[100] = "Hel***lo";
    cout << str << endl;
    cout << "Entr number: ";
    char num;
    cin >> num;
    
    //del_symb(str, num);
    f(str, num);
    cout << str << endl;
   
}