#include <stdio.h>
int main(){
    int a , b,sum;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    sum= a+b;
    if (c=='+'){
        printf("%d",sum);
    }
}    