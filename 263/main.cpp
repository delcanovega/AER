#include <iostream>
using namespace std;

void move(char cube[50][50], bool col, bool reverse, int pos, int n) {
  char tmp;
  pos--;
  if (col) {
    if (reverse) {
      tmp = cube[0][pos];
      for (int i{0}; i < n - 1; i++) {
        cube[i][pos] = cube[i + 1][pos];
      }
      cube[n - 1][pos] = tmp;
    }
    else {
      tmp = cube[n - 1][pos];
      for (int i{n - 1}; i > 0; i--) {
        cube[i][pos] = cube[i - 1][pos];
      }
      cube[0][pos] = tmp;
    }
  }
  else {
    if (reverse) {
      tmp = cube[pos][0];
      for (int i{0}; i < n - 1; i++) {
        cube[pos][i] = cube[pos][i + 1];
      }
      cube[pos][n - 1] = tmp;
    }
    else {
      tmp = cube[pos][n - 1];
      for (int i{n - 1}; i > 0; i--) {
        cube[pos][i] = cube[pos][i - 1];
      }
      cube[pos][0] = tmp;
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  while (n != 0) {
    // Read the state of the cube
    char cube[50][50];
    string line;
    for (int i{0}; i < n; i++) {
      cin >> line;
      for (int j{0}; j < n; j++) {
        cube[i][j] = line[j];
      }
    }

    // Operate
    char point;
    cin >> point;
    while (point != 'x') {
      int pos;
      cin >> pos;
      if (point == 'f') {
        if (pos < 0)
          move(cube, false, true, (-pos), n);
        else
          move(cube, false, false, pos, n);
      }
      else {
        if (pos < 0)
          move(cube, true, true, (-pos), n);
        else
          move(cube, true, false, pos, n);
      }

      cin >> point;
    }

    // Print
    for (int i{0}; i < n; i++) {
      for (int j{0}; j < n; j++) {
        cout << cube[i][j];
      }
      cout << '\n';
    }
    cout << "---\n";

    cin >> n ;
  }
}