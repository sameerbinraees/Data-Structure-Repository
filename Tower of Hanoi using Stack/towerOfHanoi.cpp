#include "stdafx.h"
#include <iostream>
#include<stack>
using namespace std;
int moves = 0;				//to count total moves
void towerofhanoi(int disk, stack <int> *S, stack <int> *D, stack <int> *A, char So, char De, char Au) {	
	if (disk == 1) {		//base case
		int x = S->top();	//pop from source 
		S->pop();
		D->push(x);			//push to destination
		cout << "Disk 1 is moved from " << So << " to " << De << "\t\t"
			<< "( " <<(*&S) << " to " <<(*&D) << " )" << endl;
		++moves;			//add 1 to total moves
		return;
	}
	else {					//recursion
		towerofhanoi(disk - 1, S, A, D, So, Au, De);	//change the destination to auxilary and call the function
		int x = S->top();	//pop from source
		S->pop();
		D->push(x);			//push to destination
		cout << "Disk " << disk <<" is moved from " << So << " to " << De << "\t\t"
			<< "( " << (*&S) << " to " << (*&D) << " )" << endl;
		++moves;
		towerofhanoi(disk - 1, A, D, S, Au, De, So);	//change the source to auxilary and call the function
	}
}

int main() {

	int disk;
	stack <int> S;			//making 3 stacks (objects)
	stack <int> A;
	stack <int> D;
	cout << "Enter the number of disks: ";
	cin >> disk;
	cout << "\nTowers are:\n";
	cout << "Tower 1 (Source): " << (&S) << endl;		//printing address of stacks
	cout << "Tower 2 (Auxilary): " << (&A) << endl;
	cout << "Tower 3 (Destination): " << (&D) << endl<<endl;
	for (int i = disk; i > 0; --i)
		S.push(i);			//pushing the values in source
	towerofhanoi(disk, &S, &D, &A, 'S', 'D', 'A');		//calling function
	cout << "\nTotal moves are: " << moves << endl<<endl;
}
