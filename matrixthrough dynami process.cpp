#include <bits/stdc++.h>
using namespace std;
void printMatrix(int** matrix, int rows, int cols) {
   for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
 
            cout << matrix[i][j] << " ";
        }
 
    cout << endl;
 
    }
 
}
 
void matrixAddition(int** A, int** B, int rows, int cols, int** result) {
 
    for (int i = 0; i < rows; ++i) {
 
        for (int j = 0; j < cols; ++j) {
 
            result[i][j] = A[i][j] + B[i][j];
 
        }
 
    }
 
}
 
int main() {
 
    srand(time(0)); 
    ofstream fout("100k.txt");
 
    for (int i = 0; i < 100000; i++) {
 
        int a = rand() % 6 + 1;
        fout << a << endl;
 
    }
 
   
 
    int rows, cols;
 
    cout << "Enter number of rows: ";
 
    cin >> rows;
 
    cout << "Enter number of columns: ";
 
    cin >> cols;
 
 
    int totalElements = rows * cols;
 
    if (totalElements > 100000) {
 
        cout << "Error: Matrix dimensions exceed the number of generated values (100,000)." << endl;
 
        return 1;
 
    }
 
 
    int** matrixA = new int*[rows];
 
    int** matrixB = new int*[rows];
 
    int** matrixSum = new int*[rows];
 
    for (int i = 0; i < rows; ++i) {
 
        matrixA[i] = new int[cols];
 
        matrixB[i] = new int[cols];
 
        matrixSum[i] = new int[cols];
 
    }
 
    
    ifstream fin("100k.txt");
 
    for (int i = 0; i < rows; ++i) {
 
        for (int j = 0; j < cols; ++j) {
 
            fin >> matrixA[i][j];
 
        }
 
    }
 
    for (int i = 0; i < rows; ++i) {
 
        for (int j = 0; j < cols; ++j) {
 
            fin >> matrixB[i][j];
 
        }
 
    }
 
   
 
    
    cout << "Matrix A:" << endl;
 
    printMatrix(matrixA, rows, cols);
 
    cout << endl;
 
    cout << "Matrix B:" << endl;
 
    printMatrix(matrixB, rows, cols);
 
    cout << endl;
 
 
    matrixAddition(matrixA, matrixB, rows, cols, matrixSum);
 
 
    cout << "Matrix Sum (A + B):" << endl;
 
    printMatrix(matrixSum, rows, cols);
}
 
