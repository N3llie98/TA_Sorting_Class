#include <iostream>
using namespace std;
#include "Sorting.h"

int main()
{

	// У main тільки тестування чи сорт правильно сортує чи ні
	Sorting obj(3, new int[3]{0});
	//obj.fillArrRand(0,5);
	obj.fillArr();
	cout << "INITIAL ARRAY:\n";
	obj.printArr();

	/*cout << "\nSTUPID SORT DESCENDING:\n";
	obj.stupidSortDesc();
	obj.printArr();
	cout << "STUPID SORT ASCENDING:\n";
	obj.stupidSortAsc();
	obj.printArr();
	cout << "STUPID SORT DESCENDING (again):\n";
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
	obj.bubbleSortDesc();
	obj.printArr();

	cout << "\nSELECTION SORT ASCENDING:\n";
	obj.selectionSortAsc();
	obj.printArr();
	cout << "\nSELECTION SORT DESCENDING:\n";
	obj.selectionSortDesc();
	obj.printArr();*/
	/*cout << "\nSELECTION SORT ASCENDING REVERSED ALGORITHM:\n";
	obj.selectionSortAscReversed();
	obj.printArr();*/
	/*cout << "\nSELECTION SORT DESCENDING REVERSED ALGORITHM:\n";
	obj.selectionSortDescReversed();
	obj.printArr();*/

	obj.insertionSortAsc();
	obj.printArr();
	return 0;
}