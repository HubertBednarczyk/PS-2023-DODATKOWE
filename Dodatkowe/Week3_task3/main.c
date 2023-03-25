#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0;
    for(int i=100;i>=1;i--){
        suma -= (-i);
    }
    printf("%d\n",suma);
    return 0;
}
