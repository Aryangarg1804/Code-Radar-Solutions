void printPrimesInRange(int a,int b){
    if(a<2){
        a = 2;
    }
    int x = 1;
    for(int j=a;j<=b;j++){
        x = 1;
        for(int i=2;i*i<=j;i++){
            if(j%i==0){
                x = 0;
                break;
            }
        }
        if(x){
            printf("%d ",j);
        }
    }
}