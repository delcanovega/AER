#include <cstdio>
#include <string>
#include <set>
using namespace std;

int main() {
  int size;
  scanf("%d", &size);
  while (size != 0) {
    set<string> hash;
    char key[5];
    for (int i = 0; i < size; ++i) {
      scanf("%s", key);
      string k(key);
      hash.insert(k);
    }
    char c_str[1003];
    scanf("%s\n", c_str );
    string str(c_str);
    bool error{false};

    unsigned long long opt{1};
    for (unsigned long int pos{str.size() - 1}; pos > 0; pos--) {
      bool one_dig{false};
      bool two_dig{false};
      bool thr_dig{false};

      if (str[pos] != '0') {
        string str_1{str.substr(pos, 1)};
        if (hash.find(str_1) != hash.end()) {
          one_dig = true;
        }
        if (pos > 0) {
          string str_2{str.substr(pos - 1, 2)};
          if (hash.find(str_2) != hash.end()) {
            two_dig = true;
            if (one_dig) {
              opt++;
            }
          }
        }
        if (pos > 1) {
          string str_3{str.substr(pos - 2, 3)};
          if (hash.find(str_3) != hash.end()) {
            thr_dig = true;
            if (one_dig || two_dig) {
              opt++;
            }
          }
        }

        if (!one_dig && !two_dig && !thr_dig) {
          error = true;
          break;
        }
      }
    }

    if (error) {
      printf("0\n");
    }
    else {
      opt = opt % 1000000007;
      printf("%llu\n", opt);
    }

    scanf("%d", &size);
  }
}