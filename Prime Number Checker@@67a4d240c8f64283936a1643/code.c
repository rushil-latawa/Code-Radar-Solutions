// Your code here...
int prime(){
    int a;
    scanf("%d",&a);
    int f;
    for(int i =2;i<a;i++){
        if(i%a==0){
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