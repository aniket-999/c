#include<stdio.h>
int main() {
    int num, temp, j, k, l, m, n1, n2, n3;
    int k1, l1, m1;
    int a1, a2;
    a1 = 0;
    a2 = 0;
    for(int num = 100; num <= 333; num++) {
        for(int i = num; i <= num*3; i = i+num) {
            temp = i;
            n1 =temp%10;
            temp= temp/10;
            n2 = temp%10;
            temp= temp/10;
            n3 = temp%10;
            temp= temp/10;
            if(n1!=n2  && n2!=n3  && n1!=n3)   {
                a1++;
            }
        }
    
    if(a1==3) {
        for(k=num; k>0; k=k/10) {
            k1 = k%10;
            for(l=2*num; l>0; l=l/10) {
                l1 = l%10;
                for(m=3*num; m>0; m=m/10) {
                    m1 = m%10;
                    if(k1 != l1 && k1 != m1 && l1 != m1) {
                        a2++;
                    }
                }
            }
        }
    }
    
    //printf("%d %d", a2, a1);
    if(a2==27) {
        printf("%d %d %d \n", num, 2*num, 3*num);
    }
    
    a1=0;
    a2=0;
    }
    return 0;
}