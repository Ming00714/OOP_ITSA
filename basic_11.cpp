#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    cin >> rows >> cols;

    int matrix[rows][cols];
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            cin >> matrix[i][j];

    for (int j=0; j<cols; j++) {
        for (int i=0; i<rows; i++) {
            cout << matrix[i][j];
            if (i!=rows-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

// 矩陣反轉
