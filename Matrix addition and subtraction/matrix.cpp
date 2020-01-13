// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void addition(int r, int c, int s) {            //fucnction defination for addition of matrices
	int *mat1,*mat2,*mat3;					    //3 pointer for dynamic memory
	mat1 = new int[s];							//making dynamic memory for 1D array
	mat2 = new int[s];
	mat3 = new int[s];							
	for (int i = 0; i < s; ++i) {				//loop for randomly assigning the numbers to the array
		mat1[i] = 1 + rand() % 10;				//random numnber from 1 to 10
	}
	cout << "Matrices are:\n" << endl << endl;  //Showing the user the random matrix
	for (int i = 0; i < r; i++) {				
		for (int j = 0; j < c; j++) {
			cout << mat1[i + j] << " ";			//printing the matrix
		}
		cout << endl;
	}



	for (int i = 0; i < s; ++i) {				//loop for randomly assigning the numbers to the array
		mat2[i] = 1 + rand() % 10;				//random numnber from 1 to 10
	}
	cout << endl;
	for (int i = 0; i < r; i++) {				//Showing the user the random matrix
		for (int j = 0; j < c; j++) {			
			cout << mat2[i + j] << " ";			//printing the matrix
		}
		cout << endl;
	}

	for (int i = 0; i < s; ++i) {
		mat3[i] = mat1[i] + mat2[i];			//storing the result in another matrix
	}
	cout << "\nAnswer of the matrices after addition is:"<<endl<<endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << mat3[i + j] << " ";			//printing the result of addition of two matrices 
		}
		cout << endl;
	}
	cout << endl << "Want to continue?" << endl << "Press 3 to do it again"
		<< endl << "Press -1 to exit"<<endl;	//asking user to quit or to continue
												
	delete [] mat1, mat2, mat3;					//erasing the dynamic memory
		
}

void subtraction(int r,int c, int s) {			//fucnction defination for addition of matrices
	int *mat1, *mat2, *mat3;				    //3 pointer for dynamic memory
	mat1 = new int[s];							//making dynamic memory for 1D array
	mat2 = new int[s];
	mat3 = new int[s];
	for (int i = 0; i < s; ++i) {				//loop for randomly assigning the numbers to the array
		mat1[i] = 1 + rand() % 10;				//random numnber from 1 to 10
	}
	cout << "Matrices are:\n" << endl << endl;  //Showing the user the random matrix
	for (int i = 0; i < r; i++) {				
		for (int j = 0; j < c; j++) {
			cout << mat1[i + j] << " ";			//printing the matrix
		}
		cout << endl;
	}



	for (int i = 0; i < s; ++i) {				//loop for randomly assigning the numbers to the array
		mat2[i] = 1 + rand() % 10;				//random numnber from 1 to 10
	}
	cout << endl;
	for (int i = 0; i < r; i++) {				//Showing the user the random matrix
		for (int j = 0; j < c; j++) {			
			cout << mat2[i + j] << " ";			//printing the matrix
		}
		cout << endl;
	}

	for (int i = 0; i < s; ++i) {
		mat3[i] = mat1[i] - mat2[i];//storing the result in another matrix
	}
	cout << "\nAnswer of the matrices after addition is:" << endl << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << mat3[i + j] << " ";			//printing the result of addition of two matrices 
		}
		cout << endl;
	}
	cout << endl << "Want to continue?" << endl << "Press 3 to do it again"
		<< endl << "Press -1 to exit" << endl;	//asking user to quit or to continue

	delete [] mat1, mat2, mat3;					//erasing the dynamic memory

}


int main(void) {
	int rows, columns, choice=0;
	cout << "\t\t\t\tWelcome to matrix addition and subtraction program\n";		

	cout << "\t\t\t\t\t\t\tMenu\n\n\n";

	cout<<"Determine size of your matrices\n\n";
	
	cout << "Enter the number of rows: ";
	cin >> rows;                                //Taking number of rows
	cout << "\nEnter the number of colums: ";
	cin >> columns;								//Taking number of columns
	int size = rows*columns;					//for arithmatic operations
	cout << "\nYour matrices are of size: " << rows << "x" << columns << endl;
	cout << "\nWhat you want to do?\n" << "\nSelect:\n\n1 for addition\n" << "\n2 for subtraction" << endl << endl;

	while (choice !=-1) {
		cin >> choice;							//user will select the operation
		if (choice == 1) {
			addition(rows, columns, size);		//addition method is called
		}
		else if (choice == 2) {
			subtraction(rows, columns, size);	//subtraction method is called
		}
		else if (choice == -1)					//to exit
			break;
		else if (choice == 3) {					//to continue again
		
		cout << "Enter the number of rows: ";
		cin >> rows;
		cout << "\nEnter the number of colums: ";
		cin >> columns;
		int size = rows*columns;
		cout << "\nWhat you want to do?\n" << "\nSelect:\n\n1 for addition\n" <<
			"\n2 for subtraction" << endl << endl;
		
		}
		else {
			cout << "Select a proper action" << endl;	

		}
	}
}
	
