#include<stdio.h>
#include<math.h>
int sumdiv(int number) {
    int sum = 0;
    for(int i=1; i<number; i++) {
        if(number % i == 0) {
        sum = sum + i;
        }
        else {
            sum = sum;
        }
    }
    return sum;
}
int main() {
    printf("the perfect numbers in 0 to 10000 are as follows \n");
    for(int number=0; number<10000; number++) {
        if(number == sumdiv(number)) {
            printf("%d \n", number);
        }
    }
    return 0;
}