
#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char* str;          // указатель на строку
    
    int len;
public:
    
    String(char* s)  // конструктор с одним параметром
    {
        
    }
    ~String()         // деструктор
    {
        cout << "Удаляем строку\n";
        delete[] str; // освобождаем память
    }
    void get_string()    // ввод строки
    {
        char a[256];
        cin.getline(a, 256);
        int length = strlen(a);     // вычисляем длину строки
        len = new char[length + 1]; // выделяем необходимую память
        strcpy(str, a);
        
    }


    void display()    // покажем строку на экране
    {
       
        cout << str << endl;
    }
}
///////////////////////////////////////////////////////////
int main()
{
   
    int num;
    cin >> num;
    String* S1=new String [num];
    get_string();
   display();
   
    return 0;
}