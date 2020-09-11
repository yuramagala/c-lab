#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define column 100

int maximal(a, b) {
    if (a > b) return a;
    return b;
}

int getMaximalArrayElementIndex(int array[], int n) {
    int maximalElement[2] = {0, 0};//index, value
    for (int i = 0; i < n; ++i) {
        maximalElement[1] = maximal(maximalElement[1], array[i]);
        if (maximalElement[1] == array[i]) maximalElement[0] = i;
    }
    return maximalElement[0];
}

int getAbsSum(int array[], int n) {
    int summary = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) {
            for (int j = i + 1; j < n && array[j] != 0; ++j) {
                summary += abs(array[j]);
            }
        }
    }
    return summary;
}

int main() {
    srand((unsigned) time(NULL));
    int arrayWithRandomNumbers[column];
    for (int i = 0; i < column; ++i) {
        arrayWithRandomNumbers[i] = -100 + rand() % (100 - -100 + 1);
        printf(" [%d]%d ", i, arrayWithRandomNumbers[i]);
    }

    printf("\nMaximal value index = %d", getMaximalArrayElementIndex(arrayWithRandomNumbers, column));
    printf("\nThe amount of numbers between two zero values = %d", getAbsSum(arrayWithRandomNumbers, column));
    return 0;
}
