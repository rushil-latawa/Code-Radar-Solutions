#include <stdio.h>

int main() {
    int n,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>=a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    c=a[0];
        if(c<a[1]){
         printf("Sorted");}
        else if (c>a[1]){
            printf("Not Sorted");
        } 
}        
