 #include <stdio.h>
int main(){
    int a , b,sum,d,e,f;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    sum= a+b;
    d= a-b;
    e=a*b;
    f=a/b;
    if (c=='+'){
        printf("%d",sum);
    }
    else if (c=='-'){
        printf("%d",d);
    }
    else if (c=='*'){
        printf("%d",e);
    }
    else if (c=='/'){
        printf("%d",f);
    }
}    