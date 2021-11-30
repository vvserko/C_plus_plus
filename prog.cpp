#include <iostream>
#include <time.h>
#include "function.h"
#define INTEGER

void randomFillArrayInteger(const T1 arrSize, T2 arr[]);
void printArrayInteger(const T1 arrSize, T2 arr[]);
int minElementInteger(const T1 arrSize, T2 arr[]);
int maxElementInteger(const T1 arrSize, T2 arr[]);
void sortArrayInteger(const T1 arrSize, T2 arr[]);
void editArrayInteger(const T1 arrSize, T2 arr[]);
using namespace std;

int main() {
    srand(time(NULL));
    const int arrSize = 10;
    int intArr[arrSize];

    randomFillArray(arrSize, intArr);
    editArray(arrSize, intArr);
    minElement(arrSize, intArr);
    maxElement(arrSize, intArr);
    sortArray(arrSize, intArr);
    printArray(arrSize, intArr);
#undef INTEGER

#define DOUBLE
#include "function.h"
    double doubleArr[arrSize];
    randomFillArray(arrSize, doubleArr);
    editArray(arrSize, doubleArr);
    minElement(arrSize, doubleArr);
    maxElement(arrSize, doubleArr);
    sortArray(arrSize, doubleArr);
    printArray(arrSize, doubleArr);
#undef DOUBLE

#define CHAR
#include "function.h"
    char charArr[arrSize];
    randomFillArray(arrSize, charArr);
    editArray(arrSize, charArr);
    minElement(arrSize, charArr);
    maxElement(arrSize, charArr);
    sortArray(arrSize, charArr);
    printArray(arrSize, charArr);

    system("pause");
    return 0;
}
