#include <iostream>
#include <vector>
using namespace std;

bool checkTop(const char pretendiente, const char top);

int main() {

    vector<char> stack;
    int parejas = 0;
    while ( !cin.eof() ) {
        
        char in = cin.get();

        if( in == 'h' || in == 'H'){
            stack.push_back(in);
        }
        else if (in == '@')
            stack.clear();
        else if (in == 'm' || in == 'M'){

            if (!stack.empty() && checkTop(in, stack.at(stack.size()-1))){
                parejas++;
                stack.pop_back();
            }
            else if (!stack.empty())
                stack.clear();
        }
        else if (in == '\n'){
            cout << parejas << endl;
            parejas = 0;
            stack.clear();
        }
    }
    return 0;
}

bool checkTop(const char pretendiente, const char top){
    bool pareja = false;
    if((pretendiente == 'm' && top == 'h') || (pretendiente == 'M' && top == 'H'))
        pareja = true;
    
    return pareja;
}