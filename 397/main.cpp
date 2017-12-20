#include <cstdio>
using namespace std;

int main() {
    int cases;
    scanf("%d", &cases);
    
    for (int i{0}; i < cases; i++) {
        int num;
        scanf("%d", &num);

        num % 3 == 1 ? printf("NO\n") : printf("SI\n"); 
    }
}