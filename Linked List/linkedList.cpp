#include "stdafx.h"			//including libraries
#include<iostream>
using namespace std;
int sum = 0;				//defining an integer with global scope
struct node					//Creation of node
{
	int data;
	node *next;
};
class list					//class with a name list
{
private:					//private variables
	node *head, *tail;
public:						//public constructor
	list()
	{
		head = NULL;
		tail = NULL;
	}

	int createnode(int value)		//function to create nodes
	{
		++sum;
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
		return sum;					//returning the number of times nodes are created
	}

	void insert_at_start(int val) {		//function to add node at the start
		node *temp = new node();
		temp->next = head;
		temp->data = val;
		head = temp;
	}

	void insert_at_end(int val) {		//function to add node in end
		node *temp = new node();
		tail->next = temp;
		temp->next = NULL;
		temp->data = val;
		tail = temp;
	}

	void insert_at_a_position(int val,int pos) {	//function to add node anywhere in the list
		node *temp = new node();
		node *temp1 = new node();
		temp = head;
		for (int i = 1; i + 1 < pos; ++i) {
			temp = temp->next;
		}
		temp1->data = val;
		temp1->next = temp->next;
		temp->next = temp1;
	}

	void delete_from_start() {				//function to delete node from the start
		node *temp = new node();
		temp = head;
		head = head->next;
		delete temp;
	}

	void delete_from_end() {				//function to delete node from end
		node *temp = new node();
		temp = head;
		while (temp->next!= tail) {
			temp = temp->next;
		}
		delete temp->next;
		tail = temp;
		tail->next = NULL;	
		
	}

	void delete_from_a_position(int pos) {		//function to delete node from anwhere in the list
		node *temp = new node();
		node *temp1 = new node();
		temp = head;
		for (int i = 1; i+1 < pos; ++i) {
			temp = temp->next;
		}
		temp1 = temp->next;
		temp->next = temp1->next;
		delete temp1;	
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
};
int main()							//main method
{
	list obj;						//creating object
	int choice = 0, value = 0,total;		//defining variables

				//Logic to call create/insert/delete/display functions

	cout << "Do you want to create a node?" << endl;
	cout << "Press 1 for yes\nOR press any other number to exit" << endl;
	cin >> choice;
	if (choice == 1) {
		while (choice == 1) {
			cout << "Enter the value of your node" << endl;
			cin >> value;
			 total = obj.createnode(value);			//function call for creating node
			cout << "\nDo you want to create another node?" << endl;
			cout << "\nPress 1 to create another node" << endl;
			cout << "\nPress 2 if you don't want to create another node" << endl;		
			cin >> choice;
		}
	}
	else if (choice != -1) {
		return 0;
	}
	int choice1 = 0;
		cout << "\n\nThe nodes are:\n";
		obj.display();					//function called from displaying nodes
	cout << "\n\nDo you want to insert/delete the nodes\n" << endl;
	cout << "\nPress 1 to insert nodes\n\nOr press 2 to delete nodes" << endl;
	cin >> choice1;
	if (choice1 == 1) {
		int option=0,value1=0;
		cout << "Where do you want to insert the nodes?"<<endl;
		cout << endl;
		cout << "Press 1 to insert node in the start"<< endl;
		cout << endl;
		cout << "Press 2 to insert node in the end"<<endl;
		cout << endl;
		cout << "Press 3 to insert node at a specific position"<< endl;
		cin >>  option;
		cout << "Enter the value of the node you want to create";
		cout << endl;
		cin >> value1;

		//Logic for inserting data at different points in a list
		if (option == 1) {
			obj.insert_at_start(value1);					//function call for adding node
			obj.display();
		}
		else if (option == 2) {
			obj.insert_at_end(value1);						//function call for adding node
			obj.display();
		}
		else if (option == 3) {
			int pos = 0;
			cout << "Enter the position where you want to insert the node:" << endl;
			cin >> pos;
			if (pos == 0||pos>total+1) {
				cout << "ERROR: Enter a number starting from 1 to number of nodes!\n";
			}
			else if (pos == 1) {
				obj.insert_at_start(value1);
			}
			else {
				obj.insert_at_a_position(value1, pos);		//function call for adding node
			}
			cout << "The remaining node(s) are" << endl;
			obj.display();
			cout << endl;
		}
	}
	else if (choice1 == 2) {
		//Logic for deleting data from different points in a list

		int option = 0, value1 = 0;
		cout << "Where do you want to delete the nodes from?" << endl;
		cout << endl;
		cout << "Press 1 to delete node from the start" << endl;
		cout << endl;
		cout << "Press 2 to delete node from the end" << endl;
		cout << endl;
		cout << "Press 3 to delete node from a specific position" << endl;
		cin >> option;
		cout << endl;
		if (option == 1) {
			obj.delete_from_start();		//function call for deleting node
			obj.display();
		}
		else if (option == 2) {
			
			obj.delete_from_end();			//function call for deleting node
			obj.display();
		}
		else if (option == 3) {
			int pos = 0;
			cout << "Enter the position you want to delete the node from:" << endl;
			cin >> pos;
			if (pos == 0||pos>total) {
				cout << "ERROR: Enter a number starting from 1 to number of nodes!\n";
			}
			else if (pos == 1) {
				obj.delete_from_start();	//function call for deleting node
			}
			else {
				obj.delete_from_a_position(pos);
			}
			cout << "The remaining node(s) are" << endl;
			obj.display();
			cout << endl;
		}
	}
	return 0;
}
