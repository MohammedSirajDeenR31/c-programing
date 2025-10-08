#include<stdio.h>
int main(){
    int a,b,quotient;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    quotient=a/b; //integer division
    printf("Quotient=%d",quotient);
    return 0;
}
