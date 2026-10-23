#include <iostream>
using namespace std;
#include "Sorting.h"

int main()
{

	// У main тільки тестування чи сорт правильно сортує чи ні
	Sorting obj(6, new int[6]{2,1,4,5,0,3});
	cout << "INITIAL ARRAY:\n";
	obj.printArr();

	cout << "\nSTUPID SORT ASCENDING:\n";
	obj.stupidSortAsc();
	obj.printArr();
	cout << "STUPID SORT DESCENDING:\n";
	obj.stupidSortDesc();
	obj.printArr();

	cout << "\nGNOME SORT ASCENDING:\n";
	obj.gnomeSortAsc();
	obj.printArr();
	cout << "GNOME SORT DESCENDING:\n";
	obj.gnomeSortDesc();
	obj.printArr();

	cout << "\nBUBBLE SORT ASCENDING:\n";
	obj.bubbleSortAsc();
	obj.printArr();
	cout << "BUBBLE SORT DESCENDING:\n";
	obj.stupidSortDesc();
	obj.printArr();
	return 0;
}