#include <stdio.h>
int b;
scanf("%d",&b);
int c=0;
int a[b];
for(int i =0;i<b;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<b;i++){
    for(int j=i+1;j<b;j++){
        if(a[i]==a[j]){
            c++;
        }
    }
    if(c>b/2){
        printf("%d",c);
    }
    else{
        printf("-1");
    }
}
