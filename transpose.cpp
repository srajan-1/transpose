#include <iostream>
using namespace std;
#define MAX 100
void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
cout << "Enter the elements of the matrix:" << endl;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cin >> matrix[i][j];
}
}
}
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
cout << "Matrix:" << endl;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cout << matrix[i][j] << " ";
}
cout << endl;
}
}
void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
transposed[j][i] = matrix[i][j];
}
}
}
int main() {
int matrix[MAX][MAX], transposed[MAX][MAX];
int rows, cols;
cout << "Enter the number of rows: ";
cin >> rows;
cout << "Enter the number of columns: ";
cin >> cols;
readMatrix(matrix, rows, cols);
cout << "Original ";
printMatrix(matrix, rows, cols);
transposeMatrix(matrix, transposed, rows, cols);
cout << "Transposed ";
printMatrix(transposed, cols, rows);
return 0;
}
