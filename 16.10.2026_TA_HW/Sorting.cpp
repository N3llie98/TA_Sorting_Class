#include "Sorting.h"

Sorting::Sorting()
{
	n = 0;
	arr = nullptr;
}

Sorting::Sorting(unsigned int _n, int* _arr)
{
	n = _n;
	arr = _arr;
}

void Sorting::init(unsigned int _n, int* _arr)
{
	n = _n;
	arr = _arr;
}

void Sorting::printArr()
{
	for (int i = 0;i < n;i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void Sorting::fillArr()
{
	cout << "KEEP ENTERING NUMBERS\n";
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	cout << endl;
}

void Sorting::stupidSortAsc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	for (int i = 0;i < n - 1;i++) {
		if (arr[i] > arr[i + 1]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i = -1; // щоб ми опинились на індексі 0 після i++
		}
	}
}

void Sorting::stupidSortDesc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	for (int i = 0;i < n - 1;i++) {
		if (arr[i] < arr[i + 1]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i = -1; // щоб ми опинились на індексі 0 після i++
		}
	}
}

int Sorting::getN()
{
	return n;
}

int* Sorting::getArr()
{
	return arr;
}

void Sorting::setN(int _n)
{
	n = _n;
}

void Sorting::setArr(int* _arr)
{
	arr = _arr;
}
