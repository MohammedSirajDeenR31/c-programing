#include<stdio.h>
int main(){
    int n,lastdigit;
    printf("Enter a numbers:");
    scanf("%d",&n);
    lastdigit=n%10;
    printf("Lastdigit=%d",lastdigit);
    return 0;
}
