#include <iostream>
#include <vector>

using namespace std;

void reverseColumns(vector<vector<int> > &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int j = 0; j < m; j++) {
        int top = 0, bottom = n - 1;
        while (top < bottom) {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    reverseColumns(matrix);

    // Print the reversed matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
