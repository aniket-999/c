#include<stdio.h>
#include<math.h>
int isprime(int num) {
    int flag;
    for(int i = 2; i<sqrt(num); i++) {
        if(num % i == 0) {
            flag = 0;
        }
        else {
            flag = 1;
        }
    }
    return flag;
}
int main() {
    int n;
    scanf("%d", n);
    if(isprime(n)) {
        printf("it is a prime number");
    }
    else {
        printf("it is not a prime number");
    }
    return 0;
}