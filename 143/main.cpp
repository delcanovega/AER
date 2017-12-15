#include <stdio.h>
#include <stack>

void apilar(std::stack<int> &s, const int first) {
    s.push(first);
    int num;
    scanf("%d", &num);
    while (num != -1) {
        s.push(num);
        scanf("%d", &num);
    }
}

void voltear(std::stack<int> &s) {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int size, j;
        scanf("%d", &size);
        int aux[size];
        for (int j = 0; j < size; ++j) {
            aux[j] = s.top();
            s.pop();
        }
        for (int j = 0; j < size; ++j) {
            s.push(aux[j]);
        }
    }
}

int main() {
    int first;
    scanf("%d", &first);
    while (first != -1) {
        std::stack<int> s;
        apilar(s, first);
        voltear(s);
        printf("%d\n", s.top());

        scanf("%d", &first);
    }
    return 0;
}