#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the number");
    scanf("%d%d",&num1,&num2);
    if (num1<num2){
        printf("%d, is greater than %d\n",num1,num2);
        }else if(num1>num2){
            printf("%d, is greatest than %d\n",num2,num1);
            }else{
            printf("both are equal:%d\n");
            
        }
    

    return 0;
}
