#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a=b) && (b=c) && (a=c)){
        printf("Equilateral");
    }
    else if ( ((a=b) && (b!=c))||((b=c)&&(a!=c))||((c=a)&&(a!=b))){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}