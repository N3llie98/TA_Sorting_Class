#pragma once
#include <iostream>
using namespace std;

class Sorting{
	unsigned int n;
	int* arr;
public:
	Sorting();
	Sorting(unsigned int _n, int* _arr);
	void init(unsigned int _n, int* _arr);
	void printArr();
	void fillArr();

	//SORTING METHODS
	void stupidSortAsc();
	void stupidSortDesc();

	//GETTERS
	int getN();
	int* getArr();
	//SETTERS
	void setN(int _n);
	void setArr(int* _arr);
};

