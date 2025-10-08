#include<stdio.h>
int main(){
    int a,b,reminder;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    reminder=a%b; 
    printf("Reminder=%d",reminder);
    return 0;
}
