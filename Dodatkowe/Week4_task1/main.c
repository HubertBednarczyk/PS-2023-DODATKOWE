#include <stdio.h>
#include <stdlib.h>

void foo(double *x){
   *x = (*x)*(*x);
}

int main()
{
    double x = 2.0;
    printf("Wartosc przed: %f\n",x);
    foo(&x);
    printf("Wartosc po: %f\n",x);
    return 0;
}
