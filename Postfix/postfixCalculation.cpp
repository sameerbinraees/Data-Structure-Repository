#include "stdafx.h"
#include <iostream>
#include <string>
#include "math.h"
using namespace std;
struct node					//Creation of node
{
	int data;
	node *next;
};
class stack				//class with a name stack
{
private:					//private variables
	node *head, *tail;
public:						//public constructor
	stack()
	{
		head = NULL;
		tail = NULL;
	}

	void createnode(int value)		//function to create nodes
	{

		node *temp = new node;		//dynamically creating a *temp variable with type node
		temp->data = value;			//setting the data part of temp to value
		temp->next = NULL;			//temp pointer part should point to null
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		
	}

	void push(int val) {		//function to push the number in the stack
		node *temp = new node();
		temp->next = head;
		temp->data = val;
		head = temp;
	}


	int pop() {				//function to pop the number from stack
		int x = head->data;
		node* temp = new node();
		temp = head;
		head = head->next;
		delete temp;
		return x;
	}

	int top() {				//function to give the top value without removing it
		node *temp = new node();
		temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}


		temp = temp->next;
		return temp->data;;
	}

	void display()					//function to display the nodes
	{
		node *temp = new node;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}

	}

	int calculate(char c, int a, int b) {		//to calculate the expression if any of the opperand appears
		if (c == '+') {
			return (a + b);
		}
		else if (c == '-') {
			return (a - b);
		}
		else if (c == '*') {
			return (a * b);
		}
		else if (c == '/') {
			return (a / b);
		}
		else if (c == '^') {
			return (pow(a, b));
		}
	}
};
int main()
{
	string exp;			//initialize a string
	stack l1;			//making object
	cout << "Enter postfix expression" << endl;
	cout << "NOTE: It calculates only the single digits"<<endl;
	getline(cin, exp);	//getting the input of the string

	l1.createnode(exp[0] - '0');	//creating the node; i.e iplementing the stack with linked list

	for (int a = 1; a < exp.length(); ++a) {



		if (exp[a] >= '0' && exp[a] <= '9')			//if the string element is any number then push it in the stack
		{
			l1.push(exp[a] - '0');

		}

		else if (exp[a] == '+' || exp[a] == '-' || exp[a] == '*' || exp[a] == '/'
			|| exp[a] == '^')						//if the element is any operand then call the calculate method
		{
			int c = l1.pop();						//pop the value and store it in a variable
			int b = l1.pop();					
			cout << endl;
			l1.push(l1.calculate(exp[a], b, c));	//calling the calculate function
		}

	}
	cout << "Answer is: ";
	l1.display();									//displaying the answer
}
