#include <iostream>
#include <vector>
#include "algorithm"
#include<fstream>
#include <sstream>

using namespace std;
int data;

void insertion_sort(vector<int>& vec, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = vec[i];
		j = i - 1;
		while (j >= 0 && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j = j - 1;
		}
		vec[j + 1] = key;
	}
}

int main(){
	int num;
	vector<int> v;
	vector<int>::iterator it;

	for (int n = 0; n < 10; ++n){
		num = rand()%100;
		v.push_back(num);
	}

	cout << "Un-sorted vector is:" << endl;
	for (it = v.begin(); it < v.end(); ++it)
		cout << *it << "\t";
	cout << endl;

	insertion_sort(v,10);
	cout << endl;
	cout << "Sorted vector is:" << endl;
	for (it = v.begin(); it < v.end(); ++it)
		cout << *it << "\t";
	cout << endl;
	return 0;
}
