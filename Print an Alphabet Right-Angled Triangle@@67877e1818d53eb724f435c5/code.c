#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char e='A';
    for(int i =1;i<=a;i++){
        for(int j =1;j<=i;j++){
            printf("%c ",e);
        }printf("\n");
    }
}