#include <iostream>
using namespace std;
#include "Sorting.h"

int main()
{

	// У main тільки тестування чи сорт правильно сортує чи ні
	Sorting obj(20, new int[20]{0});
	obj.fillArrRand(-10,10);
	//obj.fillArr();
	cout << "INITIAL ARRAY:\n";
	obj.printArr();

	cout << "\nSTUPID SORT DESCENDING:\n";
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
	cout << "SELECTION SORT DESCENDING:\n";
	obj.selectionSortDesc();
	obj.printArr();
	/*cout << "\nSELECTION SORT ASCENDING REVERSED ALGORITHM:\n";
	obj.selectionSortAscReversed();
	obj.printArr();*/
	/*cout << "\nSELECTION SORT DESCENDING REVERSED ALGORITHM:\n";
	obj.selectionSortDescReversed();
	obj.printArr();*/

	cout << "\nINSERTION SORT ASCENDING:\n";
	obj.insertionSortAsc();
	obj.printArr();
	cout << "INSERTION SORT DESCENDING:\n";
	obj.insertionSortDesc();
	obj.printArr();

	int searchedNum = 5;
	cout << "\nBINARY SEARCH ASC:\n-Initial array:\n";
	obj.insertionSortAsc();
	obj.printArr();
	cout << "Searched element: " << searchedNum << endl;
	obj.binarySearchAsc(searchedNum);
	cout << "\nBINARY SEARCH DESC:\n-Initial array:\n";
	obj.insertionSortDesc();
	obj.printArr();
	cout << "Searched element: " << searchedNum << endl;
	obj.binarySearchDesc(searchedNum);
	return 0;
}