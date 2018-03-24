#include <iostream>
#include <array>

void init(int i, std::array<int, 20001>& t) {
    if (i >= 20001 || t[i] == 1)
        return;
    
    t[i] = 1;
    init(i*3, t);
    init(i+5, t);
}

int main() {
    std::ios_base::sync_with_stdio(false);

    std::array<int, 20001> table =  std::array<int, 20001>();

    // Initialize the table;
    init(1, table);

    int n;
    std::cin >> n;
    while (n != 0) {
        table[n] != 0 ? std::cout << "SI" : std::cout << "NO";
        std::cout << std::endl;

        std::cin >> n;
    }
}