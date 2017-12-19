#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  double d;
  while(scanf("%lf", &d) != EOF){
    double max=0, max_aux=0, min=10, min_aux=10;
    double result=0;
    for (int i=0;i<7; i++){
      if(i!=0){
        //cin >> d;
        scanf("%lf", &d);
        result += d;
      } else
        result += d;

      if(d > max){
        max_aux = max;
        max = d;
      }
      else if(d > max_aux){
        max_aux = d;
      }
      if (d < min){
        min_aux = min;
        min = d;
      }
      else if (d < min_aux){
        min_aux = d;
      }
    }
    cin.get();
    //cout << (result-max-max_aux-min-min_aux)*2 << endl;
    printf("%d\n", (int)((result-max-max_aux-min-min_aux)*2));
  }
}