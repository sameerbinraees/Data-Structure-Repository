#include "stdafx.h"
#include <iostream>

using namespace std;
struct node {			//making node structure
	int data;
	node *left;			//2 pointers
	node *right;
}*root;
class binaryT {			//class of tree

public:					//default constructor
	binaryT() {
		root = NULL;
	}
	void insert(node *r, int d) {		//method to insert the nodes in tree
		if (root == NULL) {
			root = new node();
			root->data = d;
			root->left = NULL;
			root->right = NULL;
			cout << "Root is inserted! " << endl;
			return;
		}
		else if (d >=r->data) {			//if data entered is greater than  or equal to the data present at the node
			if (r->data == d) {			//if the data is same then tell the user
				cout << "Element is alreay present"<<endl;
				return;
			}							//otherwise recursively call the insert function
			else if (r->right != NULL) {
				insert(r->right, d);
			}
			else {							//base case, if NULL appears then...
				r->right = new node();
				r->right->data = d;
				r->right->right = NULL;
				r->right->left = NULL;
				cout << "Node is entered at right of "<<r->data << endl;
				return;
			}
		}
		else if (d <= r->data) {//if data entered is greater than or equal to the data present at the node
			if (r->data == d) {//if the data is same then tell the user
				cout << "Element is already present"<<endl;
				return;
			}
			 else if (r->left != NULL) {	//otherwise recursively call the insert function
				insert(r->left, d);
			}
			else {					//identical to base case
				r->left = new node();
				r->left->data = d;
				r->left->right = NULL;
				r->left->left = NULL;
				cout << "Node is entered at left of " << r->data << endl;
				return;
			}
		}

	}
	void inpostorder(node* node)		//function to print in post order
	{
		if (node == NULL)				//base case
			return;						
		//for post order we go like: left, right and node
		inpostorder(node->left);
		inpostorder(node->right);
		cout <<" "<< node->data;
	}
	void ininorder(node* node)			//function to print in in order
	{
		if (node == NULL)				//base case
			return;
		//in inorder we go as left, node and right
		ininorder(node->left);
		cout << " " << node->data;
		ininorder(node->right);
	}
	void inpreorder(node* node)			//function to print in pre order
	{
		if (node == NULL)				//base case
			return;
		//in pre order we go like node, left and right
		cout << " " << node->data;
		inpreorder(node->left);
		inpreorder(node->right);
	}
};
int main() {
	binaryT bt;
	int choice, num;
	cout << "Insert the root: " << endl;
	cin >> num;
	bt.insert(root, num);
	do {
		cout << "Do you want to insert a number in your tree?" << endl << "Press 1 to insert a number" << endl;
		cout << "Press 2 to print post, pre and in order" << endl;
		cin >> choice;

		if (choice == 2)
			break;
		else if (choice == 1) {
			
		cout << "Enter the value: ";
		cin >> num;
		bt.insert(root, num);
	}
		else if(choice != 1 ||choice!=2)
		{
			cout << "Enter correct choice! " << endl;
		}
	} while (true);
	cout << "In postorder: " << endl;
	bt.inpostorder(root);
	cout << endl;
	cout << "In inorder: " << endl;
	bt.ininorder(root);
	cout << endl;
	cout << "In preorder: " << endl;
	bt.inpreorder(root);
	cout << endl;

}
