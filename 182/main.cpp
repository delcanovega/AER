#include <iostream>
#include <vector>
using namespace std;

vector<int> desc(int num) {
  vector<int> v;
  while (num > 9) {
    v.push_back(num%10);
    num /= 10;
  }
  v.push_back(num);
  return v;
}

int main() {
  std::ios_base::sync_with_stdio(false);

  int cases;
  cin >> cases;
  for (int i{0}; i < cases; i++) {
    int num;
    cin >> num;
    int k{0};

    while (num > 9) {
      k++;
      vector<int> v = desc(num);

      int new_num{1};
      for(vector<int>::const_iterator it{v.cbegin()}; it != v.cend(); it++) {
        new_num *= *it;
      }
      num = new_num;
    }
    cout << k << '\n';
  }
}