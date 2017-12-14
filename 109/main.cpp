#include <stdio.h>  // I/O
#include <map>      // porque usa menos memoria que unordered_map
#include <cstring>  // strcmp
using namespace std;

int main() {
    char cat[17], stra[17], strb[17];
    int a, b, jugados;
    char empate;
    //int *pa, *pb;  // Atajos a los values del map (pareja1 y pareja2)

    while(scanf("%s", cat ) == 1 && strcmp(cat, "FIN") != 0){
        jugados = 0;  // Partidos jugados durante la liga

        // <nombre pareja, puntos>
        map<string, int > m;

        struct par{
            string nombre;
            int puntos;
        }winner;
        winner.puntos = 0;

        while (scanf("%s", stra ) == 1 && strcmp(stra, "FIN") != 0) {
            scanf("%d", &a );    // Sets pareja local
            scanf("%s", strb );  // Nombre pareja visitante
            scanf("%d", &b );    // Sets pareja visitante

            int &pa = m[stra];
            int &pb = m[strb];

            if(a > b) {
                pa += 2;  // Dos puntos al ganador
                pb++;     // Un punto al otro
            } else {
                pa++;
                pb += 2;
            }

            if((pa) == winner.puntos)
                empate = 's';
            else if((pa) > winner.puntos){
                empate = 'n';
                winner.nombre = stra;
                winner.puntos = (pa);
            }
            if((pb) == winner.puntos)
                empate = 's';
            else if((pb) > winner.puntos){
                empate = 'n';
                winner.nombre = strb;
                winner.puntos = (pb);
            }

            jugados++;
        }
        // Una vez tenemos todas los partidos jugados

        a = m.size();     // Numero de parejas
        //m.erase(m.begin(), m.end());
        b = (a*(a-1));    // Combinaciones posibles de parejas
        a = b - jugados;  // Partidos sin jugar

        if(empate == 's'){
            printf("%s %d\n", "EMPATE", a );
        } else {
            printf("%s %d\n", winner.nombre.c_str(), a );
        }
    }
    return 0;
}
