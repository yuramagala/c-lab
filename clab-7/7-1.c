#include <stdio.h>
#include <stdlib.h>
#include <TIME.h>

#define column 7

int minimal(int a, int b) {
    if (a < b) return a;
    return b;
}

int getMinimalElementValue(int *array, int n) {
    int minimalElement = 100;
    for (int i = 0; i < n; ++i) {
        if (i % 2 != 0) {
            minimalElement = minimal(minimalElement, array[i]);
        }
    }
    return minimalElement;
}

int main() {
    int array[column] = {13, 2, -6, 7, 12, 13, 7};
    int * pArray = array;

    printf("\nMinimal element with odd index = %d", getMinimalElementValue(pArray, column));
    return 0;
}
