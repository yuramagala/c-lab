#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getTermination(int age){
    if (age > 10 && age < 15){
        printf("\n%d POKIB", age);
        return 0;
    } else {
        if (age % 10 == 0) {
            printf("\n%d POKIB", age);
            return 0;
        }
        else if (age % 10 == 1) {
            printf("\n%d PIK", age);
            return 0;
        }
        else if (age % 10 > 1) {
            printf("\n%d POKu", age);
            return 0;
        }
        else if (age % 10 > 4) {
            printf("\n%d POKIB", age);
            return 0;
        }
    }
}

int main() {
    getTermination(1);
    getTermination(21);
    getTermination(34);
    getTermination(14);

    return 0;
}
