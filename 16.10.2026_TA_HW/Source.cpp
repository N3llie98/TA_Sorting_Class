#include <iostream>
using namespace std;
#include "Sorting.h"

int main()
{
	Sorting obj(6, new int[6]{2,1,4,5,0,3});
	cout << "INITIAL ARRAY:\n";
	obj.printArr();

	cout << "\nSTUPID SORT ASCENDING:\n";
	obj.stupidSortAsc();
	obj.printArr();

	cout << "\nSTUPID SORT DESCENDING:\n";
	obj.stupidSortDesc();
	obj.printArr();
	return 0;
}