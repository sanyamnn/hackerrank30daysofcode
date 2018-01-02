#include<stdio.h>
int main(void){
char inputString[100];
gets(inputString); /* We did not use scanf because it breaks the string at places where space is added */
printf("Hello, World.\n");
printf("%s",inputString);
}
