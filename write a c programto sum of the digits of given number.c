#include <stdio.h>

int sumofdigits(int n)
{
    if(n==0)
       return 0;
    return(n%10)+sumofdigits(n/10);
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sumofdigits(n));
    return 0;
}
