#include<stdio.h>

void fib(int num1,int num2){
    int num3;
    num3 = num1+num2;
    if(num3<100){
        num3 = num1+num2;
        printf("%d ",num3);
        printf("\n");
        num1= num2;
        num2 = num3;
        fib(num1,num2);
    }
}

int main(){
    int num1=0,num2=1;
    fib(num1,num2);
    return 0;
}
