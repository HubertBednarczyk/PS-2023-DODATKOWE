#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, palindrom = 0, xyz, first_n;

    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);

    first_n = n;

    // Je�li liczba jest ujemna, zmieniamy jej znak i sprawdzamy, czy odwr�cona jest palindromem
    if (n < 0) {
        n = abs(n); // funkcja abs() zwraca warto�� bezwzgl�dn� liczby n
        while (n != 0) {
            xyz = n % 10;
            palindrom = palindrom * 10 + xyz;
            n /= 10;
        }
        if (first_n == -palindrom) {
            printf("%d jest palindromem.\n", first_n);
        } else {
            printf("%d nie jest palindromem.\n", first_n);
        }
    }
    // Je�li liczba jest dodatnia lub r�wna zero, sprawdzamy, czy jest palindromem
    else {
        while (n != 0) {
            xyz = n % 10;
            palindrom = palindrom * 10 + xyz;
            n /= 10;
        }
        if (first_n == palindrom) {
            printf("%d jest palindromem.\n", first_n);
        } else {
            printf("%d nie jest palindromem.\n", first_n);
        }
    }

    return 0;
}
