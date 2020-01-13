#include "stdafx.h"
#include <iostream>  
#include<time.h>
#include<ctime>
using namespace std;

class itr {
public:
	itr()
	{}

	long long int itration(long long int num) {	//iterative function defination
		long long int factorial = 1;
		for (int i = 1; i <= num; ++i)
		{
			factorial *= i;			//caluculating factorial

		}
		return factorial;

	}

public: long long int recursion(int num)			//recursive function defination
{
	if (num == 0 || num == 1) {			//base case
		return num;
	}
	else {
		return num * recursion(num - 1);		//recursive call
	}
	return 0;
}

};
int main() {

	itr i;
	int n;
	clock_t start_i, start_r, end_i, end_r;		//to calculate time
	float total_i, total_r;

	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "\nWith itration:\n";

	start_i = clock();		//starting time
	i.itration(n);
	end_i = clock();		//ending time

	
	total_i = float(end_i - start_i) / CLOCKS_PER_SEC;	//calculating time
	cout << "\nTotal time for itrative function: " << total_i << endl;

	cout << "\nWith recursion:\n";

	start_r = clock();		//starting time

	i.recursion(n);

	end_r = clock();		//ending time

	total_r = float(end_r - start_r) / CLOCKS_PER_SEC; //calculating time
	cout << "\nTotal time for recursive function: " << total_r << endl;

	return 0;



}
