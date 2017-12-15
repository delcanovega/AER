#include <iostream>
#include <vector>
using namespace std;

bool popNext(char expected, vector<char> &s);

int main() {

    // pila vacia, 0 errores: listos para empezar
    vector<char> s;
    int errors = 0;

    while (!cin.eof()) {
        char c = cin.get();
        // si c es 
        //    - un paréntesis, llave, mayor-que o corchete de apertura, lo apila
        if ((c == '(') || (c == '{') || (c == '[')) {
            s.push_back(c);
            //s.push(c);
        }
        //    - un paréntesis, llave, menor-que o corchete de cierre, 
        //      si cierra bien con el último apilado, desapila el último
        //      y si no, apunta 1 error
        else if (c == ')') {
                if (!popNext('(', s))
                    errors++;
        }

        else if (c == '}') {
                if (!popNext('{', s))
                    errors++;
        }
        else if (c == ']') {
                if (!popNext('[', s))
                    errors++;
        }

        //    - un fin-de-línea, y 
        //      si la pila está vacía y hay 0 errores, muestra YES
        //      y si no, muestra NO
        //      (y en ambos casos vacía la pila y hace errores=0, para la siguiente vuelta)
        else if (c == '\n') {
            if (s.empty() && errors == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            while (s.size() > 0)
                s.pop_back();
            errors = 0;
        }
        //    - todo lo demás, lo ignora
        else {
            //No hace nada
        }
    }

	// en los casos de prueba, siempre hay un '\n' como último caracter
    return 0;
}

bool popNext(char expected, vector<char> &s){
    if(! s.empty() && s.at(s.size()-1) == expected) {
        s.pop_back();
        return true;
    } 
    else {
        return false;
   }
}