#include<stdio.h>
int binary(int num) {
    int a, b, rem;
    a=1;
    for(num; num>0; num/=10) {
        rem = num % 10;
        b += a*rem;
        a*=2; 
    }
    return b;
}
int octal(int num) {
    int a, b, rem;
    a=1;
    for(num; num>0; num/=10) {
        rem = num % 10;
        b += a*rem;
        a*=8; 
    }
    return b;
}
int main() {
    int num, base;
    printf("enter the base in which you are entering a number \n");
    printf("entered base should be either 2 or 8 \n");
    scanf("%d", &base);
    printf("enter the number");
    scanf("%d", &num);
    if(base == 2) {
        printf("%d", binary(num));
    }
    else if(base ==8) {
        printf("%d", octal(num));
    }
    else {
        printf("you have entered wrong base");
    }
    return 0;
}