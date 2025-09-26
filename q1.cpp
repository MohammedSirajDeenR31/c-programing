#include<stdio.h>
int main(){

    int a,b;
    printf("enter a greater number");
    scanf("%d %d",&a,&b);
	if(a>b)
	printf("%d is greater" ,a);
	else
	printf("%d is greater",b);
	return 0;
}