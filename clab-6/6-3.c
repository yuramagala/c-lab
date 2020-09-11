#include <stdio.h>
#include <stdlib.h>
#include <TIME.h>

#define column 100

int minimal(int a, int b) {
    if (a < b) return a;
    return b;
}

int getMinimalElementValue(int array[], int n) {
    int minimalElement = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 == 0 && array[i] != 0) {
            minimalElement = minimal(minimalElement, array[i]);
        }
    }
    return minimalElement;
}

int main() {
    srand((unsigned) time(NULL));
    int arrayWithRandomNumbers[column];
    for (int i = 0; i < column; ++i) {
        arrayWithRandomNumbers[i] = -100 + rand() % (100 - -100 + 1);
        printf(" [%d]%d ", i, arrayWithRandomNumbers[i]);
    }

    printf("\nMinimal element multiple 2 = %d", getMinimalElementValue(arrayWithRandomNumbers, column));
    return 0;
}
