// vb.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Exercise 1, paragraph 5: \n\n";
    cout <<"Enter number n: ";
    int n;
    cin >> n;
    cout << "Enter number x: ";
    float x;
    cin >> x;
    float X = x * x;
    float Y=0.3333;
    float sumsqr = pow (X, Y);
    float LN = log (1+x);
    float SumLN = 2 / LN;
    for (int i=1;i<=n;i++)
    {
        sumsqr = pow((X + sumsqr), Y);
        LN = log(LN);
        SumLN = SumLN + 2 / LN;
    }
        cout << "Result 5a=" << sumsqr << endl;
        cout << "Result 5b=" << SumLN << endl;


    cout << "\n\n";
    cout << "Exercise 2, paragraph 5: \n\n";
    cout << "Enter number1: ";
    int n1;
    cin >> n1;
    cout << "Enter number2: ";
    int n2;
    cin >> n2;

    int d1 = 0;
    int d2 = 0;
    int number1 = n1;
    int number2 = n2;
    int sum1 = 0;
    int sum2 = 0;
    while (n1 != 0)
    {
        while (n1 > 0)
        {
            d2 = n1 % 10;// остаток от десятков числа n1 -  последняя цифра
            sum1 += d2; // сумма цифр
            n1 = n1 / 10; // первая цифра
        }
    }
    while (n2 != 0)
    {
        while (n2 > 0)
        {
            d2 = n2 % 10;// остаток от десятков числа n1 -  последняя цифра
            sum2 += d2; // сумма цифр
            n2 = n2 / 10; // первая цифра
        }
    }
    if (sum1 > sum2)
    {
        cout << "The number with maximum sum of the numerals is Number 1= " << number1 << endl;
        cout << "Sum of the numerals of Number 1= " << sum1 << endl;
    }
    else if (sum2 > sum1)
    {
        cout << "The number with maximum sum of the numerals is Number 2= " << number2 << endl;
        cout << "Sum of the numerals of Number 2= " << sum2 << endl;
    }
    else
    {
        cout << "Number 1=Number 2";
    }
    return 0;

}


