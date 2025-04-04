#include <stdio.h>
int main() {
    int n,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        for(int j = i+1;i<n;j++){
            if(a[i]>a[j]){
                c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
    }
    if(a[0]>a[1]){
    printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
}
