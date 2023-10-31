#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    double cost;
    scanf("%d",&min);
    if (min<800){
        cost = min*0.9;
        printf("%0.1f",cost);
        }
        if(min>800 && min<1500){
            cost = (min*0.9)*0.9;
            printf("%0.1f",cost);
            }
        if (min>=1500){
                cost = (min*0.9)*0.79;
                printf("%0.1f",cost);
                }

            }





