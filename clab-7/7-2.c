#include <stdio.h>
#include <stdlib.h>
#include <TIME.h>

int getM(int *pArray, int n){
    int pr = 1;
    for (int i = 0; i < n; ++i) {
        if (pArray[i] != 0 ){
            pr *= pArray[i];
        }
    }
    return pr;
}

int getSumAbs(int *pArray, int n){
    int sumVar = 0;
    for (int i = 0; i < n; ++i) {
        if (pArray[i] < 0 ){
            for (int j = i+1; j < n; ++j) {
                sumVar += abs(pArray[j]);
            }
        }
    }
    return sumVar;
}

int main() {
    srand((unsigned) time(NULL));
    int n;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n <= 0);

    int *pArray = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i) {
        pArray[i] = -100 + rand() % (100 - -100 + 1);
    }

    printf("\nProduct of nonzero elements of the array = %d", getM(pArray, n));
    printf("\nThe sum of the modules of the array elements located after the first negative element. = %d", getSumAbs(pArray, n));

    return 0;
}
