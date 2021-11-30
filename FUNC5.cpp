

#include <iostream>
using namespace std;
//Счастливым будем считать такое число из шести цифр, в котором сумма левых трех цифр равна сумме правых трех цифр.

void SCH(int a) {
    int N1 = a % 1000;
    int sum1 = N1 % 10 + (N1 % 100 - N1 % 10)/10 + (N1 - N1 % 100)/100;
    int N2 = (a - a%1000) / 1000;
    int sum2= N2 % 10 + (N2 % 100 - N2 % 10)/10 + (N2 - N2 % 100)/100;
    if (sum1 == sum2) {
        cout << "Your number is lucky!!!"<<endl;     
    }
    else {
        cout << "Your number is NOT lucky!!!" << endl;      
    }

}

void main()
{
    
    start: cout << "Enter the number: ";
    int num;
    cin >> num;
    if (num < 100000 && num >1000000) {
        goto start;
    }
    SCH(num);
    system("pause");
}