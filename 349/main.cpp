#include <iostream>
using namespace std;

int read_num() {
    char c;
    cin >> c;

    int ic = c - '0';
    if (ic < 0 || ic > 9) {
        switch (c) {
            case '+':
                ic = read_num() + read_num();
                break;
            case '-':
                ic = read_num() - read_num();
                break;
            case '*':
                ic = read_num() * read_num();
                break;
            case '/':
                ic = read_num() / read_num();
                break;
        }

    }

    return ic;
}

int main() {
    ios_base::sync_with_stdio(false);
    
    int cases;
    cin >> cases;
    for (int i{0}; i < cases; i++) {
        cout << read_num() << endl;
    }
}