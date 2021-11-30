
#include <iostream>
using namespace std;

int sov(int a, int b, int i) {        
        int sum = 0;
        for (int j = 1; j < i; j++) {  // j - находим числа, которые делятся без остатка И суммируем их
            if (i % j == 0) {
                sum = sum + j;
            }
        }      
    return sum;
}

int main()
{
    cout << "Enter the interval between number N1=";
    int num1;
    cin >> num1;
    cout << "and number N2=";
    int num2;
    cin >> num2;
    int interval;
    for (int i = num1; i <= num2; i++) {// i - перебор элементов массива

       int SUM = sov(num1, num2,i);
        if (i == SUM) {
            cout << "Sovershennoe chislo =" << i << endl;
        }
    }    
    return 0;        
}