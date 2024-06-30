
#include<bits/stdc++.h>

using namespace std;
 


void printMatrix(int** matrix, int rows, int cols) {

    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < cols; ++j) {

            cout << matrix[i][j] << " ";

        }

        cout << endl;

    }

}
 


void matrixTranspose(int** matrix, int rows, int cols, int** result) {

    for (int i = 0; i < cols; ++i) {

        for (int j = 0; j < rows; ++j) {

            result[i][j] = matrix[j][i];

        }

    }

}
 
int main() {



    srand(time(0));

    ofstream fout("100k.txt");

    for(int i = 0; i < 100000; ++i) {

        int a = rand() % 6 + 1;

        fout << a << endl;

    }


 
 

    int rows, cols;

    cout << "Enter number of rows: ";

    cin >> rows;

    cout << "Enter number of columns: ";

    cin >> cols;
 
  

    int** matrixA = new int*[rows];

    int** matrixTransposeA = new int*[cols];
 
    for (int i = 0; i < rows; ++i) {

        matrixA[i] = new int[cols];

    }

    for (int i = 0; i < cols; ++i) {

        matrixTransposeA[i] = new int[rows];

    }
 
   

    ifstream fin("100k.txt");

    for (int i = 0; i < rows; ++i) {

        for (int j = 0; j < cols; ++j) {

            fin >> matrixA[i][j];

        }

    }


 
 

    cout << "Matrix A:" << endl;

    printMatrix(matrixA, rows, cols);

    cout << endl;
 
  

    matrixTranspose(matrixA, rows, cols, matrixTransposeA);

    cout << "Transpose of Matrix A:" << endl;

    printMatrix(matrixTransposeA, cols, rows);

    cout << endl;
 
   
 
    return 0;

}

