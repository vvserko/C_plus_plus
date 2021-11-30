
#include <stdio.h>
#include <iostream>
using namespace std;

#define MIN(num1, num2) ((num1) < (num2) ? (num1) : (num2))
#define MAX(num1, num2) ((num1) < (num2) ? (num1) : (num2))
#define SQA(num1) (num1*num1)
#define POW x 
#define CHETN y 


int power(int x, int y)
{
	int d = 0;
	if (y == 0)
		d = 1;
	else if (y == 1)
		d = x;
	else if (y % 2 == 0)
		d = power(x * x, y / 2);
	else
		d = x * power(x * x, y / 2);
	return d;
}
void chetn(int x)
{
	if (x%2 == 0)
		cout<<"Chetnoe";
	else 
		cout<<"Nechetnoe";	
}

int main(void)
{
    int x, y;
    x = 10; 
    y = 4;
    cout<<"The minimum is:  "<< MIN(x, y)<<endl;
    cout << "The maximum is:  " << MAX(x, y) << endl;
    cout << "The SQA is:  " << SQA(x) << endl;
    #if POW==x	
		cout << "The POW is:  " << power(x, y);
    #endif	
    return 0;
}