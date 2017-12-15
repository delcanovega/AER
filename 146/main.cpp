#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    scanf("%d", &num );
    while(num != 0){
        vector<int> stack;
        vector<int> stack_aux;
        for (int i = num; i >= 1; i--) {
            if(i%2 == 0)
                stack.push_back(i);
        }
        int criba = 3;
        while (criba <= stack.size() || criba <= stack_aux.size()){
            int limit = stack.size();

            for (int i = 0; i < limit; i++) {
                // Numero sin suerte
                if(i%criba == 0){
                    stack.pop_back();
                }
                // Numeros con suerte
                else{
                    stack_aux.push_back(stack.back());
                    stack.pop_back();
                }
            }
            while(!stack_aux.empty()){
                stack.push_back(stack_aux.back());
                stack_aux.pop_back();
            }
            criba++;
        }
        while(!stack.empty()){
            stack_aux.push_back(stack.back());
            stack.pop_back();
        }
        printf("%d:", num );
        while(!stack.empty()){
            printf(" %d", stack.back() );
            stack.pop_back();
        }
        while(!stack_aux.empty()){
            printf(" %d", stack_aux.back() );
            stack_aux.pop_back();
        }
        printf("%s\n", "" );
        scanf("%d", &num );
    }
    return 0;
}