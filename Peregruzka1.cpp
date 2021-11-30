#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
template < typename T1, typename T2 >
void print(T1** a, T2 size)
{	
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			cout << a[j][i] << "\t";
		}
		cout << endl;
	}
}

template < typename T3, typename T4 >
void max(T3** a, T4 size)
{
	 T3 max = INT_MIN;
	 T3 min = INT_MAX;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			if (i == j) 
			{
				if (a[j][i] > max) 
				{
					 max= a[j][i];
				}
					if (a[j][i] < min) 
					{
						min= a[j][i];
					}
				
			}
			cout << endl;
		}		
	}
	cout << "max=" << max << endl;
	cout << "min=" << min << endl;

}

template < typename T5, typename T6 >
void sort(T5** a, T6 size)
{

	int i, j;
	int x;
	for (int k = 0; k < size; k++) {
		for (i = 0; i < size; i++) { // i - номер прохода
			for (j = 0; j < size-1; j++) { // внутренний цикл прохода
				if (a[k][j] > a[k][j+1]) {
					x = a[k][j+1];
					a[k][j+1] = a[k][j];
					a[k][j] = x;
				}
			}
		}
	}
	
}

int main() {


	srand(time(NULL));
	int DIM1 = 4;
	int DIM2 = 4;

	int** ary;    //  создание
	ary = new int* [DIM1];    // массив указателей (2)
	for (int i = 0; i < DIM1; i++) {   // (3)
		ary[i] = new int[DIM2];     // инициализация указателей
	}
	// работа с массивом
	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			ary[i][j] = 10 + rand() % (50 - 10 + 1);

		}
	}


	float** ary1;    //  создание
	ary1 = new float* [DIM1];    // массив указателей (2)
	for (int i = 0; i < DIM1; i++) {   // (3)
		ary1[i] = new float[DIM2];     // инициализация указателей
	}
	// работа с массивом
	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			ary1[i][j] = 10 + rand() % (50 - 10 + 1) / 0.31;
		}
	}


	char** ary2;    //  создание
	ary2 = new char* [DIM1];    // массив указателей (2)
	for (int i = 0; i < DIM1; i++) {   // (3)
		ary2[i] = new char[DIM2];     // инициализация указателей
	}
	// работа с массивом
	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			ary2[i][j] = 20 + rand() % (50 - 20 + 1);
		}
	}
	print(ary, DIM1);
	cout << endl;
	max(ary, DIM1);
	cout << endl;
	sort(ary, DIM1);
	print(ary, DIM1);
	delete[]ary;
	print(ary1, DIM1);
	cout << endl;
	sort(ary1, DIM1);
	print(ary1, DIM1);
	delete[]ary1;
	print(ary2, DIM1);
	delete[]ary2;


	return 0;
}

	