#include <stdio.h>
using namespace std;

int main() {
  char c;
  int suma = 0;
  scanf("%c", &c);
  while ( c != '-'){
    printf("%c ", c);
    suma += (c-'0');

    scanf("%c", &c);
    while( c != '\n'){
    //while(fgetc(stdin) != '\n'){
      suma += (c-'0');
      printf("+ %c ", c);
      scanf("%c", &c);
    }
    printf("= %d\n", suma);
    suma = 0;
    scanf("%c", &c);
  }
}