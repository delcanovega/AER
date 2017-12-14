#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;

bool itsKaprekar(char a, char b, char c, char d) {
    if (a == '6' && b == '1' && c == '7' && d == '4')
        return true;
    return false;
}

bool itsKaprekar(int a) {
    if (a == 6174)
        return true;
    return false;
}

bool itsRepdig(int a, int b, int c, int d) {
    if ((a == b) && (b == c) && (c == d))
        return true;
    return false;
}

int main() {
    int cases;
    scanf("%d", &cases);

    for (int i = 0; i < cases; ++i) {
        int num;
        scanf("%d", &num);

        int a = num/1000;
        int b = (num/100)%10;
        int c = (num/10)%10;
        int d = num%10;

        if (itsKaprekar(num))
            printf("%d\n", 0);
        else if (itsRepdig(a, b, c, d))
            printf("%d\n", 8);
        else {
            int cont = 0, big, small, result;

            while (!itsKaprekar(result)) {
                vector<int> array = {a, b, c, d};

                sort(array.begin(), array.end());
                small = array.at(0)*1000 + array.at(1)*100 + array.at(2)*10 + array.at(3);
                big = array.at(3)*1000 + array.at(2)*100 + array.at(1)*10 + array.at(0);
                result = big - small;

                a = result/1000;
                b = (result/100)%10;
                c = (result/10)%10;
                d = result%10;

                cont++;
            }
            printf("%d\n", cont);
            result = 0;
        }

    }
    return 0;
}