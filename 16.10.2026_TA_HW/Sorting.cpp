#include "Sorting.h"

Sorting::Sorting()
{
	n = 0;
	arr = nullptr;
}

Sorting::Sorting(size_t _n, int* _arr)
{
	n = _n;
	arr = _arr;
	/*arr = new int[n];
	for (size_t i = 0;i < n;++i) {
		arr[i] = _arr[i];
	}*/ //якщо передавати масив а не понітер на масив
}

void Sorting::init(size_t _n, int* _arr)
{
	n = _n;
	arr = _arr;
}

void Sorting::printArr()
{
	for (size_t i = 0;i < n;i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void Sorting::fillArr()
{
	cout << "KEEP ENTERING NUMBERS\n";
	for (size_t i = 0;i < n;i++) {
		cin >> arr[i];
	}
	cout << endl;
}

void Sorting::fillArrRand(int min, int max)
{
	if (arr == nullptr || n < 1) {
		return;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (max - min) + min;
	}
}

void Sorting::stupidSortAsc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	int count = 0;
	for (size_t i = 0;i < n - 1;i++) {
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			i = -1; // щоб ми опинились на індексі 0 після i++
		}
		count++;
	}
	cout << "- iteration count: " << count << endl;
}

void Sorting::stupidSortDesc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	int count = 0;
	for (size_t i = 0;i < n - 1;i++) {
		if (arr[i] < arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			i = -1; // щоб ми опинились на індексі 0 після i++
		}
		count++;
	}
	cout << "- iteration count: " << count << endl;
}

void Sorting::gnomeSortAsc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	int count = 0;
	size_t i = 0;
	while (i < n - 1) {
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			if (i == 0) {
				++i;
			}
			else {
				--i;
			}
		}
		else {
			++i;
		}
		count++;
	}
	cout << "- iteration count: " << count << endl;
}

void Sorting::gnomeSortDesc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	int count = 0;
	size_t i = 0;
	while (i < n - 1) {
		if (arr[i] < arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			if (i != 0) {
				--i;
			}
		}
		else {
			++i;
		}
		count++;
	}
	cout << "- iteration count: " << count << endl;
}

void Sorting::bubbleSortAsc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	int count = 0;
	bool isSorted = true;
	for (size_t i = 0;i < n - 1;i++) {
		isSorted = true;
		for (size_t j = 0;j < n - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				isSorted = false;
			}
			count++;
		}
		if (isSorted) { break; }
	}
	cout << "- iteration count: " << count << endl;
}

void Sorting::bubbleSortDesc()
{
	if (arr == nullptr || n <= 1) {
		return;
	}
	int count = 0;
	bool isSorted = true;
	for (size_t i = 0;i < n - 1;i++) {
		isSorted = true;
		for (size_t j = 0;j < n - i - 1;j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				isSorted = false;
			}
			count++;
		}
		if (isSorted) { break; }
	}
	cout << "- iteration count: " << count << endl;
}

int Sorting::getN()
{
	return n;
}

int* Sorting::getArr()
{
	return arr;
}

void Sorting::setN(size_t _n)
{
	n = _n;
}

void Sorting::setArr(int* _arr)
{
	arr = _arr;
}

Sorting::~Sorting()
{
	cout << "\n\n~Sorting DESTRUCTOR\n";
	if (arr != nullptr){
		delete[] arr;
	}
}
