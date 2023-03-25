#include <stdio.h>
#include <stdlib.h>

int suma(int n) {
    int suma = 0;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

void liczbyNivena(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % suma(i) == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 50;
    liczbyNivena(n);
    return 0;
}
