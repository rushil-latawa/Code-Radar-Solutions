#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%a/2==1 && a%1==0){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
}