#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int star = 1;
    for (int i=0;i<a;i++){
        for (int j=0;j<n-i-1;j++){
            printf(' ');
        }
        for (int j = 0 ; j<star;j++){
            printf("*");
        }
        star+=2;
    }
    return 0;
}