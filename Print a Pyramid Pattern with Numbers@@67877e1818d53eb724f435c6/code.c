#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j =0;j<=a-1;j++){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
    }
}