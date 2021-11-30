#include <iostream>
#include <time.h>
#include "function.h"


using namespace std;
srand(time(NULL));

/*�) ������� ��� ���������� ������� ���������� ���������� ; */
template <typename T1, typename T2> 
void randomFillArrayInteger(const T1 arrSize, T2 array[]){
    for (A i = 0; i < arrSize; ++i) {
        array[i] = rand() % 10 + 1.1/0.2;
    }
}


/*�) ������� ��� ������ �������� ������� �� ������� ; */
template <typename T1, typename T2>
void printArrayInteger(const T1 arrSize, T2 array[]) {
    for (int i = 0; i < arrSize; i++) {
        cout << i + 1 << "Element: " << array[i];
    }
}


/*�) ������� ��� ������ ������������ ��������; */
template <typename T1, typename T2>
int minElementInteger(const T1 arrSize, T2 array[]) {
    T1 minElement = INT_MAX;
    for (T1 i = 0; i < arrSize; i++) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }
    return minElement;
}

/*�) ������� ��� ������ ������������� ��������; */
template <typename T1, typename T2>
int maxElementInteger(const T1 arrSize, T2 array[]) {
    T1 maxElement = INT_MIN;
    for (T1 i = 0; i < arrSize; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

/*�) ������� ��� ���������� ;*/
template <typename T1, typename T2>
void sortArrayInteger(const T1 arrSize, T2 array[]) {
    for (T1 i = 0; i < arrSize; i++) {
        for (T1 j = 0; j < arrSize - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

/*�) ������� ��� �������������� �������� �������.*/
template <typename T1, typename T2>
void editArrayInteger(const T1 arrSize, T2 array[]) {
    for (T1 i = 0; i < arrSize; i++) {
        cout << "Enter " << i + 1 << " element: " << endl;
        cin >> array[i];
    }
}

void randomFillArrayDouble(const T1 arrSize, T2 array[])
{
}
