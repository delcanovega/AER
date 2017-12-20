#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <ctype.h>
using namespace std;

class Nada{};

int main(int argc, char const *argv[]) {
    int lineas;
    scanf("%d", &lineas );
    while( lineas != 0){
        char clean;
        scanf("%c", &clean ); // \n

        map<string, map<int, Nada> > m;

        for (int i = 1; i <= lineas; i++) {
            string str;
            getline(cin, str);

            stringstream ss(str);
            string buffer;
            while(ss >> buffer){
                //char c = buffer[0];
                if(buffer.length() > 2){
                    /*if (isupper(buffer[0])){
                        buffer[0] = tolower(buffer[0]);
                    }*/
                    for(unsigned int j=0; j<buffer.length(); j++){
                        buffer[j] = tolower(buffer[j]);
                    }/*
                    map<string, map<int, Nada> >::iterator it = m.find(buffer);
                    if(it != m.end()){
                        (*it).second[i];
                    } else {
                        map<int, Nada> v;
                        v[i];
                        m.emplace(buffer, v);
                    }*/
                    m[buffer][i];
                    //m.emplace(buffer, nested);
                }
            }
        }
        for (auto it = m.cbegin(); it != m.cend(); ++it){
            printf("%s", (*it).first.c_str() );
            for (auto nested_it = (*it).second.cbegin(); nested_it != (*it).second.cend(); ++nested_it){
                  printf(" %d", (*nested_it).first );
            }
            printf("%s\n", "" );
        }
        printf("%s\n", "----" );

        scanf("%d", &lineas );
    }
    return 0;
}