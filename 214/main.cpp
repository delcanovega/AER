#include <map>
#include <stdio.h>
using namespace std;

int main() {
    int num;
    scanf("%d", &num );

    char name[20];
    int *mem;
    while (num != 0) {

        map<string, int> m;

        for (int i = 0; i < num; i++) {

            scanf("%s", name );
            m[name]++;
        }
        scanf("%d", &num );
        for (int i = 0; i < num; i++) {
            scanf("%s", name );
            mem = &m[name];
            (*mem)++;
            printf("%d\n", *mem );
        }
        printf("%s\n", "" );


        scanf("%d", &num );
    }
    return 0;
}