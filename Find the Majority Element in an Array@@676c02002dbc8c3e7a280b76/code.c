#include <stdio.h>
int n;
scanf("%d",&n);
int c=0;
int a[n];
for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            c++;
        }
    }
    if(c>n/2){
        printf("%d",c);
    }
    else{
        printf("-1");
    }
}
