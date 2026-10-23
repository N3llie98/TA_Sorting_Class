#pragma once
#include <iostream>
using namespace std;

class Sorting{
	size_t n;
	int* arr;
public:
	Sorting();
	Sorting(size_t _n, int* _arr);
	void init(size_t _n, int* _arr);
	void printArr();
	void fillArr();
	void fillArrRand(int min = -10, int max = 10);

	//SORTING METHODS
	void stupidSortAsc();
	void stupidSortDesc();

	void gnomeSortAsc();
	void gnomeSortDesc();

	void bubbleSortAsc();
	void bubbleSortDesc();

	//GETTERS
	int getN();
	int* getArr();
	//SETTERS
	void setN(size_t _n);
	void setArr(int* _arr);

	~Sorting(); // destructor
};

