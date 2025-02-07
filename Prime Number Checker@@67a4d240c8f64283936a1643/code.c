#include <stdio.h>

int isPrime(int num){
    int a=1;
   if(num<2){
    return 0;
   } else{
    for(int i=2;i<num;i++){
        if(num%i==0){
            a=0;
        }
    }
    if(a==1){
        return 1;

    } else{
        return 0;
    }
   }
}