#include <stdio.h>

int main() {
    int w,r;
    double s;
    scanf("%d%d", &w,&r);
    if (w <= 60) {
        s = w * r;
    }
    else if (w <= 120) {
        s = 60 * r + (w - 60) * r * 1.33;
    }
    else {
        s = 60 * r + 60 * r * 1.33 + (w - 120) * r * 1.66;
    }

    printf("%0.1f ", s);

}
