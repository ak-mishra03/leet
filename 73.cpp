#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int m, n;
    m = matrix.size();
    n = matrix[0].size();

    bool rowflag = false, colflag = false;

    // checking if the first row and column have a zero already or not
    for (int i = 0; i < m; i++) {
      if (matrix[i][0] == 0) {
        rowflag = true;
      }
    }

    for (int j = 0; j < n; j++) {
      if (matrix[0][j] == 0) {
        colflag = true;
      }
    }

    // set the first row and columns to zero for any zero encountered int the
    // matrix

    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        if (matrix[i][j] == 0) {
          matrix[i][0] = 0;
          matrix[0][j] = 0;
        }
      }
    }

    // setting all the rows and columns to zero according to the markings
    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
          matrix[i][j] = 0;
        }
      }
    }
    // setting whole first row and column to zero according to the flags
    if (rowflag) {
      for (int i = 0; i < m; i++) {
        matrix[i][0] = 0;
      }
    }
    if (colflag) {
      for (int j = 0; j < n; j++) {
        matrix[0][j] = 0;
      }
    }
  }
};

int main() {
  Solution s1;

  int m, n;
  cin >> m >> n;
  vector<vector<int>> matrix(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  s1.setZeroes(matrix);
  for (const auto &row : matrix) {
    for (int x : row) {
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}
