#include<stdio.h>
int reverse(int num1)
{
    int number=0;
    int rem;
    for(num1; num1>0; num1/=10) {
        rem = num1%10;
        number = number*10 +rem;
    }
    return number;
}
int main() 
{
    int num1;
    printf("enter the number \n");
    scanf("%d", &num1);
    printf("the reverse of the entered number is %d \n", reverse(num1));
    if(num1 == reverse(num1)) {
        printf("it is a pallindrome \n");
    }
    else {
        printf("it is not a pallindrome \n");
    }
    return 0;
}