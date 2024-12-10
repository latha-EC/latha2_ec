include<stdio>
#include<string.h>
int main(){
    char arr[100];
    printf("Enter a string: \n");
    // scanf("%[^\n]s",arr);
    // gets(arr);
    fgets(arr,10,stdin);
    printf("\nThe string is: %s",arr);
    return 0;
}