//scanfAndPrintf.c

#include <stdio.h> 

int main (void) {
int num1,num2,num3;
scanf("%d %d %d", &num1, &num2, &num3);
printf("%d",num1*num2+num3);
}