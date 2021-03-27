/* #include<stdio.h>
int main() {
    int n;
    int a=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%d", a);
            a++;
        }
        a=1;
        printf("\n");
    }
    return 0;
} */

#include<stdio.h>
int main() {
    int n;
    int a=2;
    int b=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%d ", a);
            a++;
        }
        a = a-b;
        b++;
        printf("\n");
    }
    return 0;
}