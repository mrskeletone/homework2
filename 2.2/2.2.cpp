#include <iostream>
#include <fstream>
#include <string>
#include "Header2.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 1000 + 1;
	}
	void (*qw)(int* arr, unsigned size);
	qw = yk(arr, 10);
	qw(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
}
