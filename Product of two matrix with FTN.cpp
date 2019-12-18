#include <iostream>
using namespace std;

void input(int **mat1, int **mat2 ,const int R1, const int R2, const int C1, const int C2){
	
	cout << "\n\nEnter the element of matrix1: " << endl;
	for (int r=0; r<R1; r++){
		for (int c=0; c<C1; c++){
			cout << "Enter the element ["<<r<<"]["<<c<<"]: ";
			cin >> mat1[r][c];
		}
	}
	
	cout << "\nEnter the element of matrix2: " << endl;
	for (int r=0; r<R2; r++){
		for (int c=0; c<C2; c++){
			cout << "Enter the element ["<<r<<"]["<<c<<"]: ";
			cin >> mat2[r][c];
		}
	}
}

void output(int **mat1, int **mat2 ,const int R1, const int R2, const int C1, const int C2){
	cout << "\nMatrix1 is: ";
	for (int r=0; r<R1; r++){
		cout << endl;
		for (int c=0; c<C1; c++){
			cout << mat1[r][c] << "\t";
		}
	}
	
	cout << "\n\nMatrix2 is: ";
	for (int r=0; r<R2; r++){
		cout << endl;
		for (int c=0; c<C2; c++){
			cout << mat2[r][c] << "\t";
		}
	}
}


void product(int **mat1, int **mat2 ,const int R1, const int C1){
	
	cout <<"\n\nThe product of two matrices is: " << endl;
	
	for (int r = 0; r<R1; r++){	
		cout << endl;
		for (int c = 0; c<C1; c++){
			
			int s = mat1[r][c] * mat2[r][c];
			
			cout << s << "\t";
		}
	}
}



int main(){
	
	int Rows1, Rows2;
	int Cols1, Cols2;
	
	int dimension1, dimension2;
	
	cout << "Enter the dimension of matrix 1: ";
	cin >> dimension1;
	
	cout << "Enter the dimension of matrix 2: ";
	cin >> dimension2;
	
	Rows1 = Cols1 = dimension1;
	
	Rows2 = Cols2 = dimension2;
	
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
		
	input(matrix1, matrix2, Rows1, Rows2, Cols1, Cols2);
	output(matrix1, matrix2, Rows1, Rows2, Cols1, Cols2);
	product(matrix1, matrix2, Rows1,Cols1);
	
	
	return 0;
}
