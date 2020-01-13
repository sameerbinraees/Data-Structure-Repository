#include "stdafx.h"
#include "iostream"
#include <stdio.h>
using namespace std;

void sort(int a[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}

int main() {
	int *a = NULL;
	int n;
	cout << "Enter the number of elements:" << endl;
	cin >> n;
	a = new int[n];
	for (int i = 0; i<n; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < n; ++i) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << endl;
	cout << "Sorted array is: " << endl;
	sort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
