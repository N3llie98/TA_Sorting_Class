#pragma once
class Sorting{
	int n;
	int* arr = new int[n];
public:
	Sorting();
	Sorting(int _n, int* _arr);
	void init(int _n, int* _arr);

	//SORTING METHODS
	void stupidSortAsc();
	void stupidSortDesc();

	//GETTERS
	int getN();
	int getArr();
	//SETTERS
	void setN(int _n);
	void setArr(int* _arr);
};

