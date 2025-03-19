// Your code here...
int isPrime(){
    int a;
    scanf("%d",&a);
    int f=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            f=1;
            break;
        }
        else{
            f=0;
        }
    }
    if(f=1){
        printf("0");
    }
    else{
        printf("1");
    }
}