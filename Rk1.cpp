

#include <iostream>
using namespace std;
int fn(int N1, int N2) {
        
        if (N1%N2==0)
            return N2;        
        else 
            return fn( N2, N1%N2);
}


int main()
{   
    int N1,N2;
    cout << "Enter N1=";
    cin >> N1;
    cout << "Enter N2=";
    cin >> N2 ;    
    cout<<"Max="<<fn(N1, N2);
}
