﻿

#include <iostream>
using namespace std;


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[5];
	for (int i = 0; i < 5; i++) {
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i]<<" ";
	}
}



