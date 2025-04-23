#include <stdio.h>
#include <iostream>
#include <filesystem>

void swap(int *a, int *b);

int main() {

    //Variablen
    int x, y;
    printf("Bitte x und y eingeben: ");
    scanf("%d %d", &x, &y);
    printf("%d %d \n", x, y);

    swap(&x, &y);

    printf("%d %d \n", x, y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}