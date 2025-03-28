#include <stdio.h>
int min(){
    int n,c,r;
    scanf("%d",&n);
     c=a[0];
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(c>a[i]);
        c=a[i];
    }
    printf("%d",c);
}
int max() {
    int n;
    scanf("%d",&n); 
    int a[n];
    for(int i =0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<=n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
int main(){
    min();
    max();
}
