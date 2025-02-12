// Your code here...
#include <stdio.h>
int main(){
    int a;
    char c;
    scanf("%d",&a);
    for (int i =a;i>=1;i--){
        c = 'A';
        for(int j=1;j<=i;j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
}