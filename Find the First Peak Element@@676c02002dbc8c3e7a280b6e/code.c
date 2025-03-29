// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=i+2;k<n;k++){
                if(a[i]<a[j] && a[j]>a[k]){
                    printf("%d",a[j]);
                }
            }
        }
    }

}