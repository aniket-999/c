#include<stdio.h>
int fact(int n) {
    int f = 1;
    for(int i=1; i<=n; i++) {
        f = f*i;
    }
    return f;
}
int perm(int n, int r) {
    int p;
    p = fact(n)/fact(n-r);
    return p;
}
int comb(int n, int r) {
    int c;
    c = perm(n,r)/fact(r);
    return c;
}
int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("the permutation %dP%d = %d and the combination %dC%d = %d", n, r, perm(n, r), n, r, comb(n,r));
    return 0;
}
