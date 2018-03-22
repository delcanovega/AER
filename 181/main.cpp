#include <iostream>

int N;
static int table[15][15];
static int check[15][15];

bool inBounds(int i, int j) {
    if (i >= N || j < 0)
        return false;
    return true;
}

int tower(int i, int j) {
    if (!inBounds(i, j) || table[i][j] == -1)
        return 0;

    if (check[i][j] == 0) {
        table[i][j] = tower(i, j-1) + tower(i+1, j);
        check[i][j] = 1;
    }
    return table[i][j];
}

int main() {
    std::ios_base::sync_with_stdio(false);

    std::cin >> N;
    while (N != 0) {
        // Init the table
        char c;
        for (int i{0}; i < N; i++) {
            for (int j{0}; j < N; j++) {
                std::cin >> c;
                if (c == 'X')
                    table[i][j] = -1;
                else
                    table[i][j] = 0;
                check[i][j] = 0;
            }
        }
        table[N-1][0] = 1;
        check[N-1][0] = 1;

        std::cout << tower(0, N-1) << std::endl;

        std::cin >> N;
    }
}