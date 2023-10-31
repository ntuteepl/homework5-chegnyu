#include <stdio.h>
#include <math.h>

int main() {
    int hours, minutes;
    double hourAngle, minuteAngle, angle;

    scanf("%d%d", &hours, &minutes);

    if (hours < 1 || hours > 12 || minutes < 0 || minutes > 59) {

        return 1;
    }
    hourAngle = (hours % 12) * 30 + 0.5 * minutes;
    minuteAngle = minutes * 6;
    angle = fabs(hourAngle - minuteAngle);
    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("%0.1f", angle);

    return 0;
}

