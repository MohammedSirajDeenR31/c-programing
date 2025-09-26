#include <stdio.h>

int main(){
    int n, count=1;
    scanf("%d\n",&n);
    char str[n];
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=' '){
            count++;
        }
        printf("%d",count);
        return 0;
    }
}             