// bubble_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void bubble_sort(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		for (int j = i + 1; j < len; ++j)
			if (arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
	}
}


void selection_sort(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		int min_key = i;
		for (int j = i+1; j < len; ++j) {
			if (arr[min_key] > arr[j])
				min_key = j;
		}
		if(i != min_key) swap(&arr[i], &arr[min_key]);
	}
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; ++i)
		cout << arr[i] << ", ";

	cout << endl;
}
int main()
{
	int arr[] = {3,1,2,5,6,4,0};
	int len = sizeof(arr)/sizeof(arr[0]);

	//bubble_sort(arr, len);
	selection_sort(arr, len);

	printArray(arr, len);


}//end-main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
