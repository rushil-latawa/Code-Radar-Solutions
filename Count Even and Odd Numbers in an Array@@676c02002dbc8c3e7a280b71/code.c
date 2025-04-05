// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c=0,b=0;
    for(int i =0;i<n;i++){
        printf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
    if(a[i]%2==0){
        c++;
        break;
    }
    else{
        b++;
    }
        
    }  
    printf("%d",c);
    printf("%d",b);
}