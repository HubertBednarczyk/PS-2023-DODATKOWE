#include <stdio.h>
#include <stdlib.h>

double foo(int n, double x){
    double suma = 0;
    for(int i=1;i<=n;i++){
        double term = 1;
        for(int j=1;j<=i;j++){
            term *=x;
        }
        suma+=term+i;
    }
    return suma;
}

int main()
{
    int n = 3;
    double x = 2.5;
    double suma = foo(n,x);
    printf("Wartosc dla n=%d i x=%lf wynosi: %lf \n",n,x,suma);
    return 0;
}
