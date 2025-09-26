#include <stdio.h>

int sumofDigits(int n){
    if(num==0)
       return 0;
    return (n%10)+sumofDigits(n/10);
    
}

int main(){
    int n ;
    scanf("%d",&n);
    printf("%d",sumofDigits(n));
    return 0;
}
