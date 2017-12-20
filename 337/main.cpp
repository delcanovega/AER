#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[]) {
    /* code */
    int casos;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        /* code */
        int up[6];
        for (int j = 0; j < 6; j++) {
            /* code */
            scanf("%d", &up[j]);
        }
        int tam, down;
        scanf("%d", &down );
        tam = up[0] + down;

        int j = 1;
        bool yes = true;
        while ( j < 6 && yes) {
            scanf("%d", &down);
            if(up[j]+down != tam){
                yes = false;
            }
            j++;
        }
        if(!yes){
            while(j<6){
                scanf("%d", &down );
                j++;
            }
        }

        if(yes){
            printf("%s\n", "SI" );
        } else {
            printf("%s\n", "NO" );
        }

    }
    return 0;
}