#include <cstdio>

int main() {
    int num;
    scanf("%d", &num);
    while (num > 0) {
        if (num == 1 || num == 9 || num == 45 || num == 55 ||
          num == 99 || num == 297 || num == 703 || num == 999 ||
          num == 2223 || num == 2728 || num == 4879 || num == 4950 ||
          num == 5050 || num == 5292 || num == 7272 || num == 7777 ||
          num == 9999 || num == 17344 || num == 22222 || num == 38962)
            printf("%s\n", "SI");
        else
            printf("%s\n", "NO");

        scanf("%d", &num);
    }
}