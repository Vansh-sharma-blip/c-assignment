#include<stdio.h>
#include"calculator.h"
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",sum(a,b));
	printf("\n");
	printf("%d",sub(a,b));
	printf("\n");
    printf("%d",mul(a,b));
 


}
