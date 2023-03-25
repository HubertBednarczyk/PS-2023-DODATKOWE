#include <stdio.h>
#include <stdlib.h>

void sumaliczb(int *liczba) {
    int suma = 0;
    int n = *liczba;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    *liczba = suma;
}

int main() {
    int x = 1234;
    printf("Wartosc x przed wywolaniem funkcji sumaliczb: %d\n", x);
    sumaliczb(&x);
    printf("Wartosc x po wywolaniu funkcji sumaliczb: %d\n", x);
    return 0;
}
