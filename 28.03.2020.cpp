#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void bubbleSort(int a[], int size) 
{
	int i, j;
	int x;
	for (i = 0; i < size; i++) { // i - номер прохода
		for (j = size - 1; j > i; j--) { // внутренний цикл
		// прохода
			if (a[j - 1] > a[j]) {
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}

//сортировка вставкой

template <class T> 
void insertSort(T a[], int size) {
	T x;
	int i, j;
	// цикл проходов, i - номер прохода
	for (i = 0; i < size; i++) {
		x = a[i];
		// поиск места элемента в готовой
		// последовательности
		for (j = i - 1; j >= 0 && a[j] > x; j--) {
			// сдвигаем элемент направо,
			//пока не дошли
			a[j + 1] = a[j];
		}
		// место найдено, вставить элемент
		a[j+1] = x;
	}
}

void main() {
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE];
	// до сортировки
	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << " ";
	}
	cout << "\n\n";
	bubbleSort(ar, SIZE);
	// после сортировки
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n\n";

	insertSort(ar, SIZE);
	// после сортировки вставками
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n\n";

}