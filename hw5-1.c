#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    double f;
    scanf("%f",&c);
    f = (c*1.8)+32;
    f=(f*10+0.5)/10;
    printf("%0.1f",f);
}
