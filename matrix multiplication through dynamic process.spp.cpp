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
 
 
void matrixMultiplication(int** matrixA, int rowsA, int colsA, int** matrixB, int rowsB, int colsB, int** result) {
    if (colsA != rowsB) {
        cout << "Error: Matrix dimensions mismatch for multiplication." << endl;
        return;
    }
 
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
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
    int** matrixB = new int*[cols];
 
    for (int i = 0; i < rows; ++i) {
        matrixA[i] = new int[cols];
    }
    for (int i = 0; i < cols; ++i) {
        matrixB[i] = new int[rows];
    }
 
 
    ifstream fin("100k.txt");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            fin >> matrixA[i][j];
 
            matrixB[j][i] = rand() % 6 + 1; }
    }
 
 
 
    cout << "Matrix A:" << endl;
    printMatrix(matrixA, rows, cols);
    cout << endl;
 
    cout << "Matrix B:" << endl;
    printMatrix(matrixB, cols, rows);
    cout << endl;
 
 
    int** matrixResult = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrixResult[i] = new int[rows];
    }
 
    matrixMultiplication(matrixA, rows, cols, matrixB, cols, rows, matrixResult);
 
    cout << "Matrix Multiplication (A * B):" << endl;
    printMatrix(matrixResult, rows, rows);
    cout << endl;
 
 
    return 0;
}

