#include"stdafx.h"
#include<iostream>
#define SIZE 25

using namespace std;
class STACK
{

private:

	int element[SIZE];
	int top;
public:
	STACK() {

		top = -1;

	}

	int isEmpty() {
		if (top == -1)
			return 1;
		else
			return 0;
	}

	int isFull() {
		if (top == (SIZE - 1))
			return 1;
		else
			return 0;
	}

	int push(int n) {

		if (isFull() == 1) {
			cout << "\nStack is FULL!\n";
			return 0;
		}
		++top;
		element[top] = n;
		return n;
	}

	int pop() {

		int temp;

		if (isEmpty()) {
			cout << "\nStack is EMPTY!\n";
			return 0;
		}
		temp = element[top];
		--top;
		return temp;

	}

	void displayItems() {
		if (isEmpty()) {
			cout << "\nStack is EMPTY!\n";
			return;
		}
		int i;
		cout << "STACK is: ";
		for (i = (top); i >= 0; i--)
			cout << element[i] << " ";
		cout << endl;
	}

	void peek() {
		int p;
		if (isEmpty()) {
			cout << "\nStack is EMPTY!\n";
			return;
		}
		else
			p = element[top];
		cout << "\nTop element is " << p << endl;
	}

};
int main() {


	int choice, item, temp;
	STACK s;
	do
	{
		cout << endl;
		cout << "Press 0 to exit" << endl << "Press 1 to push element" << endl << "Press 2 to pop element" << endl;
		cout << "Press 3 to print top element" << endl << "Press 4 to print stack" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 0)
			break;

		else if (choice == 1) {
			cout << "Enter element to insert: ";
			cin >> item;

			if (s.push(item) == 0)
			{
			}


		}
		else if (choice == 2) {

			if (s.pop() == 0) {}

			else
				cout << "Popped" << endl;

		}
		else if (choice == 3) {
			s.displayItems();

		}
		else if (choice == 4) {
			s.peek();
		}
		else
			cout << "An Invalid choice." << endl;

	} while (choice != 0);


	return 0;

}
