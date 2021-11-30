

#include <iostream>
#include <math.h>

using namespace std;



int Func(int DD1, int MM1, int YY1, int DD2, int MM2,int YY2) {
    int sum = 0;
    //переводим года  в дни
    int Y1 = 0;
    int Y2 = 0;
    int DV = 366;
    int D = 365;
    for (int i = 1; i < YY1; i++) {
        if (i % 4 == 0) {
            Y1 = Y1 + DV;
        }
        else {
            Y1 = Y1 + D;
        }
        
    }
    cout << "Y1=" << Y1 << endl;
    for (int i = 1; i < YY2; i++) {
        if (i % 4 == 0) {
            Y2 = Y2 + DV;
        }
        else {
            Y2 = Y2 + D;
        }
    }
    cout << "Y2=" << Y2 << endl;
    
    int D1 = DD1-1;
    if (D1 < 0) {
        D1 = 0;
    }
    int D2 = DD2-1;
    if (D2 < 0) {
        D2 = 0;
    }


    int chislo_dney;// месяцы в дни
    int M1 = 0;
    for (int i = 1; i < MM1; i++) 
    {
        if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) {
            chislo_dney = 31;
        }
        else if (i == 2 && YY1 % 4 == 0) {
            chislo_dney = 29;
        }
        else if (i == 2 ) {
            chislo_dney = 28;
        }
        else if (i == 3 || i == 6 || i == 9 || i == 11) {
            chislo_dney = 30;
        }
       
        M1 += chislo_dney;
    }
    cout << "M1=" << M1<<endl;
    int M2 = 0;
    for (int i = 1; i < MM2; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            chislo_dney = 31;
        }
        if (i == 2 && YY2 % 4 == 0) {
            chislo_dney = 29;
        }
        if (i == 2 ) {
            chislo_dney = 28;
        }
        else if (i == 3 || i == 6 || i == 9 || i == 11){
            chislo_dney = 30;
        }
       
        M2 += chislo_dney;
    }
    cout << "M2=" << M2 << endl;
    int SUM1 = Y1 + D1 + M1;
    int SUM2 = Y2 + D2 + M2;
    cout << "sum1=" << SUM1<<endl;
    cout << "sum2=" << SUM2<<endl;
    int s = SUM2 - SUM1;
    int rez = abs(s);
    return rez;
}

int main()
{
    cout << "Enter Date 1 (DD1;MM1;YY1):" << endl;
    cout << "DD1: ";
    int DD1;
    cin >> DD1;
    cout << endl;
    cout << "MM1: ";
    int MM1;
    cin >> MM1;
    cout << endl;
    cout << "YY1: ";
    int YY1;
    cin >> YY1;
    cout << endl;
    cout << "Enter Date 2 (DD2;MM2;YY2):" << endl;
    cout << "DD2: ";
    int DD2;
    cin >> DD2;
    cout << endl;
    cout << "MM2: ";
    int MM2;
    cin >> MM2;
    cout << endl;
    cout << "YY2: ";
    int YY2;
    cin >> YY2;
    cout << endl;
    int rez1= Func(DD1, MM1, YY1, DD2, MM2, YY2);
    cout << "Number of days is: " << rez1;

}
