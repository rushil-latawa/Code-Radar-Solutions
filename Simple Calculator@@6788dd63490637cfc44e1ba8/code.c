#include<stdio.h>
int main(){
    float a , b,sum=0,d,e;
    char c;
    float f;
    scanf("%f %f %c",&a,&b,&c);
    sum= a+b;
    d= a-b;
    e=a*b;
    f=a/b;
    if (c=='+'){
        printf("%.0f",sum);
    }
    else if (c=='-'){
        printf("%.0f",d);
    }
    else if (c=='*'){
        printf("%d",e);
    }
    else if (c=='/'){
        if(b==0){
            printf("error");
        }
        else{
        printf("%.0f",f);
        }
    }
}    