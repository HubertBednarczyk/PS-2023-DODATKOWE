#include <stdio.h>
#include <stdlib.h>

void foo(int *x1, int *x2, int *x3){
    if(*x1 > *x2){
        *x3 = *x2;
    }else if(*x2 > *x1){
        *x3 = *x1;
    }
}

int main()
{
    int x1=6,x2=5,x3=7;
    foo(&x1,&x2,&x3);
    printf("%d\n",x3);
    return 0;
}
