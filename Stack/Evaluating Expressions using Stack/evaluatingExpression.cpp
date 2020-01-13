#include"stdafx.h"
#include<iostream>
#include<cstring>
#include<string>
#include<ctype.h>
#include<stack>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stack>
#include <string.h>
using namespace std;

// get weight of operators as per precedence
// higher weight given to operators with higher precedence
// for non operators, return 0 
int getWeight(char ch) {
	switch (ch) {
	case '^':return 3;
	case '/':
	case '*': return 2;
	case '+':
	case '-': return 1;
	default: return 0;
	}
}

// convert infix expression to postfix using a stack
void infix2postfix(char infix[], char postfix[], int size) {
	stack<char> s;
	int weight;
	int i = 0;
	int k = 0;
	char ch;
	// iterate over the infix expression   
	while (i < size) {
		ch = infix[i];
		if (ch == '(') {
			// simply push the opening parenthesis
			s.push(ch);
			i++;
			continue;
		}
		if (ch == ')') {
			// if we see a closing parenthesis,
			// pop of all the elements and append it to
			// the postfix expression till we encounter
			// a opening parenthesis
			while (!s.empty() && s.top() != '(') {
				postfix[k++] = s.top();
				s.pop();

			}
			// pop off the opening parenthesis also
			if (!s.empty()) {
				s.pop();
			}
			i++;
			continue;
		}
		weight = getWeight(ch);
		if (weight == 0) {
			// we saw an operand
			// simply append it to postfix expression
			postfix[k++] = ch;

		}
		else {
			// we saw an operator
			if (s.empty()) {
				// simply push the operator onto stack if
				// stack is empty
				s.push(ch);
			}
			else {
				// pop of all the operators from the stack and
				// append it to the postfix expression till we
				// see an operator with a lower precedence that
				// the current operator
				while (!s.empty() && s.top() != '(' &&
					weight <= getWeight(s.top())) {
					postfix[k++] = s.top();
					s.pop();

				}
				// push the current operator onto stack
				s.push(ch);
			}
		}
		i++;
	}
	// pop of the remaining operators present in the stack
	// and append it to postfix expression 
	while (!s.empty()) {
		postfix[k++] = s.top();
		s.pop();
	}
	postfix[k] = 0; // null terminate the postfix expression 
}
int performOperation(char op, int op1, int op2)
{
	int ans;
	switch (op) {
	case '+':
		ans = op2 + op1;
		break;
	case '-':
		ans = op2 - op1;
		break;
	case '*':
		ans = op2 * op1;
		break;
	case '/':
		ans = op2 / op1;
		break;
	}
	return ans;
}
bool isOperator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		return true;
	else
		return false;
}


// main
int main() {
	const int max = 100;

	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, temp1, temp2, temp3, check;
	char infix[max];
	stack<char> s;

	do {
		cout << "Enter the infix expression" << endl;
		cout << "NOTE: If the expression is multi digit then use space after the digit"<<endl;
		cout << "Example: 12 +3=15 This is right "<<endl;
		cout << "If used like 12+3 considering 12 a multidigit not 1 and 2, ths will give you wrong answer"<<endl;
		cout << "Your expression: ";
		cin.getline(infix, max);
		for (int i = 0; i < 100; ++i) {
			if (infix[i] == '(' || infix[i] == '{' || infix[i] == '[') {
				if (infix[i] == '(') {
					temp1 = i + 1;
					++count1;
				}
				if (infix[i] == '{') {
					temp2 = i + 1;
					++count2;
				}
				if (infix[i] == '[') {
					temp3 = i + 1;
					++count3;
				}
				s.push(infix[i]);

			}
			if (infix[i] == ')' || infix[i] == '}' || infix[i] == ']') {
				if (infix[i] == ')') {

					++count4;
				}
				if (infix[i] == '}') {

					++count5;
				}
				if (infix[i] == ']') {

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
			check = 1;
			break;
		}
	} while (1);


	if (check = 1) {






		int size = strlen(infix);
		char postfix[100];
		infix2postfix(infix, postfix, size);
		cout << "\nInfix Expression :: " << infix;
		cout << "\nPostfix Expression :: " << postfix;
		cout << endl;
		string exp = postfix;

		int j = 0, x = 0, op1, op2;

		for (int a = 0; a < exp.length(); ++a) {


			if (exp[a] >= '0' && exp[a] <= '9')			//if the string element is any number then push it in the stack
			{
				s.push(exp[a] - '0');

			}

			else if (exp[a] == '+' || exp[a] == '-' || exp[a] == '*' || exp[a] == '/'
				|| exp[a] == '^' )						//if the element is any operand then call the calculate method
			{
				int c = s.top();
				s.pop();								//pop the value and store it in a variable
				int b = s.top();
				s.pop();
				cout << endl;
				s.push(performOperation(exp[a], b, c));	//calling the calculate function
			}

			else if (exp[a] == ' ') {
				int c = s.top();
				s.pop();
				int b = s.top();
					s.pop();
					b = b * 10;
					s.push((b+c));
			}
		}

		cout << "Answer after evaluating is " << s.top() + '0' - '0' << endl;
		s.pop();


		return 0;
	}
}
