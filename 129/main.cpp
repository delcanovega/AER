#include <iostream>
#include <array>
using namespace std;

int pure(int n) {
    if (n == 0 || n == 6 || n == 9)
        return 6;
    else if (n == 2 || n == 3 || n == 5)
        return 5;
    else if (n == 4)
        return 4;
    else if (n == 1)
        return 2;
    else if (n == 8)
        return 7;
    else //if (n == 7)
        return 3;
}
int diff(int a, int b) {
    if (a == b)
        return 0;

    if (a > b) {
        int tmp{b};
        b = a;
        a = tmp;
    }
    
    switch (a) {
        case 0:
            switch (b) {
                case 1:
                    return 4;
                case 2:
                    return 3;
                case 3:
                    return 3;
                case 4:
                    return 4;
                case 5:
                    return 3;
                case 6:
                    return 2;
                case 7:
                    return 3;
                case 8:
                    return 1;
                case 9:
                    return 2;
            }
        case 1:
            switch (b) {
                case 2:
                    return 5;
                case 3:
                    return 3;
                case 4:
                    return 2;
                case 5:
                    return 5;
                case 6:
                    return 6;
                case 7:
                    return 1;
                case 8:
                    return 5;
                case 9:
                    return 4;
            }
        case 2:
            switch (b) {
                case 3:
                    return 2;
                case 4:
                    return 5;
                case 5:
                    return 4;
                case 6:
                    return 3;
                case 7:
                    return 4;
                case 8:
                    return 2;
                case 9:
                    return 3;
            }
        case 3:
            switch (b) {
                case 4:
                    return 3;
                case 5:
                    return 2;
                case 6:
                    return 3;
                case 7:
                    return 2;
                case 8:
                    return 2;
                case 9:
                    return 1;
            }
        case 4:
            switch (b) {
                case 5:
                    return 3;
                case 6:
                    return 4;
                case 7:
                    return 3;
                case 8:
                    return 3;
                case 9:
                    return 2;
            }
        case 5:
            switch (b) {
                case 6:
                    return 1;
                case 7:
                    return 4;
                case 8:
                    return 2;
                case 9:
                    return 1;
            }
        case 6:
            switch (b) {
                case 7:
                    return 5;
                case 8:
                    return 1;
                case 9:
                    return 2;
            }
        case 7:
            switch (b) {
                case 8:
                    return 4;
                case 9:
                    return 3;
            }
        default:  //case 8:
            return 1;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    while (num >= 0) {
        int sum{0};
        array<int, 100000> v;
        int i{1}, j{0};
        int prev{0};

        while (num >= 0) {
            // Insert
            if (j == 0)
                v[j] = pure(num);
            else
                v[j] = diff(prev, num);
            j++;

            // Changes
            for (int k{0}; k < j; k++) {
                sum += v[k];
            }

            prev = num;
            cin >> num;
        }
        v[j] = pure(prev);
        j++;

        for (int k{0}; k < j; k++) {
            for (int l{i}; l < j; l++) {
                sum += v[l];
            }
            i++;
        }

        cout << sum << endl;
        cin >> num;
    }
}