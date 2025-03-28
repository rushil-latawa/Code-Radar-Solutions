#include <stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    if(n<2);
    return -1;
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
            else if(a[i]==a[j]){
                printf("0");
            }
        }
    }
    printf("%d",a[n-2]);
}