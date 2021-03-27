#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of row you want");
    scanf("%d", &n);
    for(int i=0; i<=5; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<i; k++)
        {
            printf("1 ");
        }
        
    printf("\n");
    }
    return 0;
}