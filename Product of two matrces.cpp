#include <iostream>
using namespace std;

int main(){
	
	int Rows1, Rows2;
	int Cols1, Cols2;
	
	int dimension1, dimension2;
	
	cout << "Enter the dimension of matrix 1: ";
	cin >> dimension1;
	
	cout << "Enter the dimension of matrix 2: ";
	cin >> dimension2;
	
	Rows1 = dimension1;
	Cols1 = dimension1;
	
	Rows2 = dimension2;
	Cols2 = dimension2;
	
	
	int **matrix1;
	
	matrix1 = new int *[Rows1];
	
	for(int r=0; r<Rows1; r++){
		matrix1[r] = new int[Cols1];
	}
	
	int **matrix2;
	
	matrix2 = new int *[Rows2];
	
	for(int r=0; r<Rows2; r++){
		matrix2[r] = new int[Cols2];
	}
	
	cout << "\nEnter the elements for matrix 1st: " << endl;
	
	for (int r = 0; r<Rows1; r++){
		for (int c = 0; c<Cols1; c++){
			cin >> matrix1[r][c];
		}
	}
	
	cout << endl;
	
	cout << "\nEnter the elements for matrix Second: " << endl;
	
	for (int r = 0; r<Rows2; r++){
		for (int c = 0; c<Cols2; c++){
			cin >> matrix2[r][c];
		}
	}
		
	cout << "\n"  << "The product of two matrices is: " << endl;
	
	for (int r = 0; r<Rows1; r++){	
		cout << endl;
		for (int c = 0; c<Cols1; c++){
			
			int product = matrix1[r][c] * matrix2[r][c];
			
			cout << product << "\t";
		}
	}
	
	return 0;
}
