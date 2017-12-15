#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

int main() {
    int cases;
    scanf("%d", &cases);

    while (cases != 0) {

        int moda = 0;
        int moda_name;

        map<int, int> m;
        int value;
        for (int i = 0; i < cases; ++i) {
            scanf("%d", &value);
            int &p = m[value];
            p++;
            if (p > moda){
                moda_name = value;
                moda = p;
            }
        }

        printf("%d\n", moda_name);

        scanf("%d", &cases);
    }
    return 0;
}