#include <stdio.h>
#include <stdlib.h>

int* suma(int* a, int* b) {
    int* wynik = malloc(sizeof(int));
    *wynik = *a + *b;
    return wynik;
}

int main() {
    int x = 3, y = 5;
    int* wynik = suma(&x, &y);
    printf("Suma: %d\n", *wynik);
    free(wynik);
    return 0;
}
