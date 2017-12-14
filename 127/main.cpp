#include <cstdio>
#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main() {
  int cases;
  scanf("%d", &cases);

  for (int i = 0; i < cases; i++) {
    deque<string> list;

    string name;
    cin >> name;
    while (name != "F") {
      list.push_back(name);

      cin >> name;
    }

    unsigned int beds;
    int song;
    scanf("%u %d", &beds, &song);

    if (beds == 0)
      printf("%s\n", "NADIE TIENE CAMA" );
    else if (beds >= list.size())
      printf("%s\n", "TODOS TIENEN CAMA" );
    else {
      int k{-1};
      while (list.size() > beds) {
        k = (k + song) % list.size();
        list.erase(list.begin() + k);
        k--;
      }

      auto it = list.cbegin();
      printf("%s", (*it).c_str());
      it++;
      for (; it != list.cend(); ++it) {
        printf(" %s", (*it).c_str() );
      }
      printf("\n");
    }
  }
}