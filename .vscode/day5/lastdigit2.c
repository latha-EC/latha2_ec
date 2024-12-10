#include<stdio.h>
int main(){
    int inputNumber=0,digit,countnumber=0;
    printf("enter a number:  \n");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countnumber++;
        inputNumber=inputNumber/10;
    }
    printf("number of digits: %d",countnumber);
    return 0;
}