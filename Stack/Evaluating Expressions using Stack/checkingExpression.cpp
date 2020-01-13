#include"stdafx.h"
#include<iostream>
#include <string>
#define SIZE 50

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


	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, temp1, temp2, temp3;
	string q;
	STACK s;
	do {
		cout << "Enter the expression" << endl;
		getline(cin, q);
		for (int i = 0; i <= q.length(); ++i) {
			if (q[i] == '(' || q[i] == '{' || q[i] == '[') {
				if (q[i] == '(') {
					temp1 = i + 1;
					++count1;
				}
				if (q[i] == '{') {
					temp2 = i + 1;
					++count2;
				}
				if (q[i] == '[') {
					temp3 = i + 1;
					++count3;
				}
				s.push(q[i]);

			}
			if (q[i] == ')' || q[i] == '}' || q[i] == ']') {
				if (q[i] == ')') {

					++count4;
				}
				if (q[i] == '}') {

					++count5;
				}
				if (q[i] == ']') {

					++count6;
				}
				s.pop();

			}

		}
		if (count1 != count4 || count2 != count5 || count3 != count6) {
			if (count1 != count4) {
				cout << "\nERROR,Expression is WRONG\n\n";
				cout << "ERROR is in character # " << temp1 << endl;
			}
			else if (count2 != count5) {
				cout << "\nERROR,Expression is WRONG\n\n";
				cout << "ERROR is in character # " << temp2 << endl;
			}
			else if (count3 != count6) {
				cout << "\nERROR,Expression is WRONG\n\n";
				cout << "ERROR is in character # " << temp3 << endl;
			}
		}
		else {
			cout << "\nExpression is CORRECT\n\n";

		}
	} while (1);


	return 0;

}
