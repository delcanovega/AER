#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  
  int plates, crowns;
  cin >> plates >> crowns;
  while (plates != 0 || crowns != 0) {
    map<double, string> m;
    vector<int> p;
    vector<int> c;

    // Reading
    for (int i{0}; i < plates; i++) {
      int tmp;
      cin >> tmp;
      p.push_back(tmp);
    }
    for (int i{0}; i < crowns; i++) {
      int tmp;
      cin >> tmp;
      c.push_back(tmp);
    }
    
    // Processing
    for (vector<int>::const_iterator it{p.cbegin()}; it != p.cend(); it++) {
      for (vector<int>::const_iterator it2{c.cbegin()}; it2 != c.cend(); it2++) {
	double aux{*it / 1.0};
	double dev{(aux / *it2)};
	stringstream str{""};
	str << *it << "-" << *it2;

	m.insert(make_pair(dev, str.str()));
      }
    }

    // Printing
    map<double, string>::const_iterator it{m.cbegin()};
    if (it != m.cend()) {
      cout << it->second;
      it++;
    }
    for (; it != m.cend(); it++) {
      cout << " " <<  it->second;
    }
    cout << '\n';
    
    cin >> plates >> crowns;
  }
}