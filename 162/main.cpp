#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    int size;
    int num;

    cin >> size;
    while (size != 0) {
        array<int, 25000> s;
    
        for (int i{0}; i < size; i++) {
            cin >> num;
            s[i] = num;
        }
        std::qsort(s.begin(), size, sizeof(int), [](const void* a, const void* b)
        {
            int arg1 = *static_cast<const int*>(a);
            int arg2 = *static_cast<const int*>(b);
     
            if(arg1 < arg2) return -1;
            if(arg1 > arg2) return 1;
            return 0;
     
        //  return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
        //  return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
        });

        int middle{ size/2 };

        if (size % 2 == 0) {
            cout << s[middle-1] + s[middle] << endl;
        }
        else {
            cout << s[middle] * 2 << endl;
        }

        cin >> size;
    }
}