

#include <iostream>
using namespace std;


int main()
{
    int arr[] = {-1, 4, -2, 1, 1, 5, 3, 10};
   int sum = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    cout << "Sum of negative numbers= "<<sum<<endl;
    int Num_max_el;
    int Num_min_el;
    int min=INT_MAX;
    int max=INT_MIN;
    for (int i = 0; i < 8; i++) {
        if (arr[i] > max) {
            max = arr[i];
            Num_max_el = i;
        }
        
        if (arr[i] < min) {
            min = arr[i];
            Num_min_el = i;
        }
        
    }
    cout << "Min elem" << min << endl;
    cout << "Max elem" << max << endl;

    int proizv=1;
    int d = Num_min_el;
    cout << "Num_min_el=" << Num_min_el << endl;
    int dd = Num_max_el;
    cout << "Num_max_el=" << Num_max_el << endl;
    for (int i = d+1; i < dd; i++) {
        proizv *= arr[i];
    }
    cout << "Proizvedenie between min and max elements =" << proizv << endl;
    
    
   // int schetchick = 0;
    int chet_num = 1;
    for (int i = 2; i < 8; i++) {
        if (i % 2 == 0) {
            chet_num *= arr[i];
        }
    }
    cout << "Proizvedenie of elements with even numbers =" << chet_num << endl;
    
    int first_otric;
    int last_otric;
    int sum2 = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] < 0) {
            first_otric = i;
            cout << "first_otric=" << first_otric << endl;
            break;
        }
    }
       
    int j = 8;
        while (arr[j-1] > 0) 
        {
            j--;
            last_otric = j-1;
            
            
        }
        cout << "last_otric=" << last_otric << endl;
   
    for (int k = first_otric+1; k <= last_otric-1; k++) {
        sum2 += arr[k];
    }
    cout << "Sum beetwen first and last negate numbers=" << sum2 <<endl;
    
}
