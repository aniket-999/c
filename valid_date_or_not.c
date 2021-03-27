#include<stdio.h>
int main()
{
    int flag = 1; 
    int leap = 0;
    int d,m,y;
    printf("enter a date in format of dd-mm-yyyy ");
    scanf("%d-%d-%d", &d, &m, &y);
    if(y%4==0) {
        leap=1;
    }
    if(y<1850 || y>2050) {
        flag = 0;
    }
    else if(m<0 || m>12) {
        flag = 0;
    }
    else if (d<0) {
        flag = 0;
    }
    else if(m==2) {
        if(d>28) {
            flag = 0;
        }
        if(d==29 && leap==1) {
            flag = 1;
        }
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
        if(d>31) {
            flag = 0;
        }
    }
    else if(m==4 || m==6 || m==9 || m==11) {
        if(d>30) {
            flag = 0;
        }
    }
    if(flag==0) {
        printf("you entered an invalid date \n Please correct it \n");
    }
    if(flag==1) {
        printf("your  entered date is %d-%d-%d", d, m, y);
    }
    return 0;
}