#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    scanf("%d", &num );

    while (num != 0){
        char c;
        scanf("%c", &c );

        map<string, int> m;

        for(int i=0; i<num; i++){
            string nombre;
            getline(cin, nombre);
            char estado[10];
            scanf("%s", estado );
            if(estado[0] == 'C'){
                m[nombre]++;
            } else {
                m[nombre]--;
            }
            scanf("%c", &c );

        }

        for(auto it = m.cbegin(); it != m.cend(); ++it){
            if((*it).second != 0){
                printf("%s, %d\n", (*it).first.c_str(), (*it).second );
            }
        }
        printf("%s\n", "---" );

        scanf("%d", &num );
    }

    return 0;
}