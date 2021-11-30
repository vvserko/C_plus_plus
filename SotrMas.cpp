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
		a[j + 1] = x;
	}
}

void main() {
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE];
	// до сортировки
	cout << "Enter the marks of the student:";
	for (int i = 0; i < SIZE; i++) {
		cin >> ar[i];		
	}

	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << " ";
	}

	cout << "\n\n";
	setlocale(LC_ALL, "Russian");
	cout << "Нажмтте цифру:"<<endl;
	cout << "Вывод оценок (вывод содержимого массива) - 1"<<endl;
	cout << "Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку) - 2"<<endl;
	cout << "Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7) - 3"<<endl;
	int num;
	cin >> num;

	switch (num) {
	case 1:
		bubbleSort(ar, SIZE);
		// после сортировки
		for (int i = 0; i < SIZE; i++) {
			cout << ar[i] << " ";
		}
		break;
	case 2:
		cout << "Введите номер элемента:";
		int num1;
		cin >> num1;
		cout << endl;
		cout << "Введите новую оценку:";
		int num2;
		cin >> num2;
		ar[num1 - 1] = num2;
		cout << endl;
		bubbleSort(ar, SIZE);
		// после сортировки
		for (int i = 0; i < SIZE; i++) {
			cout << ar[i] << " ";
		}
		break;
	case 3:
		int sum = 0;
		float sa = 0;		
		for (int i = 0; i < SIZE; i++) {
			sum += ar[i];
			sa = sum / (i+1);
		}

		if (sa >= 10.7) {
			cout << "Стипендия выходит" << endl;
			cout << "Средний балл: " << sa << endl;
		}
		else
			cout << "Стипендия не выходит"<<endl;	
		
	}
	
}