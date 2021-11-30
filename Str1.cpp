

#include <iostream>
#include <cstring>

using namespace std;
void f(char* str, size_t i)
{
    size_t length_string = strlen(str);

    for (; i < length_string; ++i)
        str[i] = str[i + 1];
}
int main()
{
   char str[100]="Hello World!";
   cout << str<<endl;
   cout << "Entr number: ";
   int num;
   cin >> num;

   f(str,num);
   cout << str << endl;

}

