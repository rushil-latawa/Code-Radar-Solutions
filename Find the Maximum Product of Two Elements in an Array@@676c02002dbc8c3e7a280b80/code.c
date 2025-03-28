// Your code here..
#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }printf("%d",a[n-1]*a[n-2]);
}