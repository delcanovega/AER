#include <iostream>
#include <map>
#include <vector>
using namespace std;
using my_map = map<char, vector<pair<int, int>>>;

void repaint(char painting[500][500], my_map& m, char from, char to) {
  if (m.find(from) == m.end())
    return;

  vector<pair<int, int>>& v = m.at(from);
  while(!v.empty()) {
    painting[v.back().first][v.back().second] = to;
    m[to].push_back({v.back().first, v.back().second});
    v.pop_back();
  }
  /*
  for (vector<pair<int, int>>::iterator it{m.at(from).begin()}; it != m.at(from).end(); it++) {
    painting[it->first][it->second] = to;
    m[to].push_back({it->first, it->second});
  }*/
  m.erase(from);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  
  int rows;
  int cols;
  cin >> rows >> cols;
  while (rows != 0 || cols != 0) {
    char painting[500][500];
    my_map m;

    for (int i{0}; i < rows; i++) {
      for (int j{0}; j < cols; j++) {
	char pixel;
	cin >> pixel;
	painting[i][j] = pixel;
	m[pixel].push_back({i, j});
      }
      cin.ignore(256, '\n');
    }

    int editors;
    cin >> editors;
    for (int i{0}; i < editors; i++) {
      char from;
      char to;
      cin >> from >> to;
      //modify
      repaint(painting, m, from, to);

      cin.ignore(256, '\n');
    }

    for (int i{0}; i < rows; i++) {
      for (int j{0}; j < cols; j++) {
	cout << painting[i][j];
      }
      cout << '\n';
    }

    cin >> rows >> cols;
  }
}