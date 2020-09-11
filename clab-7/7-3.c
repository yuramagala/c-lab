#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int **p(int **arrayA, int **arrayB, int n, int m) {
    int **resultArray = (int **) calloc(n * m, sizeof(int));
    for (int i = 0; i < n; ++i) {
        resultArray[i] = (int *) calloc(n * m, sizeof(int));
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int r = 0; r < n; r++) {
                sum += arrayA[j][r] * arrayB[r][i];
            }
            resultArray[j][i] = sum;
        }
    }
    return resultArray;
}


int **randomArrayGenerate(int n, int m, int min, int max) {
    int **array = (int **) calloc(n * m, sizeof(int));
    for (int i = 0; i < n; ++i) {
        array[i] = (int *) calloc(n * m, sizeof(int));
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            array[i][j] = min + rand() % (max - min + 1);
        }
    }
    return array;
}

void printArray(int **array, int n, int m) {
    for (int i = 0; i < n; ++i) {
        printf("\n");
        for (int j = 0; j < m; ++j) {
            printf("%d \t", array[i][j]);
        }
    }
}


int main() {
    int n = 5, m = 7;
    srand(time(NULL));

//    printf("Enter n:");
//    scanf("%d", &n);
//    if (n<1) return 0;
    int arrayA = randomArrayGenerate(n, m, -100, 100);
    int arrayB = randomArrayGenerate(n, m, 0, 100);

    printf("\nGenerated A array:");
    printArray(arrayA, n, m);

    printf("\nGenerated A array:");
    printArray(arrayB, n, m);

    printf("\nMatrix Multiplication Result:");
    printArray(p(arrayA, arrayB, n, m), n, m);
    return 0;
}
