// Your code here...
#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        if(a[i]%i=0){
            c++;
            break;
        }
    }printf("%d",c);

}