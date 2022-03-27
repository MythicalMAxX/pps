#Program Name: Program to find product of n!.


#include<stdio.h>

int product(int num){
if (num<=1)
    return num;
else
    return num*product(num-1);

}

int main(){
    int num1, num2;
    printf("Enter the terms");
    scanf("%d",&num1);
    num2 = product(num1);
    printf("%d",num2);
    return 0;
}
