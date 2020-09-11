#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int recursion(int n) {
    if (n <= 0)return 0;
    printf("\t%d", n);
    return recursion(--n);
}

int main() {
    recursion(10);
    return 0;
}
