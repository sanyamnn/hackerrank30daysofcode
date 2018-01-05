/*This is the correct version of day 10 problem*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int rem=0,s=0,t=0;


    while(n>0)
        {
        rem=n%2;
        n=n/2;
        if(rem==1)
         {   s++;
           if(s>=t)

            t=s;

        }
        else{

            s=0;
        }   
    }

    printf("%d",t);
}
