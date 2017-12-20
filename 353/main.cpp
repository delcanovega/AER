#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
using my_map = unordered_map<int, pair<int, int>>;

void go(int t, my_map map, int num, set<int>& act, set<int>& best,
        int& ox, int& gold, int& top, int offset) {

  for (int i{offset}; i < num; i++) {
    act.insert(i);
    ox += (3 * map[i].first);
    gold += map[i].second;

    if (ox <= t) {
      if (gold > top) {
        best = act;
        top = gold;
      }
      go(t, map, num, act, best, ox, gold, top, offset+i+1);
    }

    ox -= (3 * map[i].first);
    gold -= map[i].second;
    act.erase(i);

  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  int t;
  while (cin >> t) {
    my_map map;
    int num;
    cin >> num;
    for (int i{0}; i < num; i++) {
      pair<int, int> chest;
      cin >> chest.first >> chest.second;

      map.insert({i, chest});
    }

    // BACKTRACKING
    set<int> act;
    set<int> best;
    int ox{0};
    int gold{0};
    int top{0};
    go(t, map, num, act, best, ox, gold, top, 0);

    // PRINT OUT
    cout << top << '\n';
    cout << best.size() << '\n';
    for (auto it = best.cbegin(); it != best.cend(); ++it) {
      cout << map[*it].first << " " << map[*it].second << '\n';
    }
    cout << "----\n";
  }
}