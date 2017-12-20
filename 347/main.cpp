#include <stdio.h>

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    while (width != 0 || height != 0) {
        if (width < 10 || height < 10)
            printf("%d\n", 0);
        else {
            int num = 0;

            while (width > 9 && height > 9) {
                int a;
                if (width > height) {
                    a = width / height;
                    width -= height * a;
                }
                else {
                    a = height / width;
                    height -= width * a;
                }
                num += a;
            }
            printf("%d\n", num);
        }

        scanf("%d %d", &width, &height);
    }
    return 0;
}