#include <stdio.h>
#include <stdlib.h>

int main()
{
   int w,t;
   double s;
   scanf("%d%d",&w,&t);
   if(w<=60){
    s = w*t;
   }
   else if(w<=120){
    s = w*1.33*t;
   }
   else {
    s = w*1.66*t;
   }
   printf("%0.1f",s);
}

