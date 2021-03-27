#include<stdio.h>
int main() {
    int n;
    int a=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if((i+j) % 2 == 0) {
                printf("1 ");
            }
            else if((i+j) % 2 != 0) {
                printf("0 ");
            }
            
            //a++;
        }
        //a=1;
        printf("\n");
    }
    return 0;
}