#include <stdio.h>
#include <math.h>

int main() {
    int h, m;
    double ha, ma, a;
    scanf("%d%d", &h, &m);
    if (h < 1 || h > 12 || m < 0 || m > 59) {
        return 1;
    }
    ha = (h % 12) * 30 + 0.5 * m;
    ma = m * 6;
    a = (ha - ma);
    if (a > 180) {
        a = 360 - a;
    }
    printf("%0.3f", a);

    return 0;
}
