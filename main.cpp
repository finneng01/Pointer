#include <stdio.h>
#include <iostream>
#include <filesystem>
void swap(int *a, int *b);

int main() {

    //Variablen
    int x, y;
    int *n_ptr;
    x = 3;
    y = 5;

    swap(&x, &y);

    printf("%d %d \n", x, y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}