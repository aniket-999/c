/*#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int k=0; k<n-i; k++) {
            printf(" ");
        }
        for(int j=0; j<i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int k=0; k<n-i; k++) {
            printf(" ");
        }
        for(int j=0; j<2*i+1; j++) {
            printf("*");
        }    
        printf("\n");
    }
    for(int l=0; l<(n-1); l++) {
        for(int k=0; k<=l+1; k++) {
            printf(" ");
        }
        for(int m=0; m<2*(n-l-1)-1; m++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}