#include <stdio.h>
#include <vector>
#include <deque>
using namespace std;

int main(int argc, char const *argv[]) {
    char in;
    while(scanf("%c", &in ) != EOF){
        bool stackError = false, queueError = false;
        vector<int> stack;
        deque<int> queue;
        while(in != '\n'){
            if(in!='+'&&in!='-'&&in!='*'&&in!='/'){
                int a = in - '0';
                stack.push_back(a);
                queue.push_back(a);
            } else {
                //Operar
                int res, op1stack=0, op2stack=0, op1queue=0, op2queue=0;
                //PILA
                if(!stack.empty()){
                    op2stack = stack.back();
                    stack.pop_back();
                }
                if(!stack.empty()){
                    op1stack = stack.back();
                    stack.pop_back();
                }
                //COLA
                if(!queue.empty()){
                    op2queue = queue.front();
                    queue.pop_front();
                }
                if(!queue.empty()){
                    op1queue = queue.front();
                    queue.pop_front();
                }
                if(in == '+'){
                    res = op1stack+op2stack;
                    stack.push_back(res);
                    res = op1queue+op2queue;
                    queue.push_back(res);
                } else if (in == '-'){
                    res = op1stack - op2stack;
                    stack.push_back(res);
                    res = op1queue - op2queue;
                    queue.push_back(res);
                } else if (in == '*'){
                    res = op1stack*op2stack;
                    stack.push_back(res);
                    res = op1queue*op2queue;
                    queue.push_back(res);
                } else if(in == '/') {
                    if (op2stack == 0){
                        stackError = true;
                    } else {
                        res = op1stack/op2stack;
                        stack.push_back(res);
                    }
                    if(op2queue == 0){
                        queueError = true;
                    } else {
                        res = op1queue/op2queue;
                        queue.push_back(res);
                    }
                }

            }
            scanf("%c", &in );
        }

        //MOSTRAR
        //alt
        if (stackError && queueError) printf ("ERROR = ERROR\n");
		else {
            if (!stackError)
            {
                printf ("%d", stack.back());
                if (!queueError)
                {
                    stack.back()==queue.front() ? printf (" = ") : printf (" != ");
                    printf ("%d\n",  queue.front());
                }
                else printf (" != ERROR\n");
            }
            else printf ("ERROR != %d\n", queue.front());
        }
    }
    return 0;
}