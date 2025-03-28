#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<=n;j++){
            if(a[i] > a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    } printf("%d", a[n - 2]);
    return 0;
}