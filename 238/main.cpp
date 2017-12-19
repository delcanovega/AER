#include <stdio.h>
//#include "Queue.h"
#include <deque>
using namespace std;

void suParte(int monton[], const int piratas, const int turno, const int botin);

int main() {
    
    int botin, piratas;
    scanf("%d", &botin);
    while( botin != 0 ) {
        int billete;
        //vector<int> queue;
        int monton[botin];
        scanf("%d", &piratas);
        for (int i=0; i<botin; i++){
            scanf("%d", &billete);
            monton[i] = billete;
        }
        
        for (int turno = 0; turno < piratas; turno++){
            suParte(monton, piratas, turno, botin);
        }
        printf("%s\n", "---");
            
        scanf("%d", &botin);
    }
    
    return 0;
}

void suParte(int monton[], const int piratas, const int turno, const int botin) {
    int suma = 0;
    //Queue<int> mostrar;
    deque<int> cola;
    for(int i=0; i<botin; i++){
        if (i%piratas == turno){
            suma += monton[i];
            //mostrar.push_back(monton[i]);
            cola.push_back(monton[i]);
        }
    }
    printf("%d:", suma);
    while ( !cola.empty()){
        printf(" %d", cola.front());
        //mostrar.pop_front();
        cola.pop_front();
    }
    printf("\n");
}