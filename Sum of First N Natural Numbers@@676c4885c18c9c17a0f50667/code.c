#include <stdio.h>
int main(){
    int a,b;
    b=0;
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        printf("%d",i);
        b=b+i;
    }
}