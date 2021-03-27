/*#include<stdio.h>
void printpattern(int n) {
    if(n==1) {
        printf("* \n");
        return ;
    }
    printpattern(n-1);
    for(int i=1; i<=(2*n-1); i++) {
        printf("*");

    }
    printf("\n");
}
int main()
{
    int n=4;
    printpattern(n);
    return 0;
}*/

#include<stdio.h>
void printpattern(int n) {
    if(n==1) {
        printf("* \n");
        return 0;
    }
    
    for(int i=1; i<n; i++) {
        for(int j=1; j<=(2*n-1); j++) { 
            printf("*");
        }
        printf("\n");
    }
    printpattern(n-1);
}
int main()
{
    printpattern(4);
    return 0;
}