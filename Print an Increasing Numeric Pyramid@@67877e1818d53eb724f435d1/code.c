// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int star = 1;
    for (int i=0;i<a;i++){
        int c=1;
        for (int j=0;j<a-i-1;j++){
            printf(" ");
        }
        for (int j = 0 ; j<star;j++){
            printf("%d ",c);
            c++;
        }printf("\n");
        star+=2;
    }
    return 0;
}