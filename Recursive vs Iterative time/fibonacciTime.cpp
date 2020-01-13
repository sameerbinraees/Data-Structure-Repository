#include "stdafx.h"
#include <iostream>  
#include <time.h>
#include <ctime>
using namespace std;

class itr {
public:
	itr()
	{}

	int itration(int num) {		//iterative function defination
		long long int num1, num2 = 0, num3 = 1;
		if (num == 1) {
			/*cout << "  " << num2 << endl;*/
		}
		else if (num == 2) {
			/*cout << "  " << num2 << "  " << num3 << endl;*/
		}
		else {
			/*cout << num2 << "  " << num3;*/		
			for (int i = 2; i < num; ++i) {		//adding pevious 2 numbers for Fibonacci
				num1 = num2 + num3;
				/*cout << "  " << num1 << " ";*/
				num2 = num3;
				num3 = num1;


			}
		}
		return 0;
	}

public: int recursion(int n)			//recursive function defination
{
	if ((n == 1) || (n == 0))			//base case
	{
		return(n);
	}
	Else						//recursive function call
	{
		return(recursion(n - 1) + recursion(n - 2));
	}
}

};
int main() {
	int a, b = 0;
	itr i;
	clock_t start_i, start_r, end_i, end_r;		//variables to calculate time
	float start, end, total_i, total_r;

	cout << "Enter the number of elements (must be greater than 0) ";
	cin >> a;
	cout << "With itration:\n";

	start_i = clock();			//starting clock
	i.itration(a);
	end_i = clock();			//ending clock

	total_i = float(end_i - start_i) / CLOCKS_PER_SEC;	//calculating time
	cout << "\nTotal time for itrative function: " << total_i << endl;
	cout << "\nWith recursion:\n";

	start_r = clock();			//starting clock
	i.recursion(a);
	end_r = clock();			//ending clock

	total_r = float(end_r - start_r) / CLOCKS_PER_SEC;	//calculating time

	cout << "\nTotal time for recursive function: " << total_r << endl;
	/*cout << " " << i.recursion(a) << endl;*/



}
