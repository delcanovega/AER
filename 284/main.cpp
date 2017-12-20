#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);

  int cases;
  cin >> cases;
  for (int i{0}; i < cases; i++) {
    int cost;
    int payed;
    cin >> cost >> payed;

    if (payed < cost) {
      cout << "DEBE " << cost - payed << '\n';
    }
    else {
      int coins[]{200, 100, 50, 20, 10, 5, 2, 1};

      payed -= cost;

      for (int j{0}; j < 8; j++) {
        if (j > 0)
          cout << " ";

        if (payed >= coins[j]) {
          cout << payed / coins[j];
          payed = payed % coins[j];
        }
        else {
          cout << "0";
        }
      }
      cout << '\n';
    }
  }
}