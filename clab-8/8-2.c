#include <stdio.h>

double Factorial(int n) {
    if (n <= 1) return 1;
    return (n * Factorial(n - 1));
}

double Counting(int n, int d) {
    return Factorial(n) / (Factorial(n - d));
}

int main() {
    double c = Counting(5,3);
    printf("%f - How many three-digit numbers can be written with the digits 0, 1, 2, 3, 4, if each of these digits can be used no more than once?\n", c);
    return 0;
}