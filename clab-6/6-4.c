#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define column 5


bool checkMatrixForSymetric(int array[][column], int n) {
    bool valid = false;
    int validTMP = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] == array[j][i]) {
                validTMP++;
            }
        }
    }
    if (validTMP == n * n) {
        valid = true;
    }
    return valid;
}

int main() {
    int symetricArray[5][5] = {{1, 2, 3, 4, 5},
                               {2, 3, 4, 5, 6},
                               {3, 4, 5, 6, 7},
                               {4, 5, 6, 7, 8},
                               {5, 6, 7, 8, 9}};

    int nonSymmetricArray[5][5] = {{1, 2, 3, 4, 7},
                                   {2, 3, 6, 7, 6},
                                   {3, 4, 5, 6, 7},
                                   {4, 9, 6, 7, 8},
                                   {2, 6, 7, 8, 9}};


    if (checkMatrixForSymetric(symetricArray, column) == true) printf("\nSymetric");
    else printf("\nNon Symetric");

    if (checkMatrixForSymetric(nonSymmetricArray, column) == true) printf("\nSymetric");
    else printf("\nNon Symetric");
}
